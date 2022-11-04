#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);
void printArray(vector<int> arr);

int main()
{
    vector<int> nums1={2,0};
    int m=1;
    vector<int> nums2={1};
    int n=1;
    merge(nums1,m,nums2,n);

    return 0;
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
    vector<int> *aux= new vector<int>(0);
    int k=0;
    int i=0;
    int j=0;
    
    while((k<(m+n) ||i<m || i<n) && nums2.empty()!=true)
    {   
        if(nums1[i]==nums2[j])
        {   
            aux->insert(aux->begin()+k,nums1[i]);
            k++;
            aux->insert(aux->begin()+k,nums2[j]);
            k++;
            i++;
            j++;
        }
        else if(nums1[i]<nums2[j])
        {
            if(i==m )
            {   
                if(m!=0)
                {
                    i--;
                }
                aux->insert(aux->begin()+k,nums2[j]);
                j++;
            }
            else
            {
                aux->insert(aux->begin()+k,nums1[i]);
            }
            k++;
            i++;
        }
        else if(nums2[j]<nums1[i])
        {
            if(j==n) 
            {
                if(n!=0) j--;
                aux->insert(aux->begin()+k,nums1[i]);
                i++;
            }
            else
            {
                aux->insert(aux->begin()+k,nums2[j]);
            }
            k++;
            j++;
        }
    }
    if(nums2.empty()!=true)
    {
        nums1=*aux; 
        delete aux;
    }
    printArray(nums1);
}

void printArray(vector<int> arr)
{
    cout<<"{ ";
    for(int i=0;i<arr.size();i++)
    {
       cout<<arr[i]<<" , "; 
    }
    cout<<"\b\b}"<<endl;
}
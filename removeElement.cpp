#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& nums,int val);
void printArray(vector<int> nums);
void swap(int &x,int &y);

//Entra nums={0,1,2,2,3,0,4,2} , val=2 y su output es k=5 , nums={0,1,4,0,3}
int main()
{
    vector<int> nums={2,2,2};
    int val=2;
    int k=removeElement(nums,val);
    cout<<"k= "<<k<<endl;
    printArray(nums);
    return 0;
}

int removeElement(vector<int>& nums,int val)
{
    int k=0;
    if(nums.size()==1 && nums[0]==val);
    else
    {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[nums.size()-1]==val)
            {
                nums.erase(nums.end()-1);
                i--;
            }
            else if(nums[i]==val)
            {
                swap(nums[i],nums[nums.size()-1]);
                nums.erase(nums.end()-1);
            }
        }
        k=nums.size();
    }
    return k;
}
/*int removeElement(vector<int>& nums, int val) 
{
    int j = 0;
    for(auto& num: nums)
    {
        if (num != val)
        {
            nums[j++] = num;
        }
    }
    return j;
}*/

void printArray(vector<int> nums)
{
    cout<<"{ ";
    for(int i=0;i<nums.size();i++)
    {
       cout<<nums[i]<<" , "; 
    }
    cout<<"\b\b}"<<endl;
}

void swap(int &x,int &y)
{
    int aux=x;
    x=y;
    y=aux;
}
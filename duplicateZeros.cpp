#include <iostream>
#include <vector>

using namespace std;

void duplicateZeros(vector<int> &arr)
{
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==0)
        {
            arr.insert(arr.begin()+i,0);
            arr.erase(arr.end()-1);
            i++;
        }
    }
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

int main()
{
    vector<int> arr={1,0,2,3,0,4,5,0};
    duplicateZeros(arr);
    printArray(arr);
    return 0;
}
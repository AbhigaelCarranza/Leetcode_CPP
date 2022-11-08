#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool checkIfExist(vector<int>& arr);
void printArray(vector<int> nums);

int main()
{
    vector<int> arr={-10,12,-20,-8,15}; //{1,7,11,15,16,18,19}
    bool result=checkIfExist(arr);
    cout<<"The Result is:  "<<result<<endl;
    return 0;
}

bool checkIfExist(vector<int>& arr) 
{
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            if((arr[i])==(2*arr[j]) || (arr[j])==(2*arr[i]))
            {
                return true;
            }
        }
    }
    return false;
}

void printArray(vector<int> nums)
{
    cout<<"{ ";
    for(int i=0;i<nums.size();i++)
    {
       cout<<nums[i]<<" , "; 
    }
    cout<<"\b\b}"<<endl;
}
#include <iostream>
#include <vector>

using namespace std;

void removeElement(vector<int> nums,int val);
void printArray(vector<int> nums);

int main()
{
    vector<int> nums={0,1,2,2,3,0,4,2};
    int val=2;

    return 0;
}

void removeElement(vector<int>& nums,int val)
{
    
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
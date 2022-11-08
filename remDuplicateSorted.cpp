#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<int> nums);
int removeDuplicates(vector<int>& nums);

//La entrada es de nums={0,0,1,1,1,2,2,3,3,4} y el output es de k=5 y nums={0,1,2,3,4,_,_,_,_}
int main()
{   
    vector<int> nums={0,0,1,1,1,2,2,3,3,4};
    int k=removeDuplicates(nums);
    printArray(nums);
    cout<<"k = "<<k<<endl;
    return 0;
}

int removeDuplicates(vector<int>& nums)
{
    int k=0;
    int i=0;
    while(i<nums.size()-1)
    {
        if(nums[i]==nums[i+1])
        {
            nums.erase(nums.begin()+i);
        }
        else
        {
            i++;
        }
    }
    k=nums.size();
    return k;
}
/*
int removeDuplicates(vector<int>& nums)
{
    int n = nums.size(),j=1,ans=1;
    vector<int>nums1 = nums;
    for(int i = 1;i<n;i++)
    {
        if(nums[i] == nums1[i-1]) continue;
            swap(nums[i],nums[j++]);
            ans++;
    }
    return ans;
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
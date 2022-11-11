#include <iostream>
#include <vector>

using namespace std;

bool validMountainArray(vector<int>& arr);

int main()
{
    vector<int> arr={3,7,6,4,3,0,1}; //{3,5,5} -> false o {2,1} -> false, {3,7,6,4,3,0,1,0}
    bool result=validMountainArray(arr);
    cout<<"The result is: "<<result<<endl;

    return 0;
}

bool validMountainArray(vector<int>& arr) 
{    
    int size=arr.size()-1;
    bool increment=false;
    bool decrement=false;

    if(arr.size()>1)
    {
        for(int i=0;i<size;i++)
        {   
            if(arr[i]<arr[i+1]) increment=true;
            else 
            {
                decrement=true;
                while(i<size)
                {
                    if(arr[i]<=arr[i+1])  return false;
                    i++;
                }
            }
        }
    }
    return increment & decrement;
}

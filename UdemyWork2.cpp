#include <iostream>

using namespace std;

void ReturnTheNumbers();

int main()
{
    ReturnTheNumbers();
    return 0;
}

void ReturnTheNumbers()
{
    int array[5]={2,3,1,5,6};
    int sum=0,minor=0,major=0;
    for(int i=0; i<sizeof(array)/sizeof(int);i++)
    {
        sum +=array[i];
        minor=array[0];
        if(minor>array[i])
        {
            minor=array[i];
        }
        else
        { 
            major=array[i];
        }
    }
    float Prom=(float)sum/(sizeof(array)/sizeof(int));
    cout<< "The minor number is: "<<minor<<"\nThe major number is: "<<major<<"\nThe Avarage of the array is: "<<Prom<<endl;
}
#include <iostream>
#include <string>
#include <new>

using namespace std;

string binarioAND(string strArr[],int strLength)
{
    char *arr=new char(strLength-1);
    int i=0;
    int j=0;
    int k=0;
    while(k<strLength && i<strArr[0].length() && j<strArr[1].length())
    {
        if(strArr[0][i]==strArr[1][j])
        {
            arr[k]=strArr[0][i];
            i++;
            j++;
            k++; 
        }
        else
        {
            arr[k]='0';
            i++;
            j++;
            k++;
        }
    }
    strArr[0]=arr;
    delete(arr);
    return strArr[0];
}

int main()
{
    string strArr[]={"101","101"};
    int strLength=strArr->length();
    cout<<binarioAND(strArr,strLength)<<endl;
    return 0;
}

//Se espera que se aplique una AND a las dos comparaciones 100 && 000 = 000 , 101 && 001 = 001
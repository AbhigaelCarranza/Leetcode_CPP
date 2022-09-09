#include <iostream>

using namespace std;

void numberGuay(int );

int main()
{
    numberGuay(6);
    return 0;
}

void numberGuay(int number)
{
    int value=0;
    for(int i=1; i<number; i++)
    {
        value+=i;
        if(value==number)
        {
            cout << "El numero es guay"<<endl;
            break;
        }
        if(value>number)
        {
            cout << "El numero no es guay "<< endl;
            break;
        }
    }
}
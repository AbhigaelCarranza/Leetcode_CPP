#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> i);
int main()
{
    vector<int> VecBlack = {1,2,3,4};
    vector<int> VecAux;
    vector<int> VecRed;

    printVector(VecBlack);
    VecAux.push_back(VecBlack[0]);
    VecBlack.erase(VecBlack.begin());
    printVector(VecBlack);
    cout<<"Vec AUX "<<endl;
    printVector(VecAux);

    return 0;
}

void printVector(vector<int> i)
{
    for(int j=0;j<i.size();j++)
    {
        cout<<i[j]<<", ";
    }
    cout<<endl;
}
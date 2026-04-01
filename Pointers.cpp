#include <iostream>
using namespace std;

int main(){
    int firstValue;
    int secondValue;

    int*pPointer=nullptr;

    //assign pointer with the address of first valuee
    pPointer=&firstValue;
    *pPointer=10;//indirection

    //assign a pointer with the address of secondvalue
    pPointer=&secondValue;
    *pPointer=20;//indirection

    cout<<"firstValue is"<<firstValue<<'\n';
    cout<<"secondValue is"<<secondValue<<'\n';

    return 0;
}
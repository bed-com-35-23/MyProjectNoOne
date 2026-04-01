#include <iostream>
using namespace std;

int main(){
    //declare a pointer and name it so that it doesnt store random address
    int* pPointer=nullptr;

    int integerVar=5;

    //assign a pointr to address of object 
    pPointer=&integerVar;

    //output the value of intergerVar
    cout<<"intergerVar:"<<integerVar<<endl;

    //output the address of integerVar
    cout<<"address of integerVar:"<<&integerVar<<endl;

    //output the addres assined to pPointer
    cout<<"pPointer:"<<pPointer<<endl;
    
    //output the address of pPointer
    cout<<"address of pPointr:"<<&pPointer<<endl;

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int* pPointer=nullptr;

    int numbersArray[3]={10,20,30};

    //assign the address of first element to pointer
    pPointer=numbersArray;

    //output the address of the first element
    cout<<"address of the pointer:"<<pPointer<<endl;
    cout<<"address of numbersArray[0]:"<<numbersArray<<endl;

    //output the value of firstelement using the pointer and indirection
     cout<<"value of pPointer:"<<*pPointer<<endl;

     //output the value of second element
     cout<<"value of ++pPointer:"<<*(++pPointer)<<endl;

     //assign address of first element to pointer
     pPointer=numbersArray;

     //this output the value of the first element
     cout<<"value at pPointer++:"<<*(pPointer)<<endl;

     return 0;
}
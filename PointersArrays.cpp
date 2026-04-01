#include <iostream>
using namespace std;

int main(){
    int numbersArray[5];

    int *pPointer=nullptr;

    //assign the address to the first element to the pointer
    pPointer=numbersArray;
    *pPointer=10;//assign the value to the first element of array

    /*increment the pointer using pointe arithmetic to assign the address of the second 
    element to the pointer*/
    pPointer++;
    *pPointer=20;//assign value to second element

    //assign the address of third element to the pointer
    pPointer=&numbersArray[2];
    *pPointer=30;//assign valu to third element

    /*assign the address of forth element to the pointer
    using pointer arrithmetic*/
    pPointer=numbersArray+3;
    *pPointer=40;//assign value to forth elemnt

    //assign the address to the first element
    pPointer=numbersArray;
    /*assign value to the fifth element to the pointer using indirection 
    and pointer arithmetic*/
    *(pPointer+4)=50;//assign the value to fifth element
    //iterate and output all the element in the array
    for(int n=0;n<5;n++)
    {
        cout<<numbersArray[n]<<",";
    }

    return 0;
}
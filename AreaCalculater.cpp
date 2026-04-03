#include <iostream>
#include<cmath>
using namespace std;

double areaOfSquare(double side){
    return side * side;
}
double areaOfRectangle(double length,double height){
    return length*height;
}
double areaOfTriangle(double base,double height){
    return 0.5*base*height;
}

int main(){
    int option;
    do{
        cout<<"please select the area of the shape you want to calculate"<<endl;
        cout<<"1.square"<<endl;
        cout<<"2.rectangle"<<endl;
        cout<<"3.triangle"<<endl;
        cout<<"4.quit"<<endl;
        cin>>option;

        double side,base,height,length,width;
        switch (option)
        {
        case 1:
              cout<<"enter the size of the side of a square"<<endl;
              cin>>side;
              cout<<"Area or square:"<<areaOfSquare(side)<<endl;
            break;
        case 2:
              cout<<"enter the size of width of rectangle"<<endl;
              cin>>width;
              cout<<"enter the size of length of rectangle"<<endl;
              cin>>length;
              cout<<"area of a rectangle is:"<<areaOfRectangle(length,width)<<endl;
              break;
        case 3:
              cout<<"enter the lendth of base of triangle"<<endl;
              cin>>base;
              cout<<"enter the length of height of a triangle"<<endl;
              cin>>height;
              cout<<"Area of a triangle is:"<<areaOfTriangle(base,height)<<endl;
              break;
        case 4:
              cout<<"good byee!!"<<endl;
        
        default:
            break;
        }
    }while (option !=4);

    return 0;


}
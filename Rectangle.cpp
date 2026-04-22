#include "Rectangle.h"
#include <iostream>

using namespace std;

//constructor
Rectangle::Rectangle() {
length = 0.0f;
width = 0.0f;
}
Rectangle::~Rectangle() {
    // No dynamic memory to clean up
}
setters
void Rectangle::setLength(float l) {
    length = l;
}
void Rectangle::setWidth(float w) {
    width = w;
}
//getters
float Rectangle::getLength() const {
    return length;
}
float Rectangle::getWidth() const {
    return width;
}
//area function
float Rectangle::getArea() const {
    return length * width;
}
int main() {
    Rectangle rect;
    float length, width;

    //user input for length and width
    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;

    rect.setLength(length);
    rect.setWidth(width);
    //out

    cout << "Length: " << rect.getLength() << endl; // Length: 5
    cout << "Width: " << rect.getWidth() << endl;   // Width: 3
    cout << "Area: " << rect.getArea() << endl;        // Area: 15

    return 0;
}
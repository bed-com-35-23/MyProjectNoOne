

#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Constructor
    Rectangle() {
        length = 0.0f;
        width = 0.0f;
    }

    // Destructor
    ~Rectangle() {}

    // Setters
    void setLength(float l) {
        length = l;
    }

    void setWidth(float w) {
        width = w;
    }

    // Getters
    float getLength() const {
        return length;
    }

    float getWidth() const {
        return width;
    }

    // Area
    float getArea() const {
        return length * width;
    }
};

int main() {
    Rectangle rect;

    float length, width;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    rect.setLength(length);
    rect.setWidth(width);

    cout << "Area: " << rect.getArea() << endl;

    return 0;
}
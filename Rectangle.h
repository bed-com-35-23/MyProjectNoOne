#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
  // Default constructor
    Rectangle();
    //destructor
    ~Rectangle();

    //setters
    void setLength(float l);
    void setWidth(float w);
    //getters
    float getLength() const;
    float getWidth() const;

    //area function
    float area() const;
};

#endif // RECTANGLE_H
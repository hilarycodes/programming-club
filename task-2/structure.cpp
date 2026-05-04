////////////////////////
/////Question 4/////
/////////////////////
#include <iostream>

struct Rectangle
{
    int width;
    int breadth;
};

void main()
{
    Rectangle r1;
    r1.breadth = 5;
    r1.width = 10;
    float area = r1.breadth * r1.width;
    std::cout << "Area of rectangle r1: " << area << std::endl;
}
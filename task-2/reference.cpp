////////////////////////
/////Question 3/////
/////////////////////
#include <iostream>

void main()
{
    int x = 25;
    int& z = x; 
    z = 80;
    std::cout << "Value of x: " << x << std::endl;  
}
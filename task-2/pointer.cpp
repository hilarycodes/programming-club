////////////////////////
/////Question 2/////
/////////////////////
#include <iostream>

void main()
{
    int num = 50;
    int* pointer = &num; 
    std::cout << "Value 1 " << *pointer << std::endl;  

    *pointer = 100;     
    std::cout << "Value 2 " << *pointer << std::endl;  // 100
}
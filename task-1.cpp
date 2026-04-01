#include <iostream>


//Solution to problem 2
namespace IntSum 
{
    int sum(int a, int b) 
    {
        return a + b;
    }
}
namespace LongSum 
{
    long sum(long a, long b) 
    {
        return a + b;
    }
}
int main()
{
    printf("Int Sum = %d\n", IntSum::sum(5, 20));
    printf("Long Sum = %d\n", LongSum::sum(5, 24));
}

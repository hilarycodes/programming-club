This markdown file is for the assigned task

### Problem 1
1. Finding the Size of the "Mega" Data Type
Key Information

Maximum addressable width = 2 bytes
1 byte = 8 bits

The maximum addressable width of a CPU defines the largest chunk of data it can process at once.
Mega is the maximum(largest data type) therefore Mega = 2bytes = 2×8 bits =16 bits


### Problem 2
2. 

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
    printf("Long Sum = %d\n", LongSum::sum(5, 20));
}


### Problem 3
3. 

unsigned int x = 0;
x = x - 1;

`x` is an **unsigned int** (typically 32 bits), initialized to `0`.

When you subtract `1` from `0` on an unsigned integer, you get **unsigned integer underflow** (wraparound).

### How Wraparound Works

Unsigned integers cannot be negative. Instead, they wrap around

### Output
```
4294967295

``` 
#### Explanation

Integers are 32bit representation of numbers so 0 in decimal will be written as 00000000 00000000 00000000 00000000
Subtracting 1 from this number will lead to borrowing which will then result in 11111111 11111111 11111111 11111111, whuch is `4294967295` in decimal

# Programming Club Task-2 Solutions

---

## Question 1

```cpp
#include <iostream>

namespace arrayLoops
{
    int arr[5] = { 1, 3, 4, 6, 8 };

    void forLoop()
    {
        for (int i = 0; i < std::size(arr); i++)
        {
            std::cout << "Number: " << arr[i] << std::endl;
        }
    }

    void forEachLoop()
    {
        for (int number : arr)
        {
            std::cout << "Number: " << number << std::endl;
        }
    }
}

int main()
{
    arrayLoops::forLoop();
    arrayLoops::forEachLoop();
    return 0;
}
```

## Question 2 

```cpp
#include <iostream>

int main()
{
    int num = 50;
    int pointer = num;
    std::cout << "Value 1 " << pointer << std::endl;

    pointer = 100;
    std::cout << "Value 2 " << pointer << std::endl;

    return 0;
}
```

## Question 3 

```cpp
#include <iostream>

int main()
{
    int x = 25;
    int& z = x;
    z = 80;
    std::cout << "Value of x: " << x << std::endl;

    return 0;
}
```

## Question 4 

```cpp
#include <iostream>

struct Rectangle
{
    int width;
    int breadth;
};

int main()
{
    Rectangle r1;
    r1.breadth = 5;
    r1.width = 10;
    float area = r1.breadth * r1.width;
    std::cout << "Area of rectangle r1: " << area << std::endl;

    return 0;
}
```

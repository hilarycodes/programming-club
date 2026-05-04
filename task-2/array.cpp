////////////////////////
/////Question 1/////
/////////////////////
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
		for(int number : arr)
		{
			std::cout << "Number: " << number << std::endl;
		}
	}
}

void main()
{
	arrayLoops::forLoop();
	arrayLoops::forEachLoop();
}
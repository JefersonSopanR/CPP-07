#include "Array.hpp"

void test1()
{
	std::cout << "Creating an array of 0 integers" << std::endl;
	Array<int> numbers1(0);
	std::cout << "Accessing empty array" << std::endl;
	Array<int> number(0);
	try
	{
		number[0] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Accessing out of bounds" << std::endl;
	Array<int> numbers(10);
	try
	{
		numbers[10] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		numbers[-1] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main()
{
	std::cout << "Test 0" << std::endl;
	Array<int> intArray(8);
	Array<double> doubleArray(8);

	for (unsigned int i = 0; i < intArray.size(); i++)
	{
		intArray[i] = i;
		doubleArray[i] = i + 0.5;
	}

	for (unsigned int i = 0; i < intArray.size(); i++)
	{
		std::cout << "Int: " << intArray[i] << " " <<  "Double: "<< doubleArray[i] << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Test 1" << std::endl;
	test1();

	std::cout << std::endl;
	std::cout << "Test 2" << std::endl;
	std::cout << "Creating an array of 5 integers" << std::endl;
	 Array<int> numbers(5);  // Creates an array of 5 integers, initialized to 0

    for (unsigned int i = 0; i < numbers.size(); i++)
    {
        std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
    }

	return 0;
}
#include "iter.hpp"

int main()
{
	std::cout << "intArray:" << std::endl;
	int intArray[] = {1, 2, 3, 4, 5};
	iter(intArray, 5, print);

	std::cout << std::endl;
	std::cout << "stringArray:" << std::endl;
	std::string stringArray[] = {"one", "two", "three", "four", "five"};
	iter(stringArray, 5, print);

	std::cout << std::endl;
	std::cout << "doubleArray:" << std::endl;
	double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	iter(doubleArray, 5, print);

	std::cout << std::endl;
	std::cout << "floatArray:" << std::endl;
	float floatArray[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
	iter(floatArray, 5, print);

	return 0;
}

#include <iostream>
#include <string>
int main()
{


	std::cout << "test test";
	const std::string test1= "fazendo test";
	const std::string test2(test1.size(), 'a');
	std::cout << test2;
	return 0;
}



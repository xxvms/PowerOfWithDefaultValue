// PowerOfWithDefaultValue.cpp : Defines the entry point for the console application.
//

#include <iostream>
long  power(long  baseNumber_, int valuePower_ = 2);

int main()
{
	std::cout << "Please provide number: ";
	long double baseNumber;
	std::cin >> baseNumber;
	std::cout << "Please provide power number: ";
	int valuePower;
	std::cin >> valuePower;

	long  result = power(baseNumber, valuePower);

	std::cout << "Result of calculation is: " << result << std::endl;

	system("pause");
    return 0;
}
long  power(long  baseNumber_, int valuePower_)
{
	
	long  result_ = baseNumber_;

	for (int i = 1; i < valuePower_; i++)
	{
		result_ = result_ * baseNumber_;
	}

	return result_;
}


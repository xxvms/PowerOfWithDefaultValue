// PowerOfWithDefaultValue.cpp : Defines the entry point for the console application.
//

#include <iostream>
double power(double baseNumber_, int valuePower_ = 2);

int main()
{
	std::cout << "Please provide number: ";
	double baseNumber;
	std::cin >> baseNumber;
	std::cout << "Please provide power number: ";
	int valuePower;
	std::cin >> valuePower;

	double result = power(baseNumber, valuePower);

	std::cout << "Result of calculation is: " << result << std::endl;

	system("pause");
    return 0;
}
double power(double baseNumber_, int valuePower_)
{
	
	double result_ = 0;

	for (int i = 0; i < valuePower_; i++)
	{
		result_ = baseNumber_ * baseNumber_;
	}

	return result_;
}


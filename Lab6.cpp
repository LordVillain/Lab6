#include <iostream>
#include "fraction.h"

void Vvod(int& numerator1, int& denominator1, int& numerator2, int& denominator2) {
	std::cout << "Enter the numerator and denominator of fraction 1 separated by space: ";
	std::cin >> numerator1 >> denominator1;
	std::cout << std::endl;
	std::cout << "Enter the numerator and denominator of fraction 2 separated by space: ";
	std::cin >> numerator2 >> denominator2;
	std::cout << std::endl << std::endl;
}

int main()
{
	int a, b, c, d;
	Vvod(a, b, c, d);

	RightFraction fraction1(a, b);
	RightFraction fraction2(c, d);

	//вывод двух дробей для удобства
	std::cout << "fraction1: " << std::endl;
	fraction1.PrintProperFraction();
	std::cout << "fraction2: " << std::endl;
	fraction2.PrintProperFraction();

	//сумма
	RightFraction resultsum = fraction1 + fraction2;
	std::cout << "sum: " << std::endl;
	resultsum.PrintProperFraction();

	//умножение
	RightFraction resultmultiply = fraction1 * fraction2;
	std::cout << "multiply: " << std::endl;
	resultmultiply.PrintProperFraction();

	//деление
	RightFraction resultdivide = fraction1 / fraction2;
	std::cout << "divide: " << std::endl;
	resultdivide.PrintProperFraction();

}

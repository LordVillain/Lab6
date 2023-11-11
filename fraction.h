#pragma once
class RightFraction {
public:

	//конструктор
	RightFraction(int numerator, int denominator);

	//копирование
	RightFraction(const RightFraction& other);

	//вывод
	void PrintProperFraction();

	// Метод для сложения
	RightFraction operator+ (const RightFraction& other);

	// Метод для умножения
	RightFraction operator*(const RightFraction& other);

	// Метод для деления
	RightFraction operator/(const RightFraction& other);
	

	//доступ к полям
	int getNumerator();
	int getdenominator();

private:
	//поля
	int _numerator = 0;
	int _denominator = 0;

	int NOD(int a, int b);

	void sokratit(int& numerator, int& denominator);
	};
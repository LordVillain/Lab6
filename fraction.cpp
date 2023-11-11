#include <iostream>
#include "fraction.h"

//конструктор
RightFraction::RightFraction(int numerator, int denominator) {
	if (denominator == 0) {
		std::cout << "Error: denominator can't be zero" << std::endl;
		exit(1);
	}
	_numerator = numerator;
	_denominator = denominator;
	sokratit(_numerator, _denominator);
}

//копирование
RightFraction::RightFraction(const RightFraction& other) {
	_numerator = other._numerator;
	_denominator = other._denominator;
}

//вывод
void RightFraction::PrintProperFraction() {
	if (_numerator < 0 and _denominator > 0)
		std::cout << _numerator << "\n" << "---" << "\n" << " " << _denominator << std::endl << std::endl;

	if (_numerator > 0 and _denominator < 0)
		std::cout << - _numerator << "\n" << "---" << "\n" << " " << -_denominator << std::endl << std::endl;

	if (_numerator == 0)
		std::cout << _numerator << std::endl << std::endl;

    if (_numerator > 0 and _denominator > 0 and _numerator != _denominator)
		std::cout << " " << _numerator << "\n" << "---" << "\n" << " " << _denominator << std::endl << std::endl;

	if (_numerator < 0 and _denominator < 0)
	    std::cout << " " << - _numerator << "\n" << "---" << "\n" << " " << - _denominator << std::endl << std::endl;
	
	if (_numerator == _denominator)
		std::cout << 1 << std::endl << std::endl;
}

//операторы
RightFraction RightFraction::operator+(const RightFraction& other) {
	int newNumerator = (_numerator * other._denominator) + (other._numerator * _denominator);
	int newDenominator = _denominator * other._denominator;
	RightFraction NewFraction(newNumerator, newDenominator);
	return NewFraction;
}

RightFraction RightFraction::operator*(const RightFraction& other) {
	int newNumerator = _numerator * other._numerator;
	int newDenominator = _denominator * other._denominator;
	RightFraction NewFraction(newNumerator, newDenominator);
	return NewFraction;
}

RightFraction RightFraction::operator/(const RightFraction& other) {
	if (other._numerator == 0) {
		std::cout << "divide: " << "\n" << "Error: numerator fraction2 can't be zero" << std::endl;
		exit(1);
	}
	int newNumerator = _numerator * other._denominator;
	int newDenominator = _denominator * other._numerator;
	sokratit(newNumerator, newDenominator);
	RightFraction NewFraction(newNumerator, newDenominator);
	return NewFraction;
}


//доступ к полям
int RightFraction::getNumerator() {
	return _numerator;
}
int RightFraction::getdenominator() {
	return _denominator;
}

int RightFraction::NOD(int a, int b) {
		if (b == 0) {
			return a;
		}
		return NOD(b, a % b);
	}

void RightFraction::sokratit(int& numerator, int& denominator) {

		int temp = NOD(std::abs(_numerator), std::abs(_denominator));
		_numerator /= temp;
		_denominator /= temp;
	}


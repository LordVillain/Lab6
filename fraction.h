#pragma once
class RightFraction {
public:

	//�����������
	RightFraction(int numerator, int denominator);

	//�����������
	RightFraction(const RightFraction& other);

	//�����
	void PrintProperFraction();

	// ����� ��� ��������
	RightFraction operator+ (const RightFraction& other);

	// ����� ��� ���������
	RightFraction operator*(const RightFraction& other);

	// ����� ��� �������
	RightFraction operator/(const RightFraction& other);
	

	//������ � �����
	int getNumerator();
	int getdenominator();

private:
	//����
	int _numerator = 0;
	int _denominator = 0;

	int NOD(int a, int b);

	void sokratit(int& numerator, int& denominator);
	};
#include <iostream>
#include <string>

using namespace std;

class Fraction
{
	friend bool operator == (const Fraction& f1, const Fraction f2);
	friend bool operator != (const Fraction& f1, const Fraction f2);
	friend bool operator <  (const Fraction& f1, const Fraction f2);
	friend bool operator >  (const Fraction& f1, const Fraction f2);
	friend bool operator <= (const Fraction& f1, const Fraction f2);
	friend bool operator >= (const Fraction& f1, const Fraction f2);

private:
	int numerator_{};
	int denominator_{};

public: Fraction(int numerator, int denominator) : numerator_{ numerator }, denominator_{ denominator } {}
};

bool operator==(const Fraction& f1, const Fraction f2)
{
	return (f1.numerator_ ==f2.numerator_ && f1.denominator_ == f2.denominator_);
}

bool operator!=(const Fraction& f1, const Fraction f2)
{
	return (f1.numerator_ != f2.numerator_ && f1.denominator_ != f2.denominator_);
}

bool operator<(const Fraction& f1, const Fraction f2)
{
	return (f1.numerator_ < f2.numerator_ && f1.denominator_ < f2.denominator_);
}

bool operator>(const Fraction& f1, const Fraction f2)
{
	return (f1.numerator_ > f2.numerator_ && f1.denominator_ > f2.denominator_);
}

bool operator<=(const Fraction& f1, const Fraction f2)
{
	return (f1.numerator_ <= f2.numerator_ && f1.denominator_ <= f2.denominator_);
}

bool operator>=(const Fraction& f1, const Fraction f2)
{
	return (f1.numerator_ >= f2.numerator_ && f1.denominator_ >= f2.denominator_);
}



int main() {

	setlocale(LC_ALL, "Rus");
	system("chcp 1251");
	system("cls");

	Fraction f1(4, 3);
	Fraction f2(6, 11);

	cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	cout << "f1" << ((f1  < f2) ? " <  " : " not <  ") << "f2" << '\n';
	cout << "f1" << ((f1  > f2) ? " >  " : " not >  ") << "f2" << '\n';
	cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	
	system("pause");
	return 0;
}



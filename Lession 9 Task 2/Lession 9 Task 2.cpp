#include <iostream>
#include <string>

using namespace std;

class Fraction
{
	friend Fraction operator +  (const Fraction& f1, const Fraction f2);
	friend Fraction operator -  (const Fraction& f1, const Fraction f2);
	friend Fraction operator *  (const Fraction& f1, const Fraction f2);
	friend Fraction operator /  (const Fraction& f1, const Fraction f2);
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

Fraction operator+(const Fraction& f1, const Fraction f2)
{
	return Fraction{ f1.numerator_ + f2.numerator_, f1.denominator_ + f2.denominator_ };
}

Fraction operator-(const Fraction& f1, const Fraction f2)
{
	return Fraction{ f1.numerator_ - f2.numerator_, f1.denominator_ - f2.denominator_ };
}

Fraction operator*(const Fraction& f1, const Fraction f2)
{
	return Fraction{ f1.numerator_ * f2.numerator_, f1.denominator_ * f2.denominator_ };
}

Fraction operator/(const Fraction& f1, const Fraction f2)
{
	return Fraction{ f1.numerator_ / f2.numerator_, f1.denominator_ / f2.denominator_ };
}

bool operator==(const Fraction& f1, const Fraction f2)
{
	return (f1.numerator_ == f2.numerator_ && f1.denominator_ == f2.denominator_);
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

	double a, b, c, d;
	cout << "Введите числитель дроби 1:"; cin >> a;
	cout << "Введите знаменатель дроби 1:"; cin >> b;
	cout << "Введите числитель дроби 2:"; cin >> c;
	cout << "Введите знаменатель дроби 2:"; cin >> d;

	Fraction f1(a, b);
	Fraction f2(c, d);

	cout << a << "/" << b << " + " << c << "/" << d << " = " << ((a / b + c / d)) << endl;
	cout << a << "/" << b << " - " << c << "/" << d << " = " << ((a / b - c / d)) << endl;
	cout << a << "/" << b << " * " << c << "/" << d << " = " << ((a / b * c / d)) << endl;
	cout << a << "/" << b << " / " << c << "/" << d << " = " << ((a / b / c / d)) << endl;
	cout << "++" << a << "/" << b << " * " << c << "/" << d << " = " << ((a / b * c / d)) << endl;
	cout << "Значения дроби " << endl;
	//Я обсалютно уверен что я делаю всё не так.

	cout << endl;

	system("pause");
	return 0;
}



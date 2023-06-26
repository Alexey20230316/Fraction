#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	bool operator == (const Fraction& other)
	{

			int i = 1;

			int a = this->numerator_;
			int b = this->denominator_;

			int c = other.numerator_;
			int d = other.denominator_;
			int byi = 1;

			while (byi)
			{
				if ((b * i) % d)
				{
					i++;
				}
				else
				{
					byi = 0;
				}
			}

			a = a * i;
			b = b * i;
			c = c * (b / d);
			d = b;

		return a == c;
	}
	bool operator != (const Fraction& other) const
	{

			int i = 1;

			int a = this->numerator_;
			int b = this->denominator_;

			int c = other.numerator_;
			int d = other.denominator_;
			int byi = 1;

			while (byi)
			{
				if ((b * i) % d)
				{
					i++;
				}
				else
				{
					byi = 0;
				}
			}

			a = a * i;
			b = b * i;
			c = c * (b / d);
			d = b;

		return a != c;
	}
	bool operator < (const Fraction& other)
	{

		int i = 1;

		int a = this->numerator_;
		int b = this->denominator_;

		int c = other.numerator_;
		int d = other.denominator_;
		int byi = 1;

		while (byi)
		{
			if ((b * i) % d)
			{
				i++;
			}
			else
			{
				byi = 0;
			}
		}

		a = a * i;
		b = b * i;
		c = c * (b / d);
		d = b;

		return a < c;
	}
	bool operator > (const Fraction& other)
	{
		int i = 1;

		int a = this->numerator_;
		int b = this->denominator_;

		int c = other.numerator_;
		int d = other.denominator_;
		int byi = 1;

		while (byi)
		{
			if ((b * i) % d)
			{
				i++;
			}
			else
			{
				byi = 0;
			}
		}

		a = a * i;
		b = b * i;
		c = c * (b / d);
		d = b;

		return a > c;
	}
	bool operator <= (const Fraction& other)
	{
		int i = 1;

		int a = this->numerator_;
		int b = this->denominator_;

		int c = other.numerator_;
		int d = other.denominator_;
		int byi = 1;

		while (byi)
		{
			if ((b * i) % d)
			{
				i++;
			}
			else
			{
				byi = 0;
			}
		}

		a = a * i;
		b = b * i;
		c = c * (b / d);
		d = b;

		return a <= c;
	}
	bool operator >= (const Fraction& other)
	{
		int i = 1;

		int a = this->numerator_;
		int b = this->denominator_;

		int c = other.numerator_;
		int d = other.denominator_;
		int byi = 1;

		while (byi)
		{
			if ((b * i) % d)
			{
				i++;
			}
			else
			{
				byi = 0;
			}
		}

		a = a * i;
		b = b * i;
		c = c * (b / d);
		d = b;

		return a >= c;
	}

};

int main()
{
	Fraction f1(3, 4);
	Fraction f2(3, 4);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}
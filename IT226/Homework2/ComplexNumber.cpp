#include <iostream>

using namespace std;

class ComplexNumber
{
	public:
		// a is a real number, b is a complex number
		int a;
		int b;
		ComplexNumber(){}
		ComplexNumber(int a, int b){
				this->a = a;
				this->b = b;
			}			

		ComplexNumber operator +(ComplexNumber& c)
		{
			ComplexNumber temp;

			// adds the complex numbers, (a+bi) + (c+di) = (a+b) + i(c+d)
			temp.a = this->a + c.a;
			temp.b = this->b + c.b;
			return temp;
		}

		ComplexNumber operator *(ComplexNumber& c)
		{
			ComplexNumber temp;

			// multiplies complex numbers, (a+bi) + (c+di) = (a*c-b*d) + i(a*d + b*c)
			temp.a = (this->a * c.a) - (temp.b * c.b);
			temp.b = (temp.a * c.b) + (temp.b * c.a);
			return temp;
		}

		bool operator ==(ComplexNumber& c)
		{
			ComplexNumber temp;

			// compares complex numbers to see if they're equal, (a+bi) == (c+di) -> if (a==c) & (b==d)
			if (temp.a == c.a && temp.b == c.b)
			{
				cout<< "The complex numbers are equal."<<endl;
				return true;
			}
			return false;
		}

		void toString()
		{

			cout<< "("<< this->a<< " + "<< this->b<< "i)"<<endl;
		}
};
int main()
{
	ComplexNumber first(5,10);
	ComplexNumber second(2,4);

	first.toString();
	second.toString();

	first = first + second;

	first.toString();

	second = first * second;

	second.toString();


	return 0;
}
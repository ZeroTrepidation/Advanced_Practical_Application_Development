
#ifndef TUMM
#define TUMM
#include <iostream>
using namespace std;


class Complex {
private:
	int a;
	int b;
public:
	Complex();
	Complex(int a, int b);
	
	Complex operator+(ComplexNumber& c);
	Complex operator*(ComplexNumber& c);
	bool operator==(complexNumber& c);
	void toString()
	{
		cout<< "("<< this->a<< " + "<< this->b<< "i)"<<endl;
	}
}
#endif /* !TUMM/
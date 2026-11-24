#include<iostream>
using namespace std;

class Calculator
{
public:
		float Add(float a, float b)
		{
			return a+b;
		}

		float Add(float a, float b, float c)
		{
			return a+b+c;
		}
		float Add(float a, float b, float c, float d)
		{
			return a+b+c+d;
		}

};

int main()
{
	Calculator c;

	cout<<"Addition is : "<<c.Add(5,5,5,5)<<"\n";
	return 0;
}

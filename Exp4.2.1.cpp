#include<iostream>
using namespace std;

class Animal
{
	public:
		void eat()
		{
			cout<<"Animal eats"<<"/n";
		}
};

class Cat : public Animal
{
	public:
		void eat()
		{
			cout<<"Cat eats thee food"<<"/n";
		}
};

int main()
{
	Animal a;
	Cat c;
	c.eat();
	a.eat();
return 0;
}

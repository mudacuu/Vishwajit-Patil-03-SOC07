#include<iostream>
using namespace std;

class Animal
{
	public:
		void sound()
		{
			cout<<"Animal makes a sound\n";
		}
};

class Dog : public Animal
{
	public:
		void sound()
		{
			cout<<"Dog Bark\n";
		}
};

int main()
{
	Animal *ptr;
	Dog d;
	ptr=&d;
	ptr->sound();
return 0;
}

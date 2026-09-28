#include<iostream>
using namespace std;

class Rectangle
{
	private:
	float length,breadth;

public:
	void getdata()
	{
		cout<<"Enter the length : ";
		cin>>length;
		cout<<"Enter the breadth : ";
		cin>>breadth; 
	}

	float area();
	float perimeter();

	void Display()
	{
		cout<<"the Area of Rectangle is : "<<area()<<"\n";
		cout<<"the perimeter of Rectangle is :" <<perimeter()<<"\n";

	}

};

float Rectangle::area()
{

return length*breadth;

}

float Rectangle::perimeter()
{

return 2*(length+breadth);

}

int main()
{
	Rectangle r;

r.getdata();
r.Display();

return 0;

}

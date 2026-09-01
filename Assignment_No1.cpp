#include<iostream>
#include<string>
using namespace std;

class Student
{
	public:
	int Roll_no;
	string Name;
	float marks;
 
void Accept()
{
	cout<<"Enter Roll No : ";
	cin>> Roll_no;
	cout<<"Enter Name : ";
	cin>> Name;
	cout<<"Marks : ";
	cin>> marks;
}

void Result()
{
	if(marks > 40)
	{
		cout<<"Result : Pass\n";
	}
	else
	{
		cout<<"Result : Fail\n";
	}
}
void Display()
{
	cout<<"\n-----Student Details-----\n";
	cout<<"Roll No : "<<Roll_no<<"\n";
	cout<<"Name : "<<Name<<"\n";
	cout<<"Marks : "<<marks<<"\n";

	Result();
}
};

int main()
{
	Student s;
	s.Accept();
	s.Display();

	return 0;
}


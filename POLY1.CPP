#include<iostream.h>
#include<conio.h>
class Base
{
public:
	virtual void display()
	{
		cout<<"\nBase Display";
	}
	void show()
	{
		cout<<"\nSHow Base ";
	}


};

class Derived: public Base
{

public:
	void display()
	{
		cout<<"\nDerived Display";
	}
	void show()
	{
		cout<<"\nSHow Derived ";
	}

};


void main()
{
	Base *ptr;
	Base b;
	Derived d;
	clrscr();
	ptr=&b;
	ptr->display();
	ptr->show();
	ptr=&d;
	ptr->display();
	ptr->show();
getch();
}



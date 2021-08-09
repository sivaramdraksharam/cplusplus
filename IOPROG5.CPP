		// precision()
#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{

	clrscr();
	cout<<sqrt(2);
	cout<<"\n"<<3.123423;
	cout<<"\n"<<2.50043;

	cout.precision(3);
	cout<<"\n\nAfter Precision:";
	cout<<"\n"<<sqrt(2);
	cout<<"\n"<<3.123423;
	cout<<"\n"<<2.50043;


	getch();
	return 0;
}


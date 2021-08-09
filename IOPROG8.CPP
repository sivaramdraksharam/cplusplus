#include<iostream.h>
#include<iomanip.h>
#include<conio.h>

ostream &currency(ostream &output)
{
	output<<"Rs";
	return output;
}

ostream &frmt(ostream &output)
{
	output.setf(ios::showpos);
	output.setf(ios::showpoint);
	output.precision(2);
	output.fill('-');
	output<<setw(10);
	return output;
}

int main()
{
	clrscr();
	cout<<currency<<frmt<<345.87456;
	cout<<endl<<"$"<<frmt<<23.4356;
	getch();
	return 0;
}

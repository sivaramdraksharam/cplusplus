#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
	ifstream infile("item");
	char line[80];
	clrscr();
	while(infile)
	{
		infile.getline(line,80);
		cout<<"\n"<<line;
	}
	infile.close();
getch();
}

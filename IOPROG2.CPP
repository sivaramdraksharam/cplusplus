		// getline and write functions
#include<iostream.h>
#include<conio.h>
int main()
{
	int size=30;
	char name[30];
	clrscr();
	cout<<"Enter your name : ";
	cin>>name;
	cout<<"Your Name : "<<name;
	cout<<"\nEnter your name again : ";
	cin.getline(name,size);
	cout<<"\nYour Name now : "<<name<<"\n";

	cout<<"Enter another name  : ";
	cin.getline(name,30);
	cout<<"New Name : "<<name<<"\n";

	getch();
	return 0;
}


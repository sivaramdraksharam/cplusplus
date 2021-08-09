		// getline and write functions
#include<iostream.h>
#include<conio.h>
#include<string.h>
int main()
{
	char *str1="C++";
	char *str2="Programming";
	int m=strlen(str1);
	int n=strlen(str2);
	clrscr();
	for(int i=1;i<=n;i++)
	{
		cout.write(str2,i);
		cout<<"\n";
	}
	for(i=n;i>=1;i--)
	{
		cout.write(str2,i);
		cout<<"\n";
	}
	cout.write(str1,m).write(str2,n);
	cout<<"\n";
	cout.write(str1,10);
	cout<<"\n";

	getch();
	return 0;
}


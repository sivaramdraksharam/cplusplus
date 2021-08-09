		// width()
#include<iostream.h>
#include<conio.h>
#include<string.h>
int main()
{
	char items[4][8]={"Rin","Lux","Ariel","Nirma"};
	int qty[4]={10,8,12,15};
	int cost[4]={75,100,60,99};

	clrscr();
	cout.width(5);
	cout<<"Items";
	cout.width(8);
	cout<<"Qty";
	cout.width(15);
	cout<<"Cost";

	cout.width(20);
	cout<<"Total Value "<<"\n";
	int sum=0;
	for(int i=0;i<4;i++)
	{
		cout.width(5);
		cout<<items[i];
		cout.width(8);
		cout<<qty[i];
		cout.width(15);
		cout<<cost[i];
		int tot=qty[i]*cost[i];
		cout.width(20);
		cout<<tot<<"\n";
		sum=sum+tot;
	}
	cout<<"\nGrand Total : ";
	cout<<sum<<"\n";

	getch();
	return 0;
}


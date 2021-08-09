#include<iostream.h>
#include<conio.h>
#include<process.h>
class result
{
	private:
		int *res;
		int n;
	public:
		result(){}
		result(int);
		void setdata(void);
		int check(int);
		~result();
};

result :: result(int x)
{
	res=new int[x];
	n=x;
}
void result:: setdata(void)
{
	cout<<"Enter Hall Ticket Numbers :\n";
	for(int i=0;i<n;i++)
	{
		cin>>res[i];
	}
}
int result:: check(int hno)
{
	for(int i=0;i<n;i++)
	{
		if(res[i]==hno)
		{
			return(1);
		}
	}
return(0);
}
result :: ~result()
{
	delete res;
}

void main()
{
int ch,hno;
enum {BCOM=1,BSC,BA,QUIT};
clrscr();
cout<<"\nEnter No: of Students Passed in BCOM : ";
int nbcom;
cin>>nbcom;
result bcom(nbcom);
cout<<"\nEnter No: of Students Passed in BSC : ";
int nbsc;
cin>>nbsc;
result bsc(nbsc);
cout<<"\nEnter No: of Students Passed in BA : ";
int nba;
cin>>nba;
result ba(nba);
cout<<"\nEnter BCOM Result Details:\n";
bcom.setdata();
cout<<"\nEnter BSC Result Details:\n";
bsc.setdata();
cout<<"\nEnter BA Result Details:\n";
ba.setdata();

while(1)
{
clrscr();
cout<<"\nEnter Hall Ticket Number : ";
cin>>hno;
gotoxy(25,5);
cout<<"----------------------------------";
gotoxy(35,6);
cout<<"Result Check";
gotoxy(25,7);
cout<<"-----------------------------------";
gotoxy(30,8);
cout<<"1. BCOM";
gotoxy(30,9);
cout<<"2. BSC";
gotoxy(30,10);
cout<<"3. BA";
gotoxy(30,11);
cout<<"4. EXIT";
gotoxy(25,12);
cout<<"-----------------------------------";
cout<<"\n\nSelect Group :";
cin>>ch;
int res;
switch(ch)
{
	case BCOM:
		res=bcom.check(hno);
	break;
	case BSC:
		res=bsc.check(hno);
	break;
	case BA:
		res=ba.check(hno);
	break;
	case QUIT:
		clrscr();
		gotoxy(35,12);
		cout<<"Good Bye..............";
		getch();
		exit(0);
	default:
		cout<<"\nSelect the Option again...";
		res=0;
	break;
}	// end of switch
if(res)
	cout<<"\nResult : Passed";
else
	cout<<"\nResult :  Failed";
getch();
}	// end of while
}	// end of main



























#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
class employee
{
private:
    int empno;
	char empname[12];
	int bsalary;
public:
	void setdata(void);
	void showdata(void);
};

void employee :: setdata(void)
{
	cout<<"\nEnter Employee ID : ";
	cin>>empno;
	cout<<"\nEnter Employee Name : ";
	cin>>empname;
	cout<<"\nEnter Employee Salary : ";
	cin>>bsalary;
}
void employee :: showdata(void)
{
	cout<<"\n"<<empno<<"\t"<<empname<<"\t"<<bsalary;
}

int menu()
{
	cout<<"\n\t------------------";
	cout<<"\n\t\t1. Add";
	cout<<"\n\t\t2. Del";
	cout<<"\n\t\t3. Show";
	cout<<"\n\t\t4. Exit";
	cout<<"\n\t------------------";
	cout<<"\nEnter Your Choice : ";

	int opt;
	cin>>opt;
	return(opt);
}

void main()
{
employee mngrs[2],staff[10],workers[10];
int mlist=0,slist=0,wlist=0,rec;
enum {Managers=1,Staff,Workers,Quit};
int ch,op;
while(1)
{
clrscr();
cout<<"\n\t------------------";
cout<<"\n\t\t1. Managers";
cout<<"\n\t\t2. Staff";
cout<<"\n\t\t3. Workers";
cout<<"\n\t\t4. Exit";
cout<<"\n\t------------------";
cout<<"\nEnter Your Choice : ";
cin>>ch;
clrscr();
switch(ch)
{
	case Managers:
		do
		{
			clrscr();
			op=menu();
			clrscr();
			switch(op)
			{
				case 1:
					mngrs[mlist].setdata();
					mlist++;
				break;
				case 2:
					cout<<"Enter Record No: ";
					cin>>rec;
					rec--;
					if(rec<mlist)
					{
						for(int i=rec;i<mlist;i++)
						{
							mngrs[i]=mngrs[i+1];
						}
						mlist--;
					}
					else
					{
						cout<<"Check the range";
					}
				break;
				case 3:
					for(int i=0;i<mlist;i++)
					{
						mngrs[i].showdata();
					}
				break;
				case 4:
					cout<<"Getting Out";
				break;
				default:
					cout<<"Please Check the Choice";
				break;
			}
		getch();
		}while(op!=4);
	break;
	case Staff:
		do
		{
			op=menu();
			clrscr();
			switch(op)
			{
				case 1:
					staff[slist].setdata();
					slist++;
				break;
				case 2:
					cout<<"Enter Record No: ";
					cin>>rec;
					rec--;
					if(rec<slist)
					{
						for(int i=rec;i<slist;i++)
						{
							staff[i]=staff[i+1];
						}
						slist--;
					}
					else
					{
						cout<<"Check the range";
					}
				break;
				case 3:
					for(int i=0;i<slist;i++)
					{
						staff[i].showdata();
					}
				break;
				case 4:
					cout<<"Getting Out";
				break;
				default:
					cout<<"Please Check the Choice";
				break;
			}
		getch();
		}while(op!=4);

	break;
	case Workers:
		do
		{
			op=menu();
			clrscr();
			switch(op)
			{
				case 1:
					workers[wlist].setdata();
					wlist++;
				break;
				case 2:
					cout<<"Enter Record No: ";
					cin>>rec;
					rec--;
					if(rec<wlist)
					{
						for(int i=rec;i<wlist;i++)
						{
							workers[i]=workers[i+1];
						}
						wlist--;
					}
					else
					{
						cout<<"Check the range";
					}
				break;
				case 3:
					for(int i=0;i<wlist;i++)
					{
						workers[i].showdata();
					}
				break;
				case 4:
					cout<<"Getting Out";
				break;
				default:
					cout<<"Please Check the Choice";
				break;
			}
		getch();
		}while(op!=4);


	break;
	case Quit:
		cout<<"Bye...........";
		getch();
		exit(0);
	default:
		cout<<"Check the Choice";
	break;
}
getch();
}
}



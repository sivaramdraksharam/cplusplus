// put and get functions
#include <iostream.h>

int main()
{
	//counter variable initialized to zero
	int count=0;
	//Variable to hold a character
	char ch;
	//clear screen
	//clrscr();
	//output a string constant
	cout<<"Input Text:\n";
	//input a character and store it in char type variable
	cin.get(ch);
	//output a character immediately after accepting input till the user enters a new line character
	while(ch!='\n')
	{
	    //output the input character
		cout.put(ch);
		//increment coutner
		count++;
		//accept a character as input
		cin.get(ch);
	}
	//display the number of input characters
	cout<<"\nNumber of Characters : "<<count;
	//wait to input a character
	//getch();
	//return an integer
	return 0;
}

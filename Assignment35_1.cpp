// Generic program which accepts one value and one number from user and print that value number of times on screen

#include<iostream>
using namespace std;
#include<math.h> 

template<class T>
void Display(T value,int iSize)
{
	int i=0;
	bool flag=false;
	int x = ceil(value);
	
	if(x==value)
	{
		flag=true;
	}
	
	for(i=0;i<iSize;i++)
	{
		if((value>='A')&&(value<='Z'))
		{
			printf("%c\t",value);
		}
		
		else if(flag)
		{
			printf("%d\t",value);
		}
		
		else
		{
			printf("%f\t",value);
		}

	}
}

int main()
{
	Display('M',7);
	printf("\n");
	Display(3.7,6);
	printf("\n");
	Display(11,3);
	
	return 0;
}
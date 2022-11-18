// Generic program which accepts N values and search first occurence

#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *arr,int iSize,T iNo)
{
	int iCnt=0;
	int iPos=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		iPos++;
		if(*arr==iNo)
		{
			break;
		}
		arr++;
	}
	return iPos;
}

int main()
{
	int iRet=0;
	
	int arr[]={10,20,30,10,30,40,10,40,10,20};
	float brr[]={10.2,20.4,30.4,10.3,30.4,40.4,10.6,40.5,10.3,20.6};
	
	//int iRet=SearchLast(arr,10,20);
	iRet=SearchFirst(brr,10,20.6f);
	
	printf("%d",iRet);
	
	return 0;
}
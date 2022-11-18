// Generic program which accepts N values and search last occurence

#include<iostream>
using namespace std;

template<class T>
int SearchLast(T *arr,int iSize,T iNo)
{
	int iCnt=0;
	int iPos=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		arr++;
	}
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{

		if(*arr==iNo)
		{
			break;
		}
		iFreq++;
		arr--;
	}
	return iSize-iPos+1;
}

int main()
{
	int iRet=0;
	
	int arr[]={10,20,30,10,30,40,10,40,10,20};
	float brr[]={10.2,20.4,30.4,10.3,30.4,40.4,20.4,40.5,10.3,20.6};
	
	//int iRet=SearchLast(arr,10,20);
	iRet=SearchLast(brr,10,20.4f);
	
	printf("%d",iRet);
	
	return 0;
}
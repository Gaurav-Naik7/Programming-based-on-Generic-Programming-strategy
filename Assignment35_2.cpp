// Generic program which accepts N values and count frequency of any specific value

#include<iostream>
using namespace std;

template<class T>
int Frequency(T *arr,int iSize,T iNo)
{
	int iCnt=0;
	int iFreq=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(*arr==iNo)
		{
			iFreq++;
		}
		arr++;
	}
	return iFreq;
}

int main()
{
	int iRet=0;
	
	int arr[]={10,20,30,10,30,40,10,40,10,20};
	float brr[]={10.2,20.4,30.4,10.2,30.4,40.4,10.6,40.5,10.3,20.6};
	
	iRet=Frequency(brr,10,10.3f);
	
	printf("%d",iRet);
	
	return 0;
}
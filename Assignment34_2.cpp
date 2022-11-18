// Generic program to find largest number from three numbers

#include<iostream>
using namespace std;

template<class T>
T Max(T no1,T no2,T no3)
{
	T iMax=no1;
	
	if(no2>no1)
	{
		iMax=no2;
	}
	
	if(no3>iMax)
	{
		iMax=no3;
	}
	
	return iMax;
	
}

int main()
{
	int iRet=Max(10,204,45);
	printf("%d\n",iRet);
	
	float fRet=Max(100.01f,20.24f,34.56f);
	printf("%f\n",fRet);
	
	return 0;
}
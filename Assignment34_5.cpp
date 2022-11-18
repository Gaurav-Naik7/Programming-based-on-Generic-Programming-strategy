// Generic program to accept N values from user and return minimum number

#include<iostream>
using namespace std;

template<class T>
T Max(T *arr,int iSize)
{
	int i=0;
	
	T iMin=arr[i];
	
	for(i=0;i<iSize;i++)
	{
		if(arr[i]<iMin)
		{
			iMin=arr[i];
		}
	}
	return iMin;
}

int main()
{
	int arr[]={10,20,30,40,50};
	
	float brr[]={10.3f,3.7f,9.8f,18.7f};
	
	int iSum=Max(arr,5);
	
	printf("%d\n",iSum);
	
	float fSum=Max(brr,4);
	
	printf("%f\n",fSum);
	
	return 0;
}

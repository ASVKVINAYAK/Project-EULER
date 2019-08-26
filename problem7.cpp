//NAME VINAYAK
//REGISTRATION NO 1941012434
//Question 7
#include<iostream>
#include<math.h>
using namespace std;
int prime(int n)
{
	int f=1;
	for (int j=3;j<=sqrt(n);j=j+2)
	{
		if (n % j==0)
		{
			f=0;;
			break;
		}
	}
	return f;
}
int main()
{
	
	long c=1;
	long double  p=0;
	int i;
	for(i=3;c<10001;i=i+2)
	{
		if(prime(i))
		{
			c++;
			p=i;
		}
	}
	cout<<" 10001 prime no is  "<<p<<endl;
return 0;	
}    


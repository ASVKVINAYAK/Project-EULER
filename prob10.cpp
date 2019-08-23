//NAME VINAYAK
//REGISTRATION NO 1941012434
//Question 10
#include<iostream>
#include<math.h>
using namespace std;
int prime(int n)
{
	long long f=1,j;
	j=3;
	while(j<=sqrt(n))
	{
		if (n%j==0)
		{
			f=0;
			break;
		}
      j+=2;
	}
	return f;
}
int main()
{                                                                            
  long long  s=2;
long long i=3;
while(i<2000000)
{  
 if(prime(i))
 {
	s=s+i;
}
i+=2;
}
cout<<"Sum  of the primes is "<<s<<endl;
return 0;	
}    


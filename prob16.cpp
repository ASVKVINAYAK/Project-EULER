//NAME VINAYAK
//REGISTRATION NO 1941012434
//Question 16
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
unsigned long long int n,a=0,s=0,t;
n=pow(2,1000);
cout<<n<<endl;
a=n;
while(a>0)
{
	t=a%10;
	s=s+t;
	a=a/10;	
}
cout<<"Sum of the digits is"<<s<<endl;
return 0;	
}

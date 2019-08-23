//NAME VINAYAK
//REGISTRATION NO 1941012434
//Question 30
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
unsigned long long int i,j=0,s=0,S=0,t,a;
for(i=2;i<1000000;++i) //ASSUMING lAST LIMIT IS 1 MILLION
 {
	a=i;
while(a>0)
{
	t=a%10;
	s=s+pow(t,5);
	a=a/10;	
}
if(s==i)
{ 
cout<<i<<" ";
S=S+i;
}
t=0;
a=0;
s=0;
}
cout<<endl<<"Sum of the digits is"<<S<<endl;
return 0;	
}

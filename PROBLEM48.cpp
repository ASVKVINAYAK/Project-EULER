//NAME VINAYAK
//REGISTRATION NO 1941012434
//Question 48
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 unsigned long long int  s,a,j,i,t;
i=1;  s=0;  
while(i<=1000)
{
j=pow(i,i);
s=s+j;
++i;
j=0;
}
cout<<"Sum is "<<s<<endl;
a=s;
t=a%10000000000;
cout<<"last 10 digits are  "<<t;
a=a/10000000000;
return 0;	
}

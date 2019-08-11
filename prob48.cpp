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
cout<<s;
a=s;
t=a%10000000000;
cout<<t;
return 0;	
}

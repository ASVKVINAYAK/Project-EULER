//NAME VINAYAK
//REGISTRATION NO 1941012434
//Question 6
#include<iostream>
using namespace std;
int main()
{	
long i,s=0,ss=0;
for(i=1;i<101;i++)
{ 
s=s+(i*i);
ss=ss+i;
}
ss=ss*ss;
cout<<" Difference between sum is "<<ss-s<<endl;
return 0;	
}

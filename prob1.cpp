//NAME VINAYAK
//REGISTRATION NO 1941012434
//Question 1
#include<iostream>
using namespace std;
int main()
{
int n,s=0;
for(n=3;n<1000;n++)
 {
if(n%3==0||n%5==0)	
{
	s=s+n;
}
}
cout<<" Sum is "<<s<<endl;	
return 0;	
}

//NAME VINAYAK
//REGISTRATION NO 1941012434
//Question 2
#include<iostream>
using namespace std;
int main()
{
unsigned long long int a=0,b=1,fi=0,c=4000000,s=0;
while(fi<=c)	
{ 
fi=a+b;
a=b;
b=fi;
if(fi%2==0)
{ s=s+fi;
}
}
cout<<" Sum of  even fibonacci series is  "<<s<<endl;
return 0;	
}

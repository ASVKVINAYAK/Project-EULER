//NAME VINAYAK
//REGISTRATION NO 1941012434
//Question 25
#include<iostream>
using namespace std;
int main()
{
int i,j,fi=0,a=0,b=1,d=0,f=0,t;
int x=0;
while(fi<=1000) 
{
fi=a+b;
a=b;
b=fi;
++x;
}
f=fi;
while(f>0)
{
t=f%10;
++d;
f=f/10;
}
if(d==4)
{ 
cout<<"number is   "<<fi<<endl;
cout<<"position is  "<<x+1<<endl;
 }
 else
 {
 	cout<<"Sorry 4 digit no not found";
 }
return 0;	
}

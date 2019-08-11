//NAME VINAYAK
//REGISTRATION NO 1941012434
//Question 20
#include<iostream>
using namespace std;
int main()
{
int i,s=0;
unsigned long long int fi=1,f,t; 
// This data type is biggest data type in C++ 100! has 158 digits so no data type can store it              
// If u know other data type so please tell me i will correct it
//It is showing value upto 65! only
//Output will show only 0  for sum of 100!
for(i=1;i<=100;++i) 
{
fi*=i;
}
cout<<"100!="<<" "<<fi<<endl;
f=fi;
while(f>0)
{
t=f% 10;
s=s+t;
f=f/10;
} 

cout<<" Sum of digits of 100! is"<<s<<endl;
return 0;	
}

//NAME VINAYAK
//REGISTRATION NO 1941012434
//Question 7
#include<iostream>
using namespace std;
int main()
{                                                                            
unsigned long long int i,j,c=0;
for(i=2;i<2000000;i++)
{  
for(j=2;j<i;j++)
{
 if(i%j!=0)
 {
 c++;
 if(c==1001)
 cout<<"1001 prime no is  "<<i<<endl;
 break;
 }
}
}
return 0;	
}    


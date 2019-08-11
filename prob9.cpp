#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int i,j,r,c;
for(i=1;i<1000;i++)
{
	for(j=2;j<1000;j++)
	{ 
	c=1000-i-j;
	if((i*i)+(j*j)==(c*c))
{     
      r=i*j*c;
    
	}
}
}	
      cout<<" Triplet Product is "<<r<<endl;	

return 0;	
}

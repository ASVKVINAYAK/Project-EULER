// OPTIMIZED THE LOOP FROM RUNNING UPTO 1000 TO 500 
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int i,j,r,c;
for(i=1;i<500;i++)
{
	for(j=2;j<500;j++)
	{ 
	c=1000-i-j;
	if((i*i)+(j*j)==(c*c))
{     
      r=i*j*c;
    
	}
}
}	
      cout<<" Triplet Product is "<<r<<endl;	// OUTPUT IS 31875000

return 0;	
}

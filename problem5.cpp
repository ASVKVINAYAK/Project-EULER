#include<iostream>
using namespace std;
long long l(long long,long long);
long long h(long long,long long);

long long l(long long i,long long j)
{

         long lcm;
         lcm=(i*j)/h(i,j);

         return lcm;
}
long long  h(long long i,long long j)
{

         while(i!=j)
		 { 	
            if(i>j)
			{    i=i-j; 
		    }
            else 
			{ j=j-i;
			} 
	      } 
        return i;
        }
int main()
{
long long  n=1,k;
for(k=1;k<=20;k++)
{
        n=l(n,k);
}
cout<<"Smallest positive number evenly divisible is  "<<n;

return 0;
}

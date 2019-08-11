//NAME VINAYAK
//REGISTRATION NO 1941012434
//Question 3
#include<iostream>
using namespace std;
int main()
{
unsigned long long int i,n= 600851475143;
for(i=2;i<n;++i)
{
while(n%i==0)
{
n=n/i;

}	
}
cout<<" Largest prime factor is "<<n<<endl;	
return 0;	
}

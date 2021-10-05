#include <iostream>
using namespace std;
#define ld long double

ld power(int x, int n)
{
  ld temp;
  if (n == 0)
	{
	    return (ld)1;
	}	         
	if (n < 0)
	{
	    return (ld)1/power(x,-n);
	}
  temp = power(x,n/2);	        
	if (n%2 == 0)  
	{
	    return temp*temp;
	}
	else  
	{
	    return x*temp*temp;
	}
}

int main()
{
  int x=5,n=-3;
	cout << x<<" ^ "<<n<<" = "<<(power(x, n))<<endl;
	return 0;
}

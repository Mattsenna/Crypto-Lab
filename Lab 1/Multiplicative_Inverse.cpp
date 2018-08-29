#include<iostream>
#include<math.h>
using namespace std;

int gcd(int a, int b)
{
	int q,r;
	q=floor(a/b);
	r=a-b*q;
	while (r!=0)
	{
		a=b;
		b=r;
		q=floor(a/b);
		r=a-b*q;
	}
	return b;
}

int main()
{
	int a,n,b,g,i;
	cout<<"Please enter a:\n";
	cin>>a;
	cout<<"Please enter n:\n";
	cin>>n;
	b=gcd(a,n);
	if(b!=1)
	    cout<<"The multiplicative inverse does not exist";
	else
	{
		for(i=1;i<n;i++)
		{
            if ((a*i) % n == 1)
			cout<<i<<"\n";
		}
	}
	return 0;
}
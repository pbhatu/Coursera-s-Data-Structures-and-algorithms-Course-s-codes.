#include<stdio.h>
#include<iostream>
#include<map>
using namespace std;
map<long,long> F;
long f(long long int n,long long int M) {
	if (F.count(n)) return F[n];
	long k=n/2;
	if (n%2==0) { // n=2*k
		return F[n] = (f(k)*f(k) + f(k-1)*f(k-1)) % M;
	} else { // n=2*k+1
		return F[n] = (f(k)*f(k+1) + f(k-1)*f(k)) % M;
	}
}

int main()
{
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    if(n==0)
    {
        printf("0\n");
    }
    else
    {
        printf("%lld\n",f(n-1,m));
    }
    return 0;
}

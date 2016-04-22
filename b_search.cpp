#include<stdio.h>
#include<iostream>
using namespace std;
int b_search(int value,int a[],int start,int end1)
{
if(start<=end1)
{
    int mid=(start+end1)/2;
    if(value<a[mid])
    {
       return  b_search(value,a,0,mid-1);
    }
    else if(value>a[mid])
    {
        return b_search(value,a,mid+1,end1);
    }
    else if(value==a[mid])
    {
        return mid;
    }
    else
    {
        return -1;
    }
}
else
{
return -1;
}
}
int main()
{
    int n,i,k,a[100000],value,ans;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    scanf("%d ",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d ",&value);
        ans=b_search(value,a,0,n-1);
        printf("%d ",ans);
    }
    return 0;
}

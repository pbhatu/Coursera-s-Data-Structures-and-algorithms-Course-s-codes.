

#include<stdio.h>

void mergeSort(int arr[],int low,int mid,int high);
void partition(int arr[],int low,int high);
int main()
{
    int n,merge[100000],flag=0,count=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

    scanf("%d",&merge[i]);

    }
   partition(merge,0,n-1);

    for(i=1;i<n;i++)
    {
        if(merge[i]==merge[i-1])
        {
            count++;
            if(count>=n/2)
            {
                flag=1;
                break;
            }
        }
        else
        {
            count=0;
        }
    }
    if(flag==1)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}
void partition(int arr[],int low,int high){

    int mid;

    if(low<high){
         mid=(low+high)/2;
         partition(arr,low,mid);
         partition(arr,mid+1,high);
         mergeSort(arr,low,mid,high);
    }
}

void mergeSort(int arr[],int low,int mid,int high){

    int i,m,k,l,temp[100000];

    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high)){

         if(arr[l]<=arr[m]){
             temp[i]=arr[l];
             l++;
         }
         else{
             temp[i]=arr[m];
             m++;
         }
         i++;
    }

    if(l>mid){
         for(k=m;k<=high;k++){
             temp[i]=arr[k];
             i++;
         }
    }
    else{
         for(k=l;k<=mid;k++){
             temp[i]=arr[k];
             i++;
         }
    }

    for(k=low;k<=high;k++){
         arr[k]=temp[k];
    }
}


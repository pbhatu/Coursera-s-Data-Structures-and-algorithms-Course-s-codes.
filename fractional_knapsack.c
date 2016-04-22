#include<stdio.h>

int main()
{
    int n,i,j,capacity;
    double temp=0.0;
    scanf("%d %d",&n,&capacity);
    double weight[100000];double value[100000]; double ratio[100000];
    for(i=0;i<n;i++)
    {
        scanf("%lf %lf",&value[i],&weight[i]);

    }
    for(i=0;i<n;i++)
    {
        //if(value[i]>weight[i])

          ratio[i]=value[i]/weight[i];

        /*else
        {
            ratio[i]=weight[i]/value[i];
            printf("%lf",ratio[i]);
        }*/

    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ratio[j]>ratio[i])
            {
                

                temp=weight[j];
                weight[j]=weight[i];
                weight[i]=temp;
                temp=value[j];
                value[j]=value[i];
                value[i]=temp;
                temp=ratio[j];
                ratio[j]=ratio[i];
                ratio[i]=temp;
            }

        }
    }

    double temp=(double)capacity;
    int i;
    double total=0.0;
    for(i=0;i<n;i++)
    {
        if(weight[i]<=temp)
        {

            total=total+value[i];
            temp=temp-weight[i];

        }
        else if(weight[i]>temp)
        {
            break;
        }
    }
    if(i<n)
    {
        double x=temp/weight[i];
        total=total+(x*value[i]);
    }
    printf("%.4lf\n",total);



    }

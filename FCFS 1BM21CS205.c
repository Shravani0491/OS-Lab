#include<stdio.h>
#include<conio.h>

void main()
{
    int n,art[20],burst[20],wait[20],i,s=0,sum=0,tt[20],sum1=0;
    float avg,avg1;
    printf("\nEnter the number of processes:");
    scanf("%d",&n);
    printf("\nEnter the arrival time for %d processes\n",n);
    for(i=1;i<=n;i++)
    {
        printf("\nArrival time of %d process=",i);
        scanf("%d",&art[i]);
    }
     printf("\nEnter the Burst Time for %d processes\n",n);
    for(i=1;i<=n;i++)
    {
        printf("\nBurst Time of %d process=",i);
        scanf("%d",&burst[i]);
    }
    printf("\Gmatt Chart is\n");
    for(i=1;i<=n;i++)
    {
         tt[i]=s+burst[i]-art[i];
         wait[i]=tt[i]-burst[i];
        printf("\nProcess %d starts at %d and ends at %d",i,s,burst[i]+s);
        printf("\nTurn Around Time for %d process is:%d",i,tt[i]);
        printf("\nWaiting Time for %d process is:%d",i,wait[i]);
        s=s+burst[i];
         sum=sum+tt[i];
         sum1=sum1+wait[i];
    }

    avg=(float)sum/n;
    avg1=(float)sum1/n;
    printf("\nAverage Turn Around Time for FCFS CPU Scheduling is %f",avg);
     printf("\nAverage Waiting Time for FCFS CPU Scheduling is %f",avg1);

}


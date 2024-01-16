#include<stdio.h>
int main()
{
    int n,bt[20],wt[20],tat[20],avg_wt=0,avg_tat=0,i,j;
    printf("Enter total number of processes(maximum 20):");
    scanf("%d",&n);
    printf("\n Enter Process Burst Time\n");
    for(i=0;i<n;i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);
    }
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
        {
            wt[i]+=bt[j];
        }
    }
    printf("Process \tBurst Time \tWaiting Time \tTurn Around Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avg_wt+=wt[i];
        avg_tat+=tat[i];
        printf("\nP[%d]\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
    }
    avg_wt/=i;
    avg_tat/=i;
    printf("Average Waiting Time:%d",avg_wt);
    printf("Average Turn Around Time:%d",avg_tat);
    return 0;
}

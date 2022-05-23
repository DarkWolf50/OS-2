#include<stdio.h>
int main()
{
int i,j,sum=0,n;
int ar[20],tm[20];
int disk;
printf("Enter number of Location:\t");
scanf("%d",&n);
printf("Enter Position Head\t");
scanf("%d",&disk);
printf("Enter element of disk queue\n");
for(i=0;i<n;+i++)
{
scanf("%d",&ar[i]);
tm[i]=disk-ar[i];

if(tm[i]<0)
{
tm[i]=ar[i]-disk;
}
disk=ar[i];
sum=sum+tm[i];
}
printf("\n movement of total cylinders %d",sum);
return 0;
}


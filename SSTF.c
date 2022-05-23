#include<conio.h>
#include<stdio.h>
struct di
{
int num;
int flag;
};
int main()
{
int i,j,sum=0;min,loc,x,y;
struct di d[20];
int disk;
int ar[20],a[20];
clrscr();
printf("Enter number of Location\t");
scanf("%d",&n);
printf("ENter position of head\t");
scanf("%d",&disk);
printf("Enter element of disk queue\n");
for(i=0;i<n;i++)
{
scanf("%d",%d[i].num);
d[i].flag=0;
}
for(i=0;i<n;i++)
{
x=0;min=0;loc=0;
for(j=0;j<n;j++)
{
if(d[j].flag==0)
{
if(x==0)
{
ar[j]=disk-d[j].num;
if(ar[j]<0)
{
ar[j]=d[j].num-disk;
}
min=ar[j];loc=j;x++;
}
else
{
ar[j]=disk-d[j].num;
if(a[j]<0)
{
a[i]=disk-d[loc].num;
}
disk=d[loc].num;
}
for(i=o;i<n;i++)
{
sum=sum+a[i];
}
printf("\n movement of total cylinders %d",sum);
getch();
return 0;
}


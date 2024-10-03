#include<stdio.h>
#include<conio.h>
int main(){
  int arr[100],n,c,d,swap;
  clrscr();
  printf("Enter number of elements \n");
  scanf("%d",&n);
  printf("Enter %d integers \n",n);
  for(c=0;c<n;c++)
    scanf("%d",&arr[c]);
  for(c=1;c<n-1;c++)
{
  d=c;
while(d>0 && arr[d] < arr[d-1])
{
  swap=arr[d];
  arr[d]=arr[d-1];
  arr[d-1]=swap;
  d--;
}
}
printf("The sorted list in asecnding order is:");
for(c=0;c<=n-1;c++)
  printf("%d\n",arr[c]);
getch();
return 0;
}

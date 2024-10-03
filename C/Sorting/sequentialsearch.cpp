#include<stdio.h>
int sequential_search(int[],int,int)
void main(){
  int x[20],i,n,p,key;
printf("\n Enter the number of element:");
scanf("%d",&n);
printf("\n Enter the element to be search:");
scanf("%d",&key);
p=sequential_search(x,n,key);
if(p==-1)
printf("\nThe search is unsuccessful:\n");
else
printf("\n%d is fund at location%d",key,p);
}
int sequential_search(int a[],int n,int l){
  int i;
  for(i=0;i<n;i++){
      if(k==a[i])
        return(i);
  }
return(-1);
}

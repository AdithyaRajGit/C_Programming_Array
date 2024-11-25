#include<stdio.h>

int main(){
int n,sym=1;
printf("Enter number of elements of array: \n");
scanf("%d",&n);
int ar[n];
printf("Enter array elements: \n");
for(int i=0;i<n;i++){
scanf("%d",&ar[i]);
}
for(int i=0;i<n-1;i++){
  if(ar[i] != ar[n-1-i])
   {   sym = 0;   }
}

if(sym) printf("Entered array is symmetric.\n");
else printf("Entered array is asymmetric.\n");

return 0;
}

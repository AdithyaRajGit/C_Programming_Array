#include <stdio.h>

int main(){
int n,m;
int *parr1,*parr2;
printf("Enter number of array elements of first and second array: ");
scanf("%d %d",&n,&m);

int arr1[n];
int arr2[m];
int sort[n+m];
parr1=arr1;
parr2=arr2;

printf("Enter first sorted array elements:\n");
for(int i=0;i<n;i++) {  scanf("%d",&arr1[i]);  }
printf("Enter second sorted array elements:\n");
for(int i=0;i<m;i++) {  scanf("%d",&arr2[i]);  }

printf("First array is: ");
for(int i=0;i<n;i++) {    printf("%d ",arr1[i]);  }
printf("\n");
printf("Second array is: ");
for(int i=0;i<m;i++) {    printf("%d ",arr2[i]);  }
printf("\n");

for(int i=0;i<n+m;i++){
  if(*parr1>*parr2){
   sort[i]=*parr2;
   parr2++;
  }

  else{         // *parr1<*parr2
   sort[i]=*parr1;
   parr1++;
  }
}
printf("Combined and sorted array: ");
for(int i=0;i<n+m;i++){
printf("%d ",sort[i]);
}
printf("\n");
return 0;
}

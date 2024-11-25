#include<stdio.h>

void largestofarr(int a[],int n){
int largest=0,index=0;
for(int i=0;i<n;i++){
  if(a[i]>largest){
	largest=a[i];
	index=i;
	}
 }
printf("Largest element %d and its index: %d\n",largest,index);
}

int main(){
int n,max,index;
printf("Enter number of array elements: ");
scanf("%d",&n);

int arr[n];
printf("Enter array elements:\n");
for(int i=0;i<n;i++) {  scanf("%d",&arr[i]);  }

printf("Entered array is: ");
for(int i=0;i<n;i++) {    printf("%d ",arr[i]);  }
printf("\n");
largestofarr(arr,n);
return 0;
}

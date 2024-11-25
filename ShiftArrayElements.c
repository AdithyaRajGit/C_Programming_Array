#include<stdio.h>
int main(){
int n,s;
printf("Enter number of array elements: ");
scanf("%d",&n);

int arr[n];
printf("Enter array elements:\n");
for(int i=0;i<n;i++) {  scanf("%d",&arr[i]);  }

printf("Entered array is: ");
for(int i=0;i<n;i++) {    printf("%d ",arr[i]);  }

printf("\nEnter number of elements to shift:");
scanf("%d",&s);
if((n==s) ||(n<s)){  printf("! ! !Resultant array will be Null array ! ! !\n");  }
for(int i=n-1; i>=s; i--){
	arr[i]=arr[i-s]; }

for(int i=0;i<s;i++){  arr[i]=0;  } //assigning zero to entered number of first elements

printf("Shifter array:");
for(int i=0;i<n;i++){  printf("%d ",arr[i]); }
printf("\n");

return 0;
}

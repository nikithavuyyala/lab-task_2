/*program to calculate the sum of all elements in the array*/
#include<stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
int i,n=sizeof(arr) / sizeof(arr[0]);
int sum=0;
for ( i=0;i<n;i++){
sum+=arr[i];	
}
printf("sum of all elements in the array:%d\n",sum);
return 0;
}

/*program to print all unique elements in an array*/
#include<stdio.h>
int main()
{
int arr[]={1,2,2,3,4,4};
int i,j,n=sizeof(arr)/sizeof(arr[0]);
printf("unique elements in the array:");
for(i=0;i<n;i++){
int isunique=1;
for( j=0;j<i;j++){
if(arr[i]==arr[j])	{
isunique=0;
break;
    }
   }
   if(isunique){
   	printf("%3d",arr[i]);
   	
   }	
 }
 printf("\n");
 return 0;	
}

/*program to count the total number of duplicate elements in an array*/
#include<stdio.h>
int main()
{
int arr[]={1,2,2,3,4,4}	;
int i,j,n=sizeof(arr)/sizeof(arr[0]);
int count=0;
for(i=0;i<n;i++)
{
for(j=1+1;j<n;j++){
	if(arr[i]==arr[j]){
		count++;
		break; 
	} 
  }	
}
printf("total number of duplicate elements in the array:%d\n",count);
return 0;
}

/*program to store elements in an array */
#include <stdio.h>
int main()
{
int i;	
int arr[5]={34, 52, 7, 41, 98};
int n=sizeof(arr)/sizeof(arr[0]);
printf("elements stored in an array are:");
for(i=0;i<n;i++)
{
printf("%3d",arr[i]);	
}
printf("\n");
return 0;    
}

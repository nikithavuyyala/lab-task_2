/*program to read n number of values and display them in reverse order*/
#include<stdio.h>
int main()
{
int arr[100];
int i,n;
printf("enter the elements:");
scanf("%d",&n);
printf("enter %d elements:\n",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);	
}
printf("elements in reverse order:\n");
for(i=n-1;i>=0;i--)
{
	printf("%d\n",arr[i]);
}
return 0;
}

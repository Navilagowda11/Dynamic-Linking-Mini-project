#include<stdio.h>
#include "Asort.c"
#include "Dsort.c"
#include "bsearch.c"
int main()
{
	int i,n,search;

	int arr[10];
	printf("enter no of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter array element %d : ",i+1);
		scanf("%d",&arr[i]);
	}

printf("Binary search : enter element: ");
scanf("%d",&search);
bsearch(arr,search,n);

printf(" Ascending order of elements: \n");
sort(n,arr);
printf(" Descending order of elements: \n");
Dsort(n,arr);

// for(i=0;i<n;i++){
// 	printf( "%d\n", p[i]);
// }


return 0;
}



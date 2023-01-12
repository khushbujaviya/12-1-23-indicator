// 1 swap two numbers using pointers using udf

# include<stdio.h>
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
	
	printf("\n\n");
	printf("After swap your first value:%d\n",*a);
	printf("After swap your second value:%d\n",*b);
}
main()
{
	int i,j;
	printf("Befor swap enter first value:");
	scanf("%d",&i);
	
	printf("Befor swap enter second value:");
	scanf("%d",&j);
	
	swap(&i,&j);
}

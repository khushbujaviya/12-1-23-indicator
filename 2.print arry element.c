//2.input and print array elements using pointers 
#include<stdio.h>
main()
{
	int array[]={13,24,65,76,98,46,34,76,24};
	int *p[10];
	int i;
	
	for(i=0;i<8;i++)
	{
		p[i]=&array[i];
		printf("%u => %d\n",p[i],*p[i]);
	}
}

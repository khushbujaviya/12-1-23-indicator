//4 find length of string using pointer

#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	char *b[100];
	
	
	
	b[100]=&a[100];

	printf("enter name");
	scanf("%s",&a);
	

	printf("%d",strlen(a));
	
	printf("%s\n",*b);
	
}

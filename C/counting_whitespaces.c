#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,count=0;
	char str[1000];
	printf("Enter the sentence : ");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	printf("no. of spaces in the sentence is : %d",count);
}

#include<stdio.h>

void main()
{
	char p[30],c[30],d[30];
	int i,j,k;
	clrscr();
	printf("enter the plain text:");
	gets(p);
	for(i=0,j=0;j<strlen(p);i++)
	{
		printf("%c",p[j]);
		c[i]=p[j];
		j+=2;
	}
	printf("\n");
	for(j=1;j<strlen(p);i++)
	{
		printf("%c",p[j]);
		c[i]=p[j];
		j+=2;
	}
	for(i=strlen(p);i<30;i++)
	{
		c[i]=NULL;
	}
	printf("encrypted text:");
	puts(c);
	k=(strlen(c)+1)/2;
	for(i=0,j=0;j<strlen(c);i++)
	{
		d[j++]=c[i];
		d[j++]=c[k+i];
	}
	printf("\n Decrypted text:");
	puts(d);
	getch();	
}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 
Char a[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int rnd[27];
int code[10],i,j;
char in[10],temp,out[10];
int main (void)
{       
	clrscr();
	printf("Please enter the input");
	for(i=0;i<10;i++)
	{
	    	scanf("%c",&temp);
	        	if (temp == 32 || temp =='\0')
		            continue;
	        	else
	            	in[i]=temp;
	}
	for (i=0;i<10;i++)
	{
		for(j=0;j<27;j++)
	           	{
	            	if (in[i]==a[j])
	                		rnd[j]= rand()%100;
	            }
	}
	for (i=0;i<10;i++)
	{
	        for(j=0;j<27;j++)
	        {	         
			if (rnd[j]!=0)
	            		code[i]= (in[i] + rnd[j])%26;
	         }
	}
	for (i=0;i<10;i++)
	{
	 	for(j=0;j<27;j++)
	        	{
	            	if (code[i]==j)
	            		out[i]=a[j];
	        	}
	}
	for(i=0;i<10;i++)
		printf("%c",out[i]);
	getch();
	return 0;
}

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

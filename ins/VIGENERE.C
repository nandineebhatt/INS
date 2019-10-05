#include<stdio.h>
void main()
{
	char str[50],key[50];
	int i,ctr=0,c1,c2;

	for(i=0;i<50;i++)
		key[i]='!';	

	printf("\n\nEnter Plain Text : ");
	scanf("%s",str);

	printf("Enter Key : ");
	scanf("%s",key);

	for(i=0;str[i]!='\0';i++)
		if(key[i]=='!' || key[i]=='\0')
		{
			key[i]=key[ctr];
			ctr++;
		}
	
	for(i=0;str[i]!='\0';i++)
	{
		c1=(int)(str[i]);
		c2=(int)(key[i]);

		if(c1>96)
		{	c1-=96;
			c2-=96;
		
			c1=c1+c2-1;

			c1+=96;
		}

		else if(c1<96)
		{	c1-=64;
			c2-=64;
		
			c1=c1+c2-1;

			c1+=64;
		}

		str[i]=(char)(c1);

	}
		
	printf("\nEncrypted Text : %s \n \n",str);

	for(i=0;str[i]!='\0';i++)
	{
		c1=(int)(str[i]);
		c2=(int)(key[i]);

		if(c1>96)
		{
		
			c1-=96;
			c2-=96;
			c1=c1-c2+1;

			c1+=96;
		}

		if(c1<96)
		{
		
			c1-=64;
			c2-=64;

			c1=c1-c2+1;

			c1+=64;
		}

		str[i]=(char)(c1);

	}
	 
	printf("Decrypted Text : %s \n \n",str);
	getch();
}

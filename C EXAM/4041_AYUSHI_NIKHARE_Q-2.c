#include<stdio.h>

main()
{
	char email[20],psw[20];
	int i,e=0,p=0,s=0,r=0,x=0;
	
	printf("Enter your email : ");
	scanf("%s",&email);
	printf("Enter your password : ");
	scanf("%s",&psw);
	
	for(i=0; email[i] != '\0';i++)
	{
		if(email[i]=='.' && email[i]=='@')
		{
			e=1;
		}
		else
		{
			printf("Enter valid email !!");
		}
	}
		for(i=0; psw[i] != '\0';i++)
		{
		if(psw[i]>=8 && psw[i]>='A'||psw[i]<='Z')
			p=1;
		else if(psw[i]>='a'&&psw[i]<='z')
		    r=1;
		else if(psw[i]>='0'||psw[i]<='9')
		    x=1;
		else
		    s=1;	
        }
	
	if(e==1 && p==1 && s==1 && r==1 && x==1)
	{
		printf("Log in successfully!!");
	}
	else
	{
		printf("please check your password!!");
	}
		     
}

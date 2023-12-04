#include<stdio.h>

main()
{
	char name[20],pro_name[20];
	double mob;
	int i,n,r,price,pro_no,qny,prc;
	
	printf("Enter your name : ");
	scanf("%[^\n]",&name);
	printf("Enter your contact no. : ");
	scanf("%ld",&mob);
	
	printf("Enter number of product no. : ");
	scanf("%s",&n);
		for(i=0;i<n ;i++){
	printf("\nEnter your product name : ");
	scanf("%s",&pro_name);
	printf("Enter quantity of product no. : ");
	scanf("%s",&qny);
	printf("Enter price of product : ");
	scanf("%d",&prc);
	}
	price = qny*prc;
	for(i=0;i<r;i++){
	printf("NAME : %s",name[i]);
	printf("CONTACT NO. : %ld",mob);
	printf("PRODUCT NO. : %d",pro_no);
	printf("PRODUCT NAME : %s",pro_name[i]);
	printf("PRODUCT QUANTITY : %d",qny);
	printf("PRODUCT PRICE : %s",(float)price*0.18);
    }
}

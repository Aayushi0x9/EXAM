#include<stdio.h>

struct employe{
    int id,age,exp;
    char name[20],role[20],city[20], cpny[20];
};

int main()
{
    int n;
    
    printf("Enter number of employe:");
    scanf("%d",&n);
    
    struct employe emp[n];
    
    for(int i=0;i<n;i++)
    {
        printf("\nEnter employe ID:");
        scanf("%d",&emp[i].id);
        printf("Enter employee Name:");
        scanf(" %[^\n]",&emp[i].name);
        printf("Enter employe Age:");
        scanf("%d",&emp[i].age);
        printf("Enter employe role:");
        scanf(" %[^\n]",&emp[i].role);
        printf("Enter employe city:");
        scanf(" %[^\n]",&emp[i].city);
        printf("Enter employe experience:");
        scanf("%d",&emp[i].exp);
        printf("Enter employe company name:");
        scanf(" %[^\n]",&emp[i].cpny);
    }
    printf("|\tID\t|\tNAME\t|\tAGE\t|\tROLE\t|\tCITY\t|\tEXP\t|\tCOMP.NAME\t|\n");
    printf("|\t--\t|\t----\t|\t---\t|\t------\t|\t----\t|\t--------\t|\t------\t|\n");
    
    for(int i=0;i<n;i++)
    {
        printf("|\t%d\t|\t%s\t|\t%d\t|\t%s\t|\t%s\t|\t%d\t|\t%s\t|\n", emp[i].id,emp[i].name,emp[i].age,emp[i].role,emp[i].city,emp[i].exp, emp[i].cpny);
    }
    return 0;
}
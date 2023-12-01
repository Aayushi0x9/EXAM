#include<stdio.h>
#include<string.h>

struct student{
    int id,age,std;
    char name[20],course[20],city[15], school[25];
};

int main()
{
    int n;
    
    printf("Enter number of students:");
    scanf("%d",&n);
    
    struct student s1[n];
    
    for(int i=0;i<n;i++)
    {
        printf("\nEnter student ID:");
        scanf("%d",&s1[i].id);
        printf("Enter student Name:");
        scanf(" %[^\n]",&s1[i].name);
        printf("Enter student Age:");
        scanf("%d",&s1[i].age);
        printf("Enter student course:");
        scanf(" %[^\n]",&s1[i].course);
        printf("Enter student city:");
        scanf(" %[^\n]",&s1[i].city);
        printf("Enter student standard:");
        scanf("%d",&s1[i].std);
        printf("Enter student school:");
        scanf(" %[^\n]",&s1[i].school);
    }
    printf("\n\n");
    printf("|\tID\t|\tNAME\t|\tAGE\t|\tCOURSE\t|\tCITY\t|\tSTD\t|\tSCHOOL\t|\n");
    printf("|\t------\t|\t------\t|\t------\t|\t------\t|\t------\t|\t------\t|\t------\t|\n");
    
    for(int i=0;i<n;i++)
    {
        printf("|\t%d\t|\t%s\t|\t%d\t|\t%s\t|\t%s\t|\t%d\t|\t%s\t|\n",s1[i].id,s1[i].name,s1[i].age,s1[i].course,s1[i].city,s1[i].std, s1[i].school);
        printf("|\t--\t|\t----\t|\t---\t|\t------\t|\t----\t|\t--------\t|\t------\t|\n");
    }
    return 0;
}
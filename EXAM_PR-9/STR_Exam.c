#include <stdio.h>

struct Student {
    int rollNo,chemmarks,mathsmarks,phymarks;
    char name[20];
};

int main() 
{
    int totalmarks;
    float percentage;
    struct Student s1[5];
    
    int i;
    
    printf("Enter details of Student...\n");
    for (i = 0; i < 5; i++){
        printf("\nRoll no => ");
        scanf("%d", &s1[i].rollNo);
        printf("Name => ");
        scanf("%s", s1[i].name);
        printf("Chemistry => ");
        scanf("%d", &s1[i].chemmarks);
        printf("Mathematics => ");
        scanf("%d", &s1[i].mathsmarks);
        printf("Physics => ");
        scanf("%d", &s1[i].phymarks);
        printf("\n");
    }

    for (i = 0; i < 5; i++) 
    {
        totalmarks = s1[i].chemmarks + s1[i].mathsmarks + s1[i].phymarks;
        percentage = ((float)totalmarks / 300 ) * 100;

        printf("\n%s (%d)\n", s1[i].name, s1[i].rollNo);
        printf("Chemistry => %d\n", s1[i].chemmarks);
        printf("Mathematics => %d\n", s1[i].mathsmarks);
        printf("Physics => %d\n", s1[i].phymarks);
        printf("Total => %d/300\n", totalmarks);
        printf("Percent => %.2f%%  \n", percentage);
    }

    return 0;
}
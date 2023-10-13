#include <stdio.h>

main() {
    int fy, ey, i;

    printf("Enter the first year: ");
    scanf("%d", &fy);

    printf("Enter the end year: ");
    scanf("%d", &ey);

    int a[ey-fy], size=0;

    for ( i = fy; i <= ey; i++) {
        if (i% 4 == 0) 
        {
            a[size] = i;
             size++;
            
        }
    }

    printf("Leapyear is : ");
    for (i =0; i < size; i++) {
        printf("%d", a[i]);
        if (i != size - 1) {
            printf(", ");
        }
    }
}
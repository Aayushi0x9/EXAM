#include <stdio.h>

main()
{ 
       int number, count = 0;

       printf("Enter any number: "); 
       scanf("%d", &number);

       while (number != 0) 
       { 
           number /= 10;
           count++;
       }
       printf("Total number of digits: %d", count);
}
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
 
// Driver program
int main(void)
{
    // This program will create different sequence of 
    // random numbers on every program run 
 
    // Use current time as seed for random generator
    srand(time(0));
   for(int j=0;j<5;j++){
    for(int i = 0; i<28; i++)
        printf(",%d", rand()%90+10);
    printf("\n");
   }
    return 0;
}
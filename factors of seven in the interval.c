/******************************************************************************

Write a program that receives integers A and B as input and prints on the screen
the number of those numbers from the interval [A, B] that are divisible by 7 without a remainder.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int A, B;
    int qty = 0;
    scanf("%d %d", &A, &B);
    for(int i=A;i<=B;i++){
        if(i % 7 == 0){
            qty+=1;
        }
    }
    printf("%d", qty);
    return 0;
}

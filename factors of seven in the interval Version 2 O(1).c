/******************************************************************************

Write a program that receives integers A and B as input and prints on the screen
the number of those numbers from the interval [A, B] that are divisible by 7 without a remainder.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    // the code has complexity O(1)
    int A, B;
    int qty = 0;
    scanf("%d %d", &A, &B);
    if(A > 0){
        A = A / 7;
        B = B / 7;
        qty = B - A;
    }
    else if(A == 0){
        A = A / 7;
        B = B / 7;
        qty = B - A;
        qty +=1;
    }
    else{
        if(B > 0){
            A *= -1;
            A /= 7;
            B /=7;
            qty = A + B + 1;
        }
        else if(B == 0){
            A *= -1;
            A /= 7;
            qty= A + 1;
        }
        else{
            A *= -1;
            B *= -1;
            A /= 7;
            B /=7;
            qty = A - B;
        }
    }
    printf("%d ", qty);
    
    return 0;
}

/*

The input to the program is a natural number N and then N integers.
All numbers do not exceed 10,000 in absolute value.
The program should output Yes if the given sequence specifies a permutation and No otherwise.

*/
#include <stdio.h>

int main(void)
{
    int n, a[10000], c;
    
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (a[i] < a[j]){
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
    
    c = 0;
    
    for(int i=0;i<n;i++){
        if ((a[i] != (i+1))){
            c = 1;
            break;
        }
    }
    
    if (c == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
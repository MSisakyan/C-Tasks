/*

Excellent student Masha wrote out a permutation of numbers from 1 to N on the board.
But the bully Vasya erased it,simultaneously replacing all the numbers in the permutation
according to the following rule: if there was a number K in the i-th position,
then a number equal to the number of numbers in positions i is put in its place +1, i+2 ... N,
greater than K. Help Masha restore the original permutation.

First, enter the number N (1 ≤ N ≤ 1000).
Next, enter N numbers resulting from Vasya’s actions on the original permutation of numbers from 1 to N.
If the original permutation cannot be restored, then output the number '-1' to the standard output.
Otherwise, print N natural numbers (separated by spaces) that form the required permutation.

*/
#include <stdio.h>

int main(void)
{
    int a[1001], n, c = 1;
    int s[1001] = {0};
    int res[1001];
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }
    
    for(int i=1;i<=n;i++){
        s[i] = i;
    }
    
    int k = n;
    for(int i=1;i<=n;i++){
        res[i] = s[k-a[i]];
        for(int j=k-a[i];j<=k-1;j++){
            s[j] = s[j+1];
        }
        k--;
    }
    
    for(int i=1;i<=n;i++){
        if(res[i]==0){
            c = 0;
        }
    }
    if(c){
        for(int i=1;i<=n;i++){
            printf("%d ", res[i]);
        }
    }
    else{
        printf("-1");
    }
    return 0;
}
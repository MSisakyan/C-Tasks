/*

Write a program that receives strings A and B as input (the lengths of A and B do not exceed 50 characters).
If B is a substring of A, then print the first corresponding index of B in line A, otherwise print -1.

*/
#include <stdio.h>

int main(void)
{
    char a[50], b[50];
    int l1, l2, j=0, index=-1;
    for(int i=0;1;i++){
        scanf("%c", &a[i]);
        if(a[i]=='\n'){
            l1 = i;
            break;
        }
    }
    
    for(int i=0;1;i++){
        scanf("%c", &b[i]);
        if(b[i]=='\n'){
            l2 = i;
            break;
        }
    }
    
    for(int i=0;i<l1 && j<l2;i++){
        if(a[j] == '\n'){
            break;
        }
        
        if(a[i] == b[j]){
            j++;
            index = i - l2+1;
        }
    }
    
    printf("%d", index);
    return 0;
}
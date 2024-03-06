/*

Find the specified substring in the string and replace it with a new one.
The string, its replacement substring and the new substring are entered by the user;
both substrings must be the same length. All typed lines contain no more than 30 characters.

*/
#include <stdio.h>

int main(void)
{
    char a[30], b[30], c[30];
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
    
    for(int i=0;i<l2;i++){
        scanf("%c", &c[i]);
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
    j = 0;
    
    if(index>-1){
        for(int i=index;j<l2;i++){
            a[i] = c[j];
            j++;
        }
    }
    for(int i=0;i<l1;i++){
        printf("%c", a[i]);
    }
    
    return 0;
}
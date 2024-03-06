/*

The standard input stream is given a non-negative integer N and a sequence of
valid ASCII characters ending with a dot. Valid characters are Latin letters
'a' ... 'z', 'A' ... 'Z' and space. It is required to encode Latin letters ('a' ... 'z', 'A' ... 'Z')
with a Caesar cipher, leaving spaces unchanged. The number N specifies the shift in the cipher.
The Caesar cipher consists of the following transformation.
Let the letters of the alphabet be numbered from 0 to K - 1,
where K is the number of characters in the alphabet.
Then the symbol with number n is encoded with the symbol with number p = (n + N)
mod K (mod is the remainder operation).

Print an encrypted message ending with a dot to standard output.
The conversion must be performed independently for uppercase and lowercase Latin letters.

Hint: In ASCII, both lowercase and uppercase Latin characters form continuous code sequences.

Note: The use of arrays is prohibited.

*/
#include <stdio.h>

int main(void)
{
    unsigned num;
    unsigned char word;
    
    scanf("%u ", &num);
    while (1)
    {
        scanf("%c", &word);
        if (word != '.'){
            if(word >= 'a' && word <= 'z'){
                word = 'a'+ (word - 'a' + num) % 26;
            }
            else if(word >= 'A' && word <= 'Z'){
                word = 'A' + (word - 'A' + num) % 26;
            }
            printf("%c", word);
        }
        else{
            printf(".");
            break;
        }
        
    }
    
    return 0;
}
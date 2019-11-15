#include <stdio.h>
#include <string.h>

int main (void){

    char s[100];
    int t,i;

    gets(s);
    t=strlen(s)-1;
    for (i=0;i<strlen(s);i++){
        if (s[t]!=s[i]){
            printf("%c",s[i]);
        }
    }
    printf("\n");
    return 0;
}
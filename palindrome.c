#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main (void){
int t,i;
bool f;
char s[100];
gets(s);
i=strlen(s)-1;
for (t=0;t<strlen(s);t++){
    if (s[t]==s[i]){
        
        i--;
        f=true;
    }else{
        f=false;
        break;
    }
}
if (f==false){
    printf("parole non palindrome\n");
}else{
    printf("parole palindrome\n");
}
return 0;
}
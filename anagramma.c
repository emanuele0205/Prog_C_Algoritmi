#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
int main (void){
int a[26]={0},b[26]={0},j,r,y;
char s[100],t[100];
bool f;
gets(s);
gets(t);
for (j=0;j<strlen(s);j++){
    a[s[j]-'a']++;
}
for (r=0;r<strlen(t);r++){
    b[t[r]-'a']++;
}
for (y=0;y<26;y++){
    if (a[y]!=b[y]){
        f=false;
        printf("no anagramma\n");
        break;
    }else{
        f=true;
    }

}

if (f==true){
    printf("anagramma\n");
}
return 0;

}


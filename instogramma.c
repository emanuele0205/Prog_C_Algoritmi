#include <stdio.h>
#include <ctype.h>
int main (void){
    int a[26]={0},i,j;
    char c,t='A';

    c=getchar();
    while (c!='.'){
        if (isalpha(c)){
            c=tolower(c);
            a[c-'a']++;
            c=getchar();
        }else{
            c=getchar();
        }
    }

for (i=0;i<26;i++){
    if (a[i]>0){
    printf("%c ",t);
    for (j=0;j<a[i];j++){
        printf("*");
    }
    printf("\n");
}
t++;
}
return 0;
}
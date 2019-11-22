#include <stdio.h>

int main (void){

int n,i,flag,ripetizioni[10]={0};

scanf("%d",&n);

while (n!=0){
    ripetizioni[n%10]++;
    n=n/10;
}

for (i=0;i<10;i++){
    if (ripetizioni[i]>=2){
        flag=1;
}
}
if (flag==1){
    printf("Valori ripetuti: ");
    for (i=0;i<10;i++){
        if (ripetizioni[i]>1){
            printf("%d, ",i);
    }
 
    }
       printf("\n");
}else{
    printf("Non ci sono cifre ripetute\n");
}
return 0;
}

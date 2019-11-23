#include <stdio.h>

int main (void){

int A[100]={0},i,j,input,cont;
scanf("%d",&input);
A[0]=input;
scanf("%d",&input);
cont=2;
while (input!=0 || cont==100){
    for (i=0;i<cont;i++){
        if (input>A[i] && input<A[i+1]){              
            for (j=cont;j>i;j--){              
                A[j+1]=A[j];
            }
            A[i+1]=input;
            break;
        }else if (input<A[i]){
            for (j=cont-1;j!=i;j--){
                A[j]=A[j-1];
        }
        A[i]=input;
        break;
    }else if (input>A[i] && input>A[i+1] && A[i+1]==0){
        A[i+1]=input;
        break;
    }else {
        continue;
    }
}
scanf("%d",&input);
cont++;
}
for (i=0;i<cont-1;i++){
    printf("%d ",A[i]);
}
printf("\n");
return 0;
}

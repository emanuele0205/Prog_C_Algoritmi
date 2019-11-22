#include <stdio.h>
# define LUNG 100
int main(void){
int i,g,m,a;
    typedef struct {
        int giorno;
        int mese;
        int anno;
    }data;
    data dates[LUNG]={0};
    printf("inserire date\n");
    
    for (i=0;i<LUNG;i++){
       scanf("%d/%d/%d",&g,&m,&a);
       if (g==0&&m==0&&a==0){
           break;
       }
       dates[i].giorno=g;
       dates[i].mese=m;
       dates[i].anno=a; 
    }
    printf("inserire la data di controllo\n");
    scanf("%d/%d/%d",&g,&m,&a);

    for (i=0;i<LUNG;i++){
        if (dates[i].anno<a && dates[i].anno!=0){
            printf("%02d/%02d/%04d\n",dates[i].giorno,dates[i].mese,dates[i].anno);
        }else if (dates[i].anno==a){
            if (dates[i].mese<m && dates[i].mese!=0){
                 printf("%02d/%02d/%04d\n",dates[i].giorno,dates[i].mese,dates[i].anno);
            }else if (dates[i].mese==m){
                if (dates[i].giorno<g && dates[i].giorno!=0){
                     printf("%02d/%02d/%04d\n",dates[i].giorno,dates[i].mese,dates[i].anno);
                }
            }
        }
    }

return 0;
}




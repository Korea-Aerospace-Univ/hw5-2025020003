#include <stdio.h>

int main(void){
    int money, a=900,b=750,c=200;
    int i,j,k;
    bool is_correct=0;
    scanf("%d",&money);
    for(i=1;i<=(money/a);i++){
        for(j=2;j<=(money/b);j+=2){
            for(k=1;k<=(money/c);k++){
                if(k<i||k<j){
                    if((a*i)+(b*j)+(c*k)==money){
                        printf("%d %d %d\n",i,j,k);
                        is_correct=1;
                    } 
                    else;
                }
                else;
                    
            }
        }
    }
    if(!is_correct) printf("none");
    return 0;
    
}

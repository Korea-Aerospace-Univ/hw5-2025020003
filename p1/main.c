#include <stdio.h>

int main(void){
    int money, a=900,b=750,c=200;
    int i,j,k;
    printf("금액 입력:");
    scanf("%d",&money);
    for(i=1;i<=11;i++){
        for(j=2;j<=12;j+=2){
            for(k=1;k<=50;k++){
                if(k<i||k<j){
                    if((a*i)+(b*j)+(c*k)==money) printf("%d %d %d\n",i,j,k);
                    else;
                }
                else;
                    
            }
        }
    }
    if((a*i)+(b*j)+c*k!=money) printf("none");
    return 0;
    
}

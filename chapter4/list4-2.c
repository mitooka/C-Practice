#include <stdio.h>
int main(void){
    int num;
    do{
        printf("非負の整数を入力してください:");
        scanf("%d",&num);
        if(num <0){
            printf("\a負の数を入力してはいけません。\n:");
        }}while (num<0);
        printf("その数を逆から読むと");
        do{
            printf("%d",num%10); num = num/10;
            }while (num>0);
        printf("です\n");
        return(0);        
        
        
    
}

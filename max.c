#include <stdio.h>

int main(){
    int a,b,c;
    int max = 0;
    printf("세 수의 최대 값은? \n");
    printf("a : ");
    scanf("%d",&a);
    printf("b : ");
    scanf("%d",&b);
    printf("c : ");
    scanf("%d",&c);
    max = a;
    if(max < b){
        max = b;
    }
    if(max <c){
        max = c;
    }
    printf("최대값은 %d \n",max);
    return 0;


}
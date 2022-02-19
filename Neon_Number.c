#include<stdio.h>
int main(){
    int num, digit, sum=0;
    scanf("%d",&num);
    int sqr=num*num;
    while(sqr!=0){
        digit=sqr%10;
        sum+=digit;
        sqr=sqr/10;
    }
    
    if(sum==num)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    return 0;
}

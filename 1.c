#include<stdio.h>
int main() {
    int n,x,y,z ;
    scanf("%d %d",&x,&y) ;
    z = x%10 ;
    x = x/10 ;
    if(z+y>=10){
        x+=1 ;
    }
    x = x*10 ;
    x = x+y ;
    printf("%d",x) ;
    return 0 ;
}

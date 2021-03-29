#include<stdio.h>
int main() {
    int n,x,y,z,i,j,l ;
    scanf("%d %d",&x,&y) ;
    for(i=x+1;n!=1;i++){
        for(j=i;j>0;j/=10){
                l = j%10 ;
                if(l==y){
                    n=1 ;
                    break ;
                }
        }

    }
    printf("%d",i-1) ;
    return 0 ;
}

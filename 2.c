#include<stdio.h>
int main(){
    int n,i,m,j,a[10000]={0},max,l=1 ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++){
        scanf("%d",&m) ;
        for(j=1;j<=10000;j++){
            if(m==j){
                a[m-1] +=1;
                break ;
            }
        }
    }
    max = a[0] ;
    for(i=1;i<10000;i++){
        if(max<a[i]){
            max = a[i] ;
            l =  i+1 ;
        }
    }
    for(i=0;i<10000;i++){
        if(max==a[i]){
          printf("%d ",i+1) ;
        }
    }




}

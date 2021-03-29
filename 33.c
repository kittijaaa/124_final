#include<stdio.h>
int main() {
    int n,x[3],i,j,k,sum1=0,sum2=0,y=0,l[3] ;
    scanf("%d %d %d",&x[0],&x[1],&x[2]) ;
    for(i=0;i<3;i++){
            n=x[i] ;
        int a[n][n],b[n+2] ;
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                scanf("%d",&a[j][k]) ;
            }
        }
        for(j=0;j<n&&y!=1;j++){
                sum1=0 ;
            for(k=0;k<n;k++){
                sum1+=a[k][j] ;
        }
            b[j]=sum1 ;
    }
    sum1 = 0;
    for(j=1;j<=n;j++){
        sum1 += a[j-1][j-1] ;
        sum2 += a[n-j][n-j] ;
    }
        b[n]= sum1 ;
        b[n+1]= sum2 ;
    for(j=1;j<n+1;j++){
        if(b[j-1]!=b[j])
            y=1 ;
    }
    l[i]= y;
    }
    for(i=0;i<3;i++){
        if(l[i]==0){
            printf("no") ;
        }else
            printf("yes") ;
        printf("\n") ;

    }
    return 0 ;
}

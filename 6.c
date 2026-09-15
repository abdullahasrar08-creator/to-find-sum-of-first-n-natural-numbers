#include<stdio.h>
int s,i,n;
int main(){
    printf("enter n");
    scanf("%i",&n);
    i=1;
    while(i<=n){
        s=i*i;
        printf("%i\n",s);
        i=i+1;
    }
    return 0;
    }


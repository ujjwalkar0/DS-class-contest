#include<stdio.h>
#include<stdlib.h>

int main(){
    int m[100],n;
    scanf("%d",&n);
    int a=n;
    while(n!=0){
        scanf("%d",&m[n]);
        n--;
    }
    while(m[a]!='\0'){
        printf("%d",m[a]);
        a--;
    }
}

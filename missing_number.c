#include<stdio.h>
#include<stdlib.h>

int main(){
    int m,n,a[100],b[100],s,p,q;
    scanf("%d",&m);
    p=m;
    while(m != 0){
        scanf("%d",&a[m-1]);
        m--;
    }
    scanf("%d",&n);
    q=n;
    while(n != 0){
        scanf("%d",&b[n-1]);
        n--;
    }
    int it=q-p;
    while(p!=0){
        while(q!=0){
            if (a[p]==b[q]){
                while(b[q] != '\0'){
                    b[q]=b[q+1];
                    q--;
                }
            }
            else{
                q--;
            }
        }
        p--;
    }
    while(it){
        printf("%d",b[it]);
        
    }
}
//         if (b[it]==a[p]){
//             while(b[it] != '\0'){
//                 b[it+1]=b[it];
//                 it++;
//             }
//         }
//         p--;
//     }
//     while(b[q] != '\0'){
//         printf("%d  ",b[q]);
//         q--;
//     }
//     printf("Ho");
// }
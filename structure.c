#include<stdio.h>
#include<stdlib.h>

int polynomial(int* a, int x, int n,int i){
    if(i>0) return x*polynomial(a, x, n, i-1) + a[n-i];
    else return a[n];
}

int main(){
    
    int n,x;

    printf("n=");
    scanf("%d",&n);//get n-th

    int* a = (int*) malloc((n+1)*sizeof(int));
    if(!a) exit(0);

    printf("x=");
    scanf("%d",&x);
    getchar();//get x and erease the \n

    for(int i = 0; i < n+1; ++i){
        scanf("%d",a+i);
    }//get a_i

    printf("%d ",polynomial(a,x,n,n));
    
    system("PAUSE");
    return 1;
}
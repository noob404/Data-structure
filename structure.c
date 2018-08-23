#include<stdio.h>
#include<stdlib.h>

int Fibonacci(int k, int m){
    
    if(k < 1|| m < 1) exit(1);
    int *p = (int*) malloc((k+1) * sizeof(int));
    if(!p) exit(1);

    for(int i = 0; i <= k; ++i){
        if(i >= k - 1) p[i] = 1;
        else
            p[i] = 0;
    }//set the Fibonacci sequence to k

    int n_k;
    for(int i = k+1; i < m; ++i){
        n_k = p[0];
        for(int j = 0; j < k; ++j) p[j]=p[j+1];
        p[k] = 2 * p[k-1] - n_k;
    }//move the sequence to the m 

    if(m < k) return p[m-1];
    else return p[k];
}//return the m-th Fibonacci figure


int main(){
    
    int i = Fibonacci(3,3);
    printf("%d",i);
    getchar();
    return 0;
}
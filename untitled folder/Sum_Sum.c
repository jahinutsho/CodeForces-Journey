#include<stdio.h>

int main(){ 
    int N;
    scanf("%d", &N);
    int A[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
    int positive_sum = 0;
    int negative_sum = 0;
    for(int i = 0; i < N; i++){
        if(A[i] > 0){
            positive_sum += A[i];
        }
        else{
            negative_sum += A[i];
        }
    }
    printf("%d %d", positive_sum, negative_sum);
    
    return 0;
}
#include<stdio.h>

int main(){ 
    int n;
    scanf("%d", &n);
    long long arr[n];
    for(int i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
    }
    long long x;
    scanf("%lld", &x);
    
    for(int i = 0; i < n; i++){

        if(arr[i] == x){
            printf("%d\n", i);
            return 0;
        }
    }
    printf("-1\n"); 
    
    return 0;
}
#include<stdio.h>

int main(){ 
    int n ,t;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        long long fact = 1;
        for(int i = 1; i <= n; i++){
            fact *= i;
        }
        printf("%lld\n", fact);
    }
    
    return 0;
}
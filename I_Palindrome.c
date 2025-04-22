#include<stdio.h>
#include<string.h>

int main(){ 
    char str[1000];
    scanf("%s", &str);
    int len = strlen(str);
    
    int i = 0, j = len - 1;
    while(i < j){
        if(str[i] != str[j]){
            printf("NO");
            return 0;
        }
        i++;
        j--;
    }
    printf("YES");

    
    return 0;
}
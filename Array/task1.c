#include<stdio.h>
#include<limits.h>

int main(){ 
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    // Print even elements
    printf("The even elements in the array are: ");
    for (int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0){
            printf("%d ", arr[i]);
        }
    }
    // Print odd elements
    printf("\nThe odd elements in the array are: ");
    for (int i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0){
            printf("%d ", arr[i]);
        }
    }
    // maximum element
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("\nThe maximum element in the array is: %d\n", max);
    // minimum element
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("The minimum element in the array is: %d\n", min);
    // sum of elements
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("The sum of the elements in the array is: %d\n", sum);

    
    return 0;
}
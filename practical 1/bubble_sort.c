#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int arr[100];
    int n;
    printf("Enter the number of elements in array:");
    scanf("%d", &n);

    printf("Enter the elements of the array:");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int i , j , temp;
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
    printf("Sorted array: \n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
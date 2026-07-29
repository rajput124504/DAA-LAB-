#include <stdio.h>

int main(){
    int n;
    int arr[100];
    int num;
    int found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &num);

    int low = 0;
    int high = n - 1;

    while (low <= high){
        int mid = low + (high - low) / 2;

        if (arr[mid] == num){
            printf("Element found at index %d", mid);
            found = 1;
            return 0;
        }
        else if (arr[mid] < num){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    if(found == 0){
        printf("Element not found");
    }
    return 0;
}
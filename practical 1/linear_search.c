// Linear search algorithm implementation in C

#include <stdio.h>

int main(){
    int arr[]={10,20,30,40,80,100,2000,500,425};
    int num = 5;
    int found = 0;
    for (int i = 0; i<=8; i++){
        if (arr[i]==num){
            printf("Element found at index %d",i);
            found = 1;
            return 0;
        }
    }
    if(found == 0){
        printf("Element not found");
    }
    return 0;
}
// Linear Search.

#include <stdio.h>

// Driver Code..
int main(){
    int arr[] = {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);
    int key, i;

    printf("Enter The Value You Want To Search: ");
    scanf("%d", &key);
    
    for(i=0 ; i<= size ; i++){
        if(arr[i] == key){
            printf("Element Found At Index '%d'\n", i);
            break;
        }

        if(i == size){
            printf("Element Not Found\n");
        }
    }

    return 0;
}
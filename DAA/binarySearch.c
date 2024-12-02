#include<stdio.h>

// Driver Code....
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size, low, mid, high, key;
    size = sizeof(arr)/sizeof(arr[0]);

    printf("Enter The Value You Want to Search: ");
    scanf("%d", &key);

    low = 0;
    high = size - 1;

    while(low <= high){
        mid = (low + high) / 2;

        if(arr[mid] == key){
            printf("%d is Found at %d Location\n", key, mid + 1);
            break;
        }

        if(arr[mid] > key){
            high = mid - 1;
        }

        if(arr[mid] < key){
            low = mid + 1;
        }

        if(low > high){
            printf("%d is Not Found in the Array\n", key);
        }
    }

    return 0;
}
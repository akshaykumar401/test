#include<stdio.h>

// Bubble Sort Function.
void bubbleSort(int arr[], int size) {
    int i, j;

    for(i=0 ; i<size ; i++){
        for(j=0 ; j<size-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Display Function..
void display(int arr[], int size) {
    int i;

    for(i=0 ; i<size ; i++){
        printf("%d\t", arr[i]);
    }
}

// Driver Code....
int main(){
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, size);
    printf("Sorted Data is: ");
    display(arr, size);

    return 0;
}
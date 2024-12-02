// Selection Sort

#include<stdio.h>

// display Function.
void display(int arr[], int size){
    int i;

    for(i=0 ; i<size ; i++){
        printf("%d\t", arr[i]);
    }
}

// Smallest Value Finder Function.
int smallest(int arr[], int size, int i){
    int small, pos, j;
    small = arr[i];
    pos = i;

    for(j=j+1 ; j<size ; j++){
        if(arr[j] < small){
            small = arr[j];
            pos = i;
        }
    }

    return pos;
}

// Driver Code....
int main(){
    int arr[] = {10, 9, 8, 7, 6, 5};
    int size, i, pos, temp;
    size = sizeof(arr) / sizeof(int);

    for(i=0 ; i<size ; i++){
        pos = smallest(arr, size, i);
        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }
    printf("Sorted Data is : ");
    display(arr, size);

    return 0;
}
// Merge Sort Program..

#include<stdio.h>

// Merge Function.
void Merge(int arr[], int low, int mid, int high){
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int L[n1], R[n2];

    for(i=0 ; i<n1 ; i++){
        L[i] = arr[low + i];
    }
    for(i=0 ; i<n2 ; i++){
        R[i] = arr[mid + 1 + i];
    }

    i=0;
    j=0;
    k=low;

    while(i<n1 && j<n2){
        if(L[i] > R[j]){
            arr[k] = R[j];
            j++;
        }else{
            arr[k] = L[i];
            i++;
        }
        k++;
    }

    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

// mergeSort Function.
void mergeSort(int arr[], int low, int high){
    if(low < high){
        int mid = low + (high - low) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        Merge(arr, low, mid, high);
    }
}

// Display Function.
void display(int arr[], int size){
    int i;

    for(i=0 ; i<size ; i++){
        printf("%d ", arr[i]);
    }
}

// Driver Code....
int main(){
    int arr[] = {12, 11, 10, 9, 8};
    int size = sizeof(arr) / sizeof(int);

    mergeSort(arr, 0, size-1);
    printf("Sorted array is: ");
    display(arr, size);

    return 0;
}
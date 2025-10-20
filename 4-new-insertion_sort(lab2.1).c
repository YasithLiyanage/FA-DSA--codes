#include <stdio.h>

void new_insertion_sort(int arr[], int n){

    int i,j,key,k;

    for(j=1; j<n; j++){
        i = 0;

            while (arr[j] > arr[i] && i < j){
                i++;

            }
        key = arr[j];

            for(k=0; k<=(j-i-1); k++){
                arr[j-k] = arr[j-k-1];

            }

        arr[i] = key;

    }



}


void printArr(int arr[], int l){

for(int l=0; l<7; l++){
    printf("%d\n",arr[l]);

}

}

int main(){

int arr[] = {8, 2, 4, 7, 3, 5, 1};
int l =7;

printf("Original Array: ");
printArr(arr, l);

new_insertion_sort(arr,l);

printf("New Array: ");
printArr(arr, l);


}
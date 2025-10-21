#include <stdio.h>

void bubble_sort(int arr[], int length);

int main(){

    int arr[] = {12,43,2,53,6,54,254,76,87,22};
    int length = 10;


bubble_sort(arr, length);

for(int i = 0; i<length; i++){
printf("%d\n",arr[i]);
}
}

void bubble_sort(int arr[], int length){

    int i,j;

    for(i=0; i<length -1; i++){

        for(j=0; j<length-1; j++){
        if(arr[j] > arr[j+1]){
            int temp;

            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }

    }

}
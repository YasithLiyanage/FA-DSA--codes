#include <stdio.h>


void insertion_sort(int arr[],int n){

    int i,j,key;
    for (j=1; j<n; j++){

        key = j;
        i = j - 1;


            while( i >= 0 && arr[i] > key){
                arr[i + 1] = arr[i];
                i--; 

            } 

        arr[i+1] = key;

    }

}


void printArr(int arr[]){

for(int l=0; l<7; l++){
    printf("%d\n",arr[l]);

}

}



int main(){

int arr[7] = {8,2,4,7,3,5,1}; 

printf("Unsorted is\n");
printArr(arr);

insertion_sort(arr, 7);

printf("Sorted is\n");
printArr(arr);


}

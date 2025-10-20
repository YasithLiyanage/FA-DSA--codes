#include <stdio.h>


void selection_sort(int arr[]){

   int n = sizeof(arr) / sizeof(arr[0]);
    int i,j;

    for (j=0; j<n-1; j++){
        int smallest = j;

        for(i=j+1; i < n; i++){
            if(arr[i] < arr[smallest])
            smallest = i;

        }

        if(j != smallest){

            int temp = arr[j];
            arr[j] = smallest;
            smallest = temp;
        }


    }


}

int main(){

int arr[10] = {3,6,4,7,2,1,9,0,5,8};

selection_sort(arr);

for(int i = 0; i<10; i++){

    printf("%d\n",arr[i]);
}

}
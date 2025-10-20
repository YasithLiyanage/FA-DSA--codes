#include <stdio.h>

int fibonacci(int n)
{

    if (n==0){
        return 0;
    }else{

        return fibonacci(n-1) + fibonacci(n-2);
    }



}
int main(){
int num;
printf("Enter Number : ");
scanf("%d", &num);

printf("Fibonacci of %d is %d \n", num, fibonacci(num));


}
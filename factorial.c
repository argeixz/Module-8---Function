#include <stdio.h>

int factorial(int n){
    int num, count = n;
    int fact = fact * count;
    return fact;
}

int main(){
    int num, count, fact = 1;
    printf("Enter a number: ");
    scanf("%d",&num);

    for (count = 1; count <= num; count ++){
        fact = fact * count;
    }
    int factorial(int n);
    printf("%d! = %d", num, fact);

    return 0;
}

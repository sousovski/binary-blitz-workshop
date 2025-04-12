#include <stdio.h>
int add(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}
int main(){
    int addition = add(3 , 5);
    printf("Addition of 3 and 5 is %d", addition);
    return 0;
}
#include <stdio.h>

int calculateSum() {
    int number1, number2, sum;
    printf("Moi ban nhap so thu nhat: ");
    scanf("%d", &number1);
    printf("Moi ban nhap so thu hai: ");
    scanf("%d", &number2);
    sum = number1 + number2;
    return sum; 
}
int main() {
    int sum = calculateSum(); 
    printf("Tong 2 so la : %d\n", sum);
    return 0;
}


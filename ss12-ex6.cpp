#include <stdio.h>
#include <math.h>

void function(int n) {
    if (n <= 1) {
        printf("So hoan hao khong phai la:%d\n", n);  
        return;
    }
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;  
        }
    }
    if (sum == n) {
        printf("So hoan hao la:%d\n", n);
    } else {
        printf("So hoan hao khong phai la:%d\n", n);
    }
}
int main() {
    int a, b;
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    function(a);
    function(b);
    return 0;
}

#include <stdio.h>

long long songuyen(int n) {
	long long ketqua = 1;
    if (n < 0) {
        printf("Giai thua khong xac dinh cho so am.\n");
        return -1;
    }
    for (int i = 1; i <= n; i++) {
        ketqua *= i;
    }
    return ketqua; 
}

int main() {
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);
    long long ketqua = songuyen(num);
    if (ketqua != -1) {
        printf("Giai thua cua %d la: %lld\n", num, ketqua);
    } 
    return 0;
}


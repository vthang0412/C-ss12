#include <stdio.h>

void greet(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap gia tri a[%d] = ", i);
        scanf("%d", &a[i]);
    }
   
}
int scMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    greet(a, n);
    int max = scMax(a, n);
    printf("So lon nhat trong mang la: %d\n", max);
    
    return 0;
}


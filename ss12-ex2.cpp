#include <stdio.h>

void greet(int a[], int n) {
    printf("Nhap vao mang bat ky:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap gia tri a[%d] = ", i);
        scanf("%d", &a[i]);
    }
        printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    greet(a, n); 
  
    return 0;
}


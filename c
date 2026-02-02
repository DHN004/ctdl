#include <stdio.h>

int main() {
    int n, m;
    int a[1000], b[1000], c[2000];
    
    // Nhập n và mảng a
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        c[i] = a[i];   // ghép vào mảng c
    }

    // Nhập m và mảng b
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
        c[n + i] = b[i];   // ghép tiếp vào mảng c
    }

    int len = n + m;

    // Sắp xếp mảng c (bubble sort)
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (c[i] > c[j]) {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    // In kết quả
    for (int i = 0; i < len; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

    }
    printf("\n===============");
    for (int i = 0; i < n; i++) {
        printf("\nNumber %d:%d", i + 1, arr[i]);

    }
    printf("\nResult");
    for (int i = 10; i >= 0; i--) {

        printf("%d,", arr[i]);
    }

        return 0;
    }

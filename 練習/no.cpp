#include <stdio.h>

int main() {
    // segmentation fault
    int arr[10] = {2, 4, 6}; // 2, 4, 6, 0, 0, 0, 0, 0, 0, 0
    int a = 5, b = 6;
    scanf("%d", &arr[a+b*1000]);
    printf("%d\n%d\n%d\n", arr[0], arr[2], arr[a+b*1000]);
    return 0;
}

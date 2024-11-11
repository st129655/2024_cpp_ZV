#include <iostream>
int main(int argc, char* argv[]) {
    int n = 0;
    std::cin >> n;
    int* a = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        scanf_s("%d", a + i);
    }
    int k = 0;
    std::cin >> k;
    k = k % n;
    if (k < 0) {
        k = k + n;
    }
    int* b = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        *(b + (i + k) % n) = *(a + i);
    }
    for (int i = 0; i < n; ++i) {
        std::cout << *(b + i) << " ";
    }
    free(a);
    free(b);
    return EXIT_SUCCESS;
}
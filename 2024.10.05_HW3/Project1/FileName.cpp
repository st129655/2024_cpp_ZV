#include <iostream>
#include <fstream>

int main() {
    int n = 0;
    scanf_s("%d", &n);
    int r = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int z = 0;
                scanf_s("%d", &z);
                if (i < j && z == 1) {
                    r++;
                }
            }
        }
    printf("%d", r);

    return 0;
}

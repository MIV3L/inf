#include <cstdio>

int main() {
    int liczba;

    printf("Wprowadz 5 liczb:\n");

    for (int i = 0; i < 5; ++i) {
        scanf("%d", &liczba);
        if (liczba % 2 == 0)
            printf("%d ", liczba);
    }

    return 0;
}

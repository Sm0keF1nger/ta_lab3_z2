#include <stdio.h>

int calculateDictionaries(int n);

int main() {
    char languages[5][20] = { "ukrainian", "english", "german", "french", "polish" };
    int n = 5; // Кількість мов
    int dictionaries = calculateDictionaries(n); // Кількість словників

    printf("List of languages:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, languages[i]);
    }

    printf("\ n * (n - 1).\n");
    printf(" %d * (%d - 1)\n\n", n, n);
    printf("The number of required dictionaries: %d\n", dictionaries);

    printf("\nDictionary names:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            printf("%s-%s\n", languages[i], languages[j]);
        }
    }

    return 0;
}

int calculateDictionaries(int n) {
    if (n <= 1) {
        return 0;
    }
    return (n - 1) + calculateDictionaries(n - 1);
}

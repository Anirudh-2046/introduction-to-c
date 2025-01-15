#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N;
    scanf("%d", &N);

    char colors[N][101]; // Array to store colors, each with max length 100
    int count[1000] = {0}; // Array to store counts of colors (case-insensitive)

    for (int i = 0; i < N; i++) {
        scanf("%s", colors[i]);

        // Convert color to uppercase for case-insensitive comparison
        for (int j = 0; colors[i][j]; j++) {
            colors[i][j] = toupper(colors[i][j]);
        }

        // Count the occurrences of each color
        for (int k = 0; k <= i; k++) {
            if (strcmp(colors[i], colors[k]) == 0) {
                count[k]++;
                break;
            }
        }
    }

    // Find the first odd-count color
    for (int i = 0; i < N; i++) {
        if (count[i] % 2 != 0) {
            printf("%s\n", colors[i]);
            return 0;
        }
    }

    // If no odd-count color is found
    printf("All balls are even\n");
    return 0;
}

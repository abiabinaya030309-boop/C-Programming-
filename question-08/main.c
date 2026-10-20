#include <stdio.h>

int main() {
    int experience, score;

    scanf("%d %d", &experience, &score);

    if (experience < 3) {
        printf("Junior");
    } else if (experience <= 7) {
        if (score >= 80) {
            printf("Mid-Level");
        } else {
            printf("Junior");
        }
    } else {
        if (score >= 85) {
            printf("Senior");
        } else if (score >= 80) {
            printf("Mid-Level");
        } else {
            printf("Junior");
        }
    }

    return 0;
}

#include <stdio.h>

void sortAsc(int ar[], int size);
void best3(int score[], int size);

int main() {
    int score[4];
    int i;

	printf("Scores : ");
    for (i = 0; i < 4; i++) {
        scanf("%d", &score[i]);
    }

	printf("Best scores : ");
    best3(score, 4);

    return 0;
}

void sortAsc(int ar[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1 - i; j++) {
            if (ar[j] > ar[j + 1]) {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
}

void best3(int score[], int size) {
    int sum = 0, i;

    sortAsc(score, size);

    for (i = 1; i < size; i++) {
        printf("%d ", score[i]);
    }
}

#include <stdio.h>

void printAr(int ar[], int size);
int findMax(int num[], int size);
void addthree(int number[], int pos[][2], int posSize);

int main() {
    int number[] = {10, 20, 30, 40, 50};
    int numberSize = sizeof(number) / sizeof(number[0]);

    int pos[][2] = {
        {0, 5},
        {2, 10},
        {4, 3}
    };
    int posSize = sizeof(pos) / sizeof(pos[0]);

    printf("Before add:\n");
    printAr(number, numberSize);

    addthree(number, pos, posSize);

    printf("After add:\n");
    printAr(number, numberSize);

    printf("Maximum = %d\n", findMax(number, numberSize));

    return 0;
}

void printAr(int ar[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", ar[i]);
    printf("\n");
}

int findMax(int num[], int size) {
    int i, max = num[0];
    for (i = 1; i < size; i++) {
        if (num[i] > max)
            max = num[i];
    }
    return max;
}

void addthree(int number[], int pos[][2], int posSize) {
    int i;
    for (i = 0; i < posSize; i++) {
        number[pos[i][0]] += pos[i][1];
    }
}

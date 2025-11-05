#include <stdio.h>
#include <locale.h>
#define MAX_SIZE 100 

int main() {
    setlocale(LC_CTYPE, "");
    int n;
    printf("Введите количество элементов массива (не более 100): ");
    scanf("%d", &n);
    int arr[MAX_SIZE];

    if (n > MAX_SIZE || n <= 0) {
        printf("Некорректный размер массива\n");
        return 1;
    }

    int sum = 0;
    int count = 0;

    printf("Введите %d целых чисел:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] != 0) {
            sum += arr[i];
            count++;
        }
    }

    if (count == 0) {
        printf("В массиве нет ненулевых элементов\n");
    }
    else {
        double avg = (double)sum / count;
        printf("Среднее арифметическое (без нулевых элементов): %.2f\n", avg);
    }

    system("pause");
    return 0;
}

#include <stdio.h>

int sumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    int N;
    scanf("%d", &N);
    int array[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    
    for (int i = 0; i < N; i++) {
        printf("%d ", sumOfDigits(array[i]));
    }
    
    return 0;
}
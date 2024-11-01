#include "stdio.h"

int main() {
    int numbers[10] = {5, 7, 12, 11, 3, 2, 9, 6, 7, 11};

    for(int i=0; i<9; i++) {
        int min = i;

        for(int j=i+1; j<10; j++) {  // j<10 olarak değiştirildi
            if(numbers[j] < numbers[min])
                min = j;
        }

        int temp = numbers[i];
        numbers[i] = numbers[min];
        numbers[min] = temp;
    }

    for(int i=0; i<10; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}

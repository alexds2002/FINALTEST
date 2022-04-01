#include <stdio.h>

double minNum(int* arr, size_t n);
int main(){

    int size, input, cnt = 0;

    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size - 1];
    f
    printf("%d", minNum(*arr, size));
    return 0;
}

double minNum(int* arr, size_t n){
    
    int min = *arr;
    for (int i = 0; i < n - 1; i++)
    {
        if(min > *(arr + i)){
            min = *(arr + i);
        }
    }
    return min;
}
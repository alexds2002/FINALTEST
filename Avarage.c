#include <stdio.h>

int Avarage(int* arr, int n);

int main(){
    int n;
    int arr[];
    scanf("%d", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", *(arr + i))
    }
    Avarage(arr, n);
    return 0;
}
int Avarage(int* arr, int n){

    int sum = 0;
    for(int i = 0; i < n; i++){

        sum += *(arr + n);
    }
    return sum/n;
}
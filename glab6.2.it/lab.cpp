#include <iostream>
#include <climits> 

// знаходить найменший парний
int findSmallestEvenElement(const int arr[], int n) {
    int smallest = INT_MAX; // Початкове значення - максимальне можливе
    for (int a = 0; a < n; ++a) {
        if (arr[a] % 2 == 0 && arr[a] < smallest) {
            smallest = arr[a];
        }
    }
    return smallest;
}

int main() {
    const int n = 10; // Розмір
    int arr[n] = { 5, 7, 9, 2, -3, 2, 3, 4, 56, -7 }; // масив

    // вивід масиву
    std::cout << "array: ";
    for (int a = 0; a < n; ++a) {
        std::cout << arr[a] << " ";
    }
    std::cout << std::endl;

    //  найменший парний елемент
    int smallestEven = findSmallestEvenElement(arr, n);

    // Виведемо результат найменший елемент 
    std::cout << " mallest even element: " << smallestEven << std::endl;

    return 0;
}
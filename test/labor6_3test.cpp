#include <gtest/gtest.h>
#include "../labor6_3.hpp"
// Оголошення функцій, щоб можна було їх тестувати


// Тести для шаблонної функції CountOddtemp
TEST(CountOddTempTest, HandlesNoOddNumbers) {
    int arr[] = {2, 4, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    EXPECT_EQ(CountOddtemp(arr, size, 0, 0), 0);
}

TEST(CountOddTempTest, HandlesOddNumbers) {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    EXPECT_EQ(CountOddtemp(arr, size, 0, 0), 3); // В масиві 3 непарних числа
}

TEST(CountOddTempTest, HandlesAllOddNumbers) {
    int arr[] = {1, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    EXPECT_EQ(CountOddtemp(arr, size, 0, 0), 5); // Всі числа непарні
}

// Тести для функції Countodd
TEST(CountOddTest, HandlesNoOddNumbers) {
    int arr[] = {2, 4, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    EXPECT_EQ(Countodd(arr, size, 0, 0), 0);
}

TEST(CountOddTest, HandlesOddNumbers) {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    EXPECT_EQ(Countodd(arr, size, 0, 0), 3); // В масиві 3 непарних числа
}

TEST(CountOddTest, HandlesAllOddNumbers) {
    int arr[] = {1, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    EXPECT_EQ(Countodd(arr, size, 0, 0), 5); // Всі числа непарні
}


#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <vector>  
using namespace std;

template <typename T>
int CountOddtemp(T mas[], int n, int m, int count) {
    if (m == n)
        return 0;
    if (mas[m] % 2 != 0)
        count = 1;
    return count + CountOddtemp(mas, n, m + 1, 0);

}
int Countodd(int mas[], const int k, int m, int count) {
 
    if (m == k)
        return 0;
    if (mas[m] % 2 != 0 && m < k)
        count = 1;
    return count + Countodd(mas, k, m + 1, 0);
}

int main() {
    srand((unsigned)time(0));


    int size = 5 + rand() % 16;


    int* arr = new int[size];


    for (int i = 0; i < size; i++) {
        arr[i] = 1 + rand() % 100;
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }


    cout << "Sum (template) =  " << CountOddtemp(arr, size, 0, 0) << endl;
    cout << "Sum (standart function) =  " << Countodd(arr, size, 0, 0) << endl;

    delete[] arr;

    return 0;
}
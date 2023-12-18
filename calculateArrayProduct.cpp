#include <iostream>

using namespace std;

float calculateArrayProduct(float arr[], int);

int main()
{
    float arr[] = {1.5f, 2.5f, 3.5f, 4.5};
    int size = sizeof(arr) / sizeof(arr[0]);

    float product = calculateArrayProduct(arr, size);
    cout << "Das Produkt der Elemente im Array beträgt: " << product << std::endl;

    return 0;
}

float calculateArrayProduct(float arr[], int size)
{
    float product = 1.0f;

    for (int i = 0; i < size; ++i)
    {
        product *= arr[i];
    }

    return product;
}

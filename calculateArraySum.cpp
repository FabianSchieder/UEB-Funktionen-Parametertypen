#include <iostream>

using namespace std;

int calculateArraySum(int arr[], int);

int main()
{
    int arr[] = {3, 7, 4, 6, 5,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = calculateArraySum(arr, size);
    cout << "Die Summe der Elemente im Array betraegt: " << sum << endl;

    return 0;
}

int calculateArraySum(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }

    return sum;
}

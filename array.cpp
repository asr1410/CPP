#include <iostream>
using namespace std;

int main()
{
    int size, num;
    cout << "enter the number you want the multiplication table " << endl;
    cin >> num;
    cout << "the value you require multiplication to" << endl;
    cin >> size;
    int arr[size];
    int *ptr = arr;
    for (int i = 0; i < size; i++)
    {
        arr[i] = (num * (i + 1));
    }
    for (int i = 0; i < size; i++)
    {
        cout << num << " X " << i + 1 << " = " << arr[i] << endl;
        cout << num << " X " << i + 1 << " = " << *(ptr + i) << endl;
    }
    free(arr);
    cout << sizeof(arr) << endl;
    cout << sizeof(ptr) << endl;

    return 0;
}
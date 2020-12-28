#include <iostream>
using namespace std;

int main()
{
    int num, range;
    cout << "Enter to number to get multiplication table" << endl;
    cin >> num;
    cout << "Enetr the range you want multiple upto " << endl;
    cin >> range;
    int arr[range];
    int *ptr = arr;
    for (int i = 0; i < range; i++)
    {
        arr[i] = (num * (i + 1));
        cout << num << " X " << i + 1 << " = " << arr[i] << endl;
    }
    cout << sizeof(arr) << endl;
    cout << sizeof(ptr) << endl;
    free(ptr);
    cout << *(ptr + 6);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int length, int num)
{
    int left = 0;
    int right = length - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == num)
        {
            return mid;
        }
        else if (arr[mid] < num)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(arr) / sizeof(arr[0]);
    int num = 9;
    (binarySearch(arr, length, num) == -1) ? cout << "element is not present" : cout << "element is present at index " << binarySearch(arr, length, num);
    return 0;
}
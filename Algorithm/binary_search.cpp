#include <iostream>
using namespace std;

int main()
{
    int low, high, mid, x;
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    low = 0;
    high = 9;
    cin >> x;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x == array[mid])
            break;
        if (x < array[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (low > high)
        cout << "Nope";
    else
        cout << mid;
}
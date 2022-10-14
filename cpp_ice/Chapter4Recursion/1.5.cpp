#include <iostream>
using namespace std;

int main()
{
    int m,n;
    cin >> n>>m;
    int left = n;
    int right =m;
    while(right!=0){
        int temp=right;
        right = left%right;
        left = temp;
    }
    cout << left;
    return 0;
}

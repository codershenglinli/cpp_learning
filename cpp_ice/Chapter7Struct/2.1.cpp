#include <iostream>
using namespace std;

/*快速幂算法
int fpower(int x, int n) {
    // 计算 x^n, 复杂度 O(log n)
    int ans = 1;
    while (n) {
        if (n % 2) ans *= x;
        x *= x;
        n /= 2;
    }
    return ans;
}
*/

struct matrix
{
    long long int a,b,c,d;
};
long long int mul_large_int(long long a, long long b){
    unsigned long long un_a = a;
    unsigned long long un_b = b;
    if(a<0) un_a = -a;
    if(b<0) un_b = -b;
    unsigned long long ans = (un_a*un_b)%(1000000007ULL);
    if(a<0&&b<0||a>0&&b>0) return ans;
    else return -ans;
}
matrix mul(matrix a, matrix b){
    matrix ans = {(mul_large_int(a.a,b.a)%(1000000007LL)+mul_large_int(a.b,b.c)%(1000000007LL))%(1000000007LL),(mul_large_int(a.a,b.b)%(1000000007LL)+mul_large_int(a.b,b.d)%(1000000007LL))%(1000000007LL),(mul_large_int(a.c,b.a)%(1000000007LL)+mul_large_int(a.d,b.c)%(1000000007LL))%(1000000007),(mul_large_int(a.c,b.b)%(1000000007LL)+mul_large_int(a.d,b.d)%(1000000007LL))%(1000000007LL)};
    return ans;
}
matrix fpower(matrix x, long long int n){
    matrix ans = {1,0,0,1};
    while (n) {
        if(n%2) ans = mul(ans,x);
        x = mul(x,x);
        n/=2;
    }
    return ans;
}

int main(){
    matrix x;
    long long int n;
    cin >> n >> x.a >> x.b >> x.c >> x.d;
    x = fpower(x,n);
    cout << x.a << ' ' << x.b <<endl;
    cout << x.c << ' ' << x.d;
    return 0;
}
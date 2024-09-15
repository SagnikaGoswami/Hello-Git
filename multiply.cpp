#include <iostream>
using namespace std;

int mul(int a, int b){
    return a * b;
}

int main()
{
    int a = 5;
    int b = 6;

    int ans = mul(a,b);

    cout << "multiplied ans = " << ans << endl;
    
    return 0;
}
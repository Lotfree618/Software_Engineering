#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    double n;
    double pi = 0.0;

    cout << "输入莱布尼兹公式项数:";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int d = 2 * i + 1;
        if (i % 2 == 0) {
            pi += 1.0 / d;
        } else {
            pi -= 1.0 / d;
        }
    }

    pi *= 4;

    cout << "使用莱布尼兹公式项数为: " << n << "\n得到pi为: "<< fixed << setprecision(10) << pi << endl;

    return 0;
}

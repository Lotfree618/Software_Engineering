#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL)); // 设置随机数种子为当前时间
    int num = 0;
    num = rand() % 90000 + 10000; // 生成10000到99999之间的随机数
    cout << num << endl; // 输出随机数
    return 0;
}

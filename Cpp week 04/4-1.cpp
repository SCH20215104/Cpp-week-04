#include <iostream>
using namespace std;

int countDigit(int n) {
    if (n == 0)
        return 1;
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}

void countDigit(string c) {
    countDigit( c );
}

int main() {
    cout << "���� 12345�� �ڸ�����? : " << countDigit(12345) << endl;
    cout << "���ڿ� 12345�� �ڸ�����? : " << countDigit(12345) << endl;
}
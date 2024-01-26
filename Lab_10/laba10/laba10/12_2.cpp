#include <iostream>
using namespace std;

void main() {
    setlocale(LC_ALL, "rus");
    char tmp[33];
    int A;
    int m, q;
    int B;
    int p, n;

    cout << "¬ведите число A: ";
    cin >> A;

    _itoa_s(A, tmp, 2);
    cout << "A в двоичном виде: " << tmp << endl;

    cout << "¬ведите p: ";
    cin >> p;

    cout << "¬ведите n: ";
    cin >> n;

    cout << "¬ведите число B: ";
    cin >> B;

    _itoa_s(B, tmp, 2);
    cout << "B в двоичном виде: " << tmp << endl;

    cout << "¬ведите q: ";
    cin >> q;

    do {
        cout << "¬ведите m: ";
        cin >> m;
    } while (m > n);
   
    int maskA = 0, maskB = 0;
    
    for (int i = 1; i <= n; i++)
        maskA = maskA << 1 | 1;
    
    maskB = maskA << (p - n + 1);
    
    maskA = ~maskB;
    
    _itoa_s(A & maskA, tmp, 2);
    cout << " –езультат A: " << tmp << endl;

    maskA = 0;

    for (int i = 0; i < n; i++) {
        maskA += pow(2, (p - 1 + i));
    }
    
    _itoa_s(maskA, tmp, 2);
    cout << "maskA = " << tmp << endl;
    
    maskB = 0;

    for (int i = 0; i < m; i++) {
        maskB += pow(2, (q - 1 + i));
    }

    if (q > p)
        _itoa_s(((B | (B & maskB) | ((A & maskA) << (q - p - 1)))), tmp, 2);
    else
        _itoa_s((B | ((B & maskB) | ((A & maskA) >> (p - q - 1)))), tmp, 2);

    int d = 0;

    while (tmp[d] == '1' || tmp[d] == '0')
        d++;

    int res = 0;
    int i = 0;

    while (tmp[i] == '1' || tmp[i] == '0') {
        res += ((int)tmp[d - 1 - i] - 48) * pow(2, i);
        i++;
    }

    _itoa_s(res, tmp, 2);
    cout << " –езультат B: " << tmp << endl;
}
#include <iostream> 
#include <windows.h>

using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char t[33];
    int A, B, q, p, m, n, maska = 0, maskb = 0;
    cout << "������� ����� A: ";
    cin >> A;
    _itoa_s(A, t, 2);
    cout << "�������� ��� �: " << t << endl;
    cout << "������� n: ";
    cin >> n;
    cout << "������� p: ";
    cin >> p;
    cout << "������� ����� B: ";
    cin >> B;
    _itoa_s(B, t, 2);
    cout << "�������� ��� B: " << t << endl;
    cout << "������� m: ";
    cin >> m;
    cout << "������� q: ";
    cin >> q;
    // ��� ��� ��������� ���������� ������������ ���  
    
    for (int i = p; i < p + n; i++) { // �������� ����� ��� �
        maska += pow(2, i);
    }
    A = (A & ~maska); // � ��������� ���� ���� ��������� ��� �����
    p = q - p; // ������, �� ��� ����� ������� �����, ��������� ������
    if (p < 0) {
        maska = maska >> abs(p);
    }
    else if (p > 0) {
        maska = maska << p;
    }
    for (int i = q - 1; i < q - 1 + m; i++) { // �������� ����� ��� b, ��� ������� ��� �������� ����� 
        maskb += pow(2, i);
    }
    B = (B & ~maskb); // ������� ��������� ��� �������� �����
    B = (B | maska); // ������ ��������� ��� �������� �� �������� � �
    _itoa_s(A, t, 2);
    cout << "��������� �: " << t << endl; // ������� � � ��������� ������
    _itoa_s(B, t, 2);
    cout << "��������� B: " << t << endl; // ������� b � ��������� ������
}
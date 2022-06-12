#include <iostream>

using namespace std;

int main()
{
    float a, b, hasil;
    char aritmatika;

    cout << "Selamat datang di program calculator \n \n";

    // Masukkan input dari user
    cout << "Masukkan nilai pertama : ";
    cin >> a;
    cout << "Pilih operator +,-,/,* : ";
    cin >> aritmatika;
    cout << "Masukkan nilai kedua : ";
    cin >> b;

    cout << "\nHasil perhitungan : ";
    cout << a << aritmatika << b << endl;

    if (aritmatika == '+')
    {
        hasil = a + b;
    }
    else if (aritmatika == '-')
    {
        hasil = a - b;
    }
    else if (aritmatika == '/')
    {
        hasil = a / b;
    }
    else if (aritmatika == '*')
    {
        hasil = a * b;
    }
    else
    {
        cout << "operator yang anda masukkan salah" << endl;
    }

    cout << " = " << hasil << endl;

    cin.get();
    return 0;
}

#include <iostream>

using namespace std;

int luas(int p, int l)
{
    int ls;
    ls = p * l;
    return ls;
}
main()
{
    int pj, lb, hsl;
    cout << "Panjang = ";
    cin >> pj;
    cout << "Lebar = ";
    cin >> lb;
    hsl = luas(pj, lb);
    cout << "\nLuasnya = " << hsl;
}
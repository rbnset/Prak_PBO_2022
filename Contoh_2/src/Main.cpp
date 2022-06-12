#include <iostream>

using namespace std;

int luas(int p, int l)
{
    return (p * l);
}
main()
{
    int pj, lb;
    cout << "Panjang = ";
    cin >> pj;
    cout << "Lebar = ";
    cin >> lb;
    cout << "\nLuasnya = " << luas(pj, lb);
}
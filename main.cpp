/* Desta Ari Alfananda */
/* 20051397008 */
/* 2020B */

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, a, b;
    char yt;
do
    {
    cout << "\t\t   PROGRAM MEMBUAT SEGITIGA MENGGUNAKAN ANGKA\n\n"<<endl;
    cout << " Masukkan Tinggi Segitiga = ";
    cin >> n;
    for (a=1 ; a<=n ; a++)
    {
        for (b=1 ; b<=a ; b++)
        {
            cout << " " << b;
        }
        cout << endl;
    }

    for (a=n-1 ; a>=1 ; a--)
    {
        for (b=1 ; b<=a; b++)
        {
            cout << " " << b;
        }
        cout << endl;
    }
    cout << " Apakah Anda Ingin Mencoba Lagi? [Y/T]? ";
    cin >> yt;
}
    while ((yt=='Y')||(yt=='y'));
    cout<<endl<<endl;
    cout << "***********TERIMAKASIH***********";

    return 0;
}


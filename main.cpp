/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    float angka, hasil;
    int nomor_pilihan;
    
    cout <<"Konversi Satuan Panjang" << endl;
    
    cout << "Menu Konversi Satuan Panjang:" << endl;
 cout << "1. km ke m" << endl;
    cout << "2. km ke inci" << endl;
    cout << "3. km ke mil" << endl;
    cout << "4. m ke km" << endl;
    cout << "5. m ke inci" << endl;
    cout << "6. m ke mil" << endl;
    cout << "7. inci ke km" << endl;
    cout << "8. inci ke m" << endl;
    cout << "9. inci ke mil" << endl;
    cout << "10. mil ke km" << endl;
    cout << "11. mil ke m" << endl;
    cout << "12. mil ke inci" << endl;
    cout << "Masukkan Pilihan Nomor Konversi : ";
    cin >> nomor_pilihan;
    
    cout << "Masukkan Angka Yang Ingin Di Konversi: ";  
    cin >> angka;

  switch(nomor_pilihan)
    {
        case 1:
            hasil = angka * 1000;
            cout << angka << " km = " << hasil << " m" << endl;
            break;
        case 2:
            hasil = angka * 39370.0787;
            cout << angka << " km = " << hasil << " inci " << endl;
            break;
        case 3:
            hasil = angka / 1.609344;
            cout << angka << " km = " << hasil << " mil " << endl;
            break;
        case 4:
            hasil = angka / 1000;
            cout << angka << " m = " << hasil << " km" << endl;
            break;
        case 5:
            hasil = angka * 39.37;
            cout << angka << " m = " << hasil << " inci " << endl;
            break;
         case 6:
            hasil = angka / 1609,344;
            cout << angka << " m = " << hasil << " mil " << endl;
            break;
         case 7:
            hasil = angka / 39370;
            cout << angka << " inci = " << hasil << " km " << endl;\
            break;
         case 8:
            hasil = angka / 39,37;
            cout << angka << " inci = " << hasil << " m " << endl;
            break;
         case 9:
            hasil = angka / 63360;
            cout << angka << " inci = " << hasil << " mil " << endl;
            break;
         case 10:
            hasil = angka * 1.609344;
            cout << angka << " mil = " << hasil << " km " << endl;
            break;
         case 11:
            hasil = angka * 1609,344;
            cout << angka << " mil = " << hasil << " m " << endl;
            break;
         case 12:
            hasil = angka * 6360;
            cout << angka << " mil = " << hasil << " inci " << endl;
            break;
        default:
        cout << "Pilihan yang dimasukkan salah!" << endl;    }
    return 0;
}

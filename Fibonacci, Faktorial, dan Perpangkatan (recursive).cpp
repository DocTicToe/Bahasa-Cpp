#include <iostream>
using namespace std;

int pangkat(int a, int b);
int faktorial(int a);
int fibonacci(int a);

int main(){
    char pilihan;
    while(true){
        cout << "Fibonacci (c)/Faktorial (f)/Perpangkatan (p): ";
        cin >> pilihan;
        switch (pilihan){
        case 'C':
        case 'c':
            int n, hasil_c;
            cout << "Masukan nilai n: ";
            cin >> n;
            cout << "Hasil = ";
            for(int i = 1; i <= n; i++){
                cout << fibonacci(i) << " ";
            }
            cout << endl;
            break;
        case 'F':
        case 'f':
            int angka_f, hasil_f;
            cout << "Masukan sebuah angka: ";
            cin >> angka_f;
            hasil_f = faktorial(angka_f);
            cout << "Hasil = " << hasil_f << endl;
            break;
        case 'P':
        case 'p':
            int angka_p, p, hasil_p;
            cout << "Masukan sebuah angka: ";
            cin >> angka_p;
            cout << "Mau dipangkatkan berapa? \n";
            cin >> p;
            hasil_p = pangkat(angka_p, p);
            cout << "Hasil = " << hasil_p << endl;
            break;
        default: cout << "Error: Masukannya sesuai apa yang diminta dong kakak!" << endl;
            break;
        }
    }
    cout << "\nProgram telah selesai...";
    cin.get();
    return 0;
}

int pangkat(int a, int b){
    int hasil = a;
    if(b == 1){
        return hasil;
    } else if(b == 2){
        return hasil * hasil;
    } else {
        return pangkat(a, b-1) * hasil;
    }
}

int faktorial(int a){
    if(a == 0){
        return 1;
    } else if (a == 1){
        return 1;
    } else if (a == 2){
        return 2;
    } else {
        return a * faktorial(a-1);
    }
}

int fibonacci(int a){
    if (a == 1){
        return 0;
    } else if (a == 2){
        return 1;
    } else if (a == 3){
        return 1;
    } else {
        return fibonacci(a-1) + fibonacci(a-2);
    }
}

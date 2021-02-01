#include <iostream>
#include <array>
using namespace std;

int main(){
    array <int, 11> arr;
    cout << "Masukan data:" << endl;
    for(int i = 0; i <= arr.size()-1; i++){
        cout << "Jumlah mahasiswa bernilai ";
        if(i == 0){
            cout << "0-9   : ";
        } else if(i == 10){
            cout << "100   : ";
        } else{
            cout << i*10 << "-" << i*10+9 << " : ";
        }
        cin >> arr[i];
    }
    cout << endl;
    cout << "Grafik nilai mahasiswa prodi informatika tahun ajaran 2020/2021:" << endl;
    for(int i = 0; i <= arr.size()-1; i++){
        if(i == 0){
            cout << "0-9   : ";
        } else if(i == 10){
            cout << "100   : ";
        } else{
            cout << i*10 << "-" << i*10+9 << " : ";
        }
        int y = 0;
        for(y; y < arr[i]; y++){
            cout << "*";
        }
        cout << endl;
    }



    cout << "\nProgram telah selesai...";
    cin.get();
    return 0;
}

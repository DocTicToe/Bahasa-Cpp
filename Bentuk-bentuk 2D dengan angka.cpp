#include <iostream>

using namespace std;

int main(){
    int n, x = 1;
    cout << "Masukan nilai n (positif, 1 s/d 9): ";
    cin >> n;
    //Segitiga siku-siku normal (from left to right)
    cout << "Segitiga siku-siku normal:" << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= x; j++){
            cout << x << " ";
        }
        x++;
        cout << endl;
    }
    cout << "\n";

    //Segitiga siku-siku arabic (from right to left)
    cout << "Segitiga siku-siku arabic:" << endl;
    x = 1;
    int y = 2*n - 1;
    for(int i = 1; i <= n; i++){
        int k = 1;
        for(int j = 1; j <= x; j++){
            for (k; k < y; k++){
                cout << " ";
            }
            cout << x << " ";
        }
        x++;
        y -= 2;
        cout << endl;
    }
    cout << "\n";

    //Segitiga siku-siku normal terbalik (from left to right)
    x = n;
    cout << "Segitiga siku-siku normal terbalik:" << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= x; j++){
            cout << x << " ";
        }
        x--;
        cout << endl;
    }
    cout << "\n";

    //Segitiga siku-siku arabic terbalik (from right to left)
    cout << "Segitiga siku-siku arabic terbalik:" << endl;
    x = n;
    y = 2*n -1;
    for(int i = 1; i <= n; i++){
        int k = 2*n -1;
        for(int j = 1; j <= x; j++){
            for (k; k < y; k++){
                cout << " ";
            }
            cout << x << " ";
        }
        x--;
        y += 2;
        cout << endl;
    }
    cout << "\n";

    //Segitiga sama kaki normal
    cout << "Segitiga sama kaki normal:" << endl;
    x = 1;
    y = n - 1;
    for(int i = 1; i <= n; i++){
        int k = 1;
        for(int j = 1; j <= x; j++){
            for(k; k <= y; k++){
                cout << " ";
            }
            cout << x << " ";
        }
        y--;
        x++;
        cout << endl;
    }
    cout << "\n";

    //Segitiga sama kaki terbalik
    cout << "Segitiga sama kaki terbalik:" << endl;
    x = n;
    y = n - 1;
    for(int i = 1; i <= n; i++){
        int k = n - 1;
        for(int j = 1; j <= x; j++){
            for(k; k < y; k++){
                cout << " ";
            }
            cout << x << " ";
        }
        y++;
        x--;
        cout << endl;
    }
    cout << "\n";

    //Ketupat
    cout << "Ketupat:" << endl;
    x = 1;
    y = n - 1;
    for(int i = 1; i <= n; i++){
        int k = 1;
        for(int j = 1; j <= x; j++){
            for(k; k <= y; k++){
                cout << " ";
            }
            cout << x << " ";
        }
        y--;
        x++;
        cout << endl;
        if(i == n){
            x -= 2;
            y = n - 1;
            for(int i = 1; i <= n; i++){
                int k = n - 2;
                for(int j = 1; j <= x; j++){
                    for(k; k < y; k++){
                        cout << " ";
                    }
                    cout << x << " ";
                }
                y++;
                x--;
                cout << endl;
            }
        }
    }
    cout << "\n";

    cout << "\nProgram telah selesai...";
    cin.get();
    return 0;
}

//    Ketupat versi normal

//    cout << "Ketupat:" << endl;
//    x = 1;
//    y = n - 1;
//    for(int i = 1; i <= n; i++){
//        int k = 1;
//        for(int j = 1; j <= x; j++){
//            for(k; k <= y; k++){
//                cout << " ";
//            }
//            cout << x << " ";
//        }
//        y--;
//        x++;
//        cout << endl;
//    }
//    x = n - 1;
//    y = n - 1;
//    for(int i = 1; i <= n; i++){
//        int k = n - 2;
//        for(int j = 1; j <= x; j++){
//            for(k; k < y; k++){
//                cout << " ";
//            }
//            cout << x << " ";
//        }
//        y++;
//        x--;
//        cout << endl;
//    }
//    cout << "\n";

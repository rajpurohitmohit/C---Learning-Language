// #include <iostream>
// using namespace std;

// int main() {
//     int n, num = 1;
//     cout << "Enter the number";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n-1; j++) {
//             cout << "  ";
//         }
//         for (int j = 1; j <= i;j++){
//             cout << '*';
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n, num = 1;
//     cout << "Enter the number:- ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n-1; j++) {
//             cout << "";
//         }
//         for (int j = 1; j <= i;j++){
//             cout << char (j+64);
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int flag_width = 10;
    int flag_height = 5;
    int pole_height = 7;

    for (int i = 0; i < flag_height; i++) {
        cout << "|";
        for (int j = 0; j < flag_width; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < pole_height; i++) {
        cout << "|" << endl;
    }

    return 0;
}

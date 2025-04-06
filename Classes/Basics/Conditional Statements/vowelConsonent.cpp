#include <iostream>
using namespace std;

int main() {
    char alp;

    cout << "Enter an alphabet: ";
    cin >> alp;


    if (alp == 'a' || alp == 'e' || alp == 'i' || alp == 'o' || alp == 'u'){
        cout << "Vowel" << endl;
    } else {
        cout << "Consonant" << endl;
    }

    return 0;
}
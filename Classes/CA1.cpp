#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the no.:- ";
    cin >> num;

// Level 1:- 
    if (num == 2)
    cout << "You escaped!" << endl;

    else if (num == 1)
    cout << "Game Over!" << endl;

    else if (num == 3)
    cout << "You fell into a trap!" << endl;

    else
    cout << "Invalid Choice" << endl;
    
// Level 2:- 
    if (num == 2) {
        int step = 1;
        while (step <= 10) {
            cout << "Stepping -" << step << endl;
            if (step == 7) {
                int a;
                cout << "You reached step 7. \n Do you want to proceed? (1 - Yes/ 2 - No): ";
                cin >> a;
                if (a == 2) {
                    cout << "You fell into a pit!" << endl;
                    cout << "You Lost";
                    break;
                }
            }
            step++;
        }
        if (step > 10) {
            cout << "You escaped!" << endl;
        }
    }
    return 0;
}
/*Write a program to print the following pattern based on the user's input for the number of rows:
For example, if the input is n = 5, the output should look like this:
1
2	3
4	5	6
7	8	9	10
11	12	13	14	15
*/

#include <iostream>
using namespace std;

int main() {
    int a,number = 1;
    cout << "Enter the number:- ";
    cin>> a;
    for (int i=1;i<=a;i++){
        for (int b=1;b<=i;b++){
            cout << number << "\t";
            number++;
            }
        cout << endl;
    }
    return 0;
}
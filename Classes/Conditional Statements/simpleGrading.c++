#include<iostream>
using namespace std;

int main(){
    int arr[3];
    int sum;

    cout<< "Enter the marks in Science: ";
    cin>>arr[0];

    cout<< "Enter the marks in Social Science: ";
    cin>>arr[1];

    cout<< "Enter the marks in Maths: ";
    cin>>arr[2];

    sum = arr[0] + arr[1] + arr[2];

    if(sum>=270){
        cout << "Grade A";
    }
    else if(sum>=240){
        cout << "Grade B";
    }
    else if(sum>=200){
        cout << "Grade C";
    }
    else{
        cout << "FAIL";
    }
    return 0;
}
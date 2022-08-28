#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Please enter a number: ";
    cin >> n;

    //create a countdown based on N
    for(; n >= 1; n--){
        cout << n << endl;
    }

    cout << endl << "Please press control + C to exit!";
    cin >> n;
}
#include <iostream>
using namespace std;

int main(void) {
    int height;
    cout << "Enter the height of the pyramid: ";
    cin >> height;    
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= 2*height-1; j++) {
            if (j >= height-(i-1) && j <= height+(i-1))  
            cout << "*";
            else
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
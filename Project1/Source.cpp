#include <iostream>
using namespace std;

int main() {
    int rows = 3; 
    int cols = 3; 
    int array[rows][cols];

    int num;
    cout << "Ââåäèòå ÷èñëî: ";
    cin >> num;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j == 0) {
                array[i][j] = num;
            }
            else {
                array[i][j] = array[i][j - 1] * 2;
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
// 2 çàäàíèå 
#include <iostream>
using namespace std;

int main() {
    int rows = 3; 
    int cols = 3; 
    int array[rows][cols];

    int num;
    cout << "Ââåäèòå ÷èñëî: ";
    cin >> num;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j == 0) {
                array[i][j] = num;
            }
            else {
                array[i][j] = array[i][j - 1] + 1;
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


// Write a C++ program to implement reverse Floyd's triangle. 
// Sample Output:10
//               9 8
//               7 6 5
//               4 3 2 1
#include <iostream>
using namespace std;
int main() {
    int n, num = 1;
    cout << "Enter the number of rows: ";
    cin >> n;
    float total =(n+1)/2.0 ;
    float sum=n*total;
    for (int i = 1; i <=n; i++) {
        for (int j = 1; j <=i; j++) {
            cout << sum--<< " ";
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    double n, notes;
    double mean = 0;
    double sumnotes = 0;

    cout << "deposit number of notes: ";
    cin >> n;

    if (n <= 0) {
        cout << "The number of notes must be greater than 0" << endl;
        return 0;
    }

    int i = 0;
    while (i < n) {
        cout << "deposit note " << i + 1 << ": ";
        cin >> notes;

        if (notes < 0) {
            cout << "Note must be a positive number." << endl;
            continue; 
        }

        sumnotes += notes;
        i++;
    }

    mean = sumnotes / n;
    cout << "The total sum of notes is: " << sumnotes << endl;
    cout << "The average is: " << mean << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, opcion;
    
    do {
        cout << "        INTERFACE        " << endl;
        cout << "1. two numbers sum" << endl;
        cout << "2. show multiplication table" << endl;
        cout << "3. exit" << endl;
        cout << "Select an option: "; 
        cin >> opcion;

        if (opcion == 1)
        {
            cout << "Select the first number: ";
            cin >> num1;
            cout << "Select the second number: ";
            cin >> num2;
            cout << "The sum is: " << num1 + num2 << endl;
        }
        else if (opcion == 2)
        {
            cout << "Select the number to display its multiplication table: ";
            cin >> num1;

            for (int i = 1; i <= 10; i++)
            {
                cout << num1 << " * " << i << " = " << num1 * i << endl;
            }
        }
        else if (opcion == 3)
        {
            cout << "Exiting the program" << endl;
        }
        else
        {
            cout << "Invalid option" << endl;
        }

    } while (opcion != 3);
    return 0;
}
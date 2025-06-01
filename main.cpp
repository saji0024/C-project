#include <iostream>
#include <limits> 
#include <windows.h>
using namespace std;

int main() {
    int number;
    int largest = numeric_limits<int>::min(); 
    int sum = 0;

    cout << "Enter some numbers(To end, enter a negative number.):" << endl;

    while (true) {
        cout << "numbers: ";
        cin >> number;
        {
        	system("color 9");
        	system("color A");
        	system("color B");
        	system("color C");
        	system("color D");
        	system("color E");
        	system("color F");
        	system("color 9");
        	system("color A");
        	system("color B");
        	system("color C");
        	system("color D");
        	system("color E");
        	system("color F");
        	system("color 9");
        	system("color A");
        	system("color B");
        	system("color C");
        	system("color D");
        	system("color E");
        	system("color F");
		}

        if (number < 0) { 
            break;
        }

        sum += number; 

        if (number > largest) { 
            largest = number;
        }
    }

    cout << "The largest number: " << largest << endl;
    cout << "Sum of numbers: " << sum << endl;

    return 0;
}

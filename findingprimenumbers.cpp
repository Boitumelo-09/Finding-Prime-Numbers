#include <iostream>
#include <cmath>
using namespace std;


bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

// Function to generate prime numbers up to a given limit
void generatePrimes(int limit) {
    cout << "Prime numbers up to " << limit << ": ";
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    system("cls");
    int choice, num;
    cout << "Prime Number Program\n";
    cout << "1. Check if a number is prime\n";
    cout << "2. Generate prime numbers up to a limit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter a number: ";
        cin >> num;
        if (isPrime(num))
            cout << num << " is a prime number." << endl;
        else
            cout << num << " is not a prime number." << endl;
    } else if (choice == 2) {
        cout << "Enter the limit: ";
        cin >> num;
        generatePrimes(num);
    } else {
        cout << "Invalid choice!" << endl;
    }
    return 0;
}

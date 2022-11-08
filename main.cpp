#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "1. Restart\n2. Shut down\n3. Hibernate\nChoose : ";
    cin >> n;
    switch (n) {
        case 1: system("shutdown -r");
        case 2: system("shutdown -s");
        case 3: system("shutdown -h");
    }
    return 0;
}


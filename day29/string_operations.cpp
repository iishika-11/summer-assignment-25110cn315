#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    int choice;

    cout << "Enter string: ";
    cin.getline(str, 100);

    do {
        cout << "\n--- String Menu ---\n";
        cout << "1. Length\n2. Reverse\n3. Copy\n4. Compare\n5. Exit\n";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Length = " << strlen(str);
                break;

            case 2: {
                char rev[100];
                int len = strlen(str);
                for(int i = 0; i < len; i++)
                    rev[i] = str[len - i - 1];
                rev[len] = '\0';
                cout << "Reversed = " << rev;
                break;
            }

            case 3: {
                char copy[100];
                strcpy(copy, str);
                cout << "Copied string = " << copy;
                break;
            }

            case 4: {
                char str2[100];
                cout << "Enter another string: ";
                cin.ignore();
                cin.getline(str2, 100);

                if(strcmp(str, str2) == 0)
                    cout << "Strings are equal";
                else
                    cout << "Strings are not equal";
                break;
            }

            case 5: cout << "Exit"; break;
            default: cout << "Invalid choice";
        }

    } while(choice != 5);

    return 0;
}
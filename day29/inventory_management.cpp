#include <iostream>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
};

int main() {
    Item items[100];
    int n = 0, choice;

    do {
        cout << "\n--- Inventory Menu ---\n";
        cout << "1. Add Item\n2. Display Items\n3. Update Quantity\n4. Exit\n";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter ID, Name, Quantity: ";
                cin >> items[n].id >> items[n].name >> items[n].quantity;
                n++;
                break;

            case 2:
                for(int i = 0; i < n; i++) {
                    cout << items[i].id << " "
                         << items[i].name << " "
                         << items[i].quantity << endl;
                }
                break;

            case 3: {
                int id, found = 0;
                cout << "Enter ID to update: ";
                cin >> id;

                for(int i = 0; i < n; i++) {
                    if(items[i].id == id) {
                        cout << "Enter new quantity: ";
                        cin >> items[i].quantity;
                        found = 1;
                        break;
                    }
                }
                if(!found) cout << "Item not found";
                break;
            }

            case 4: cout << "Exit"; break;
            default: cout << "Invalid choice";
        }

    } while(choice != 4);

    return 0;
}
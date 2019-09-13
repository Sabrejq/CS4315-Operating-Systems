#include <iostream>
#include <climits>
#include "Inventory.h"
#include "list.h"
using namespace std;

int main() {

    int selection = 0 ;
    char exception = ' ';
    int input = 0, month = 0, year = 0;
    bool menu = true;
    Inventory part;
    list parts;


    while(menu){
        cout <<"------------------------------------------------------------------------------\n";
        cout << "1) Add a part to the inventory" << endl;
        cout << "2) Take part from the inventory" << endl;
        cout << "3) Exit menu" << endl;
        cin >> selection;
        cout <<"------------------------------------------------------------------------------\n";

        while (selection > 3 || selection < 1 || selection == exception) {

            try {
                cin.clear(); // clear input buffer to restore cin to a usable state
                cin.ignore(INT_MAX, '\n');
                throw "Enter an available option from menu: ";
            }

            catch (const char *message)
            {
            cerr << message ;
            cin >> selection;
            }
        }

        switch (selection) {

            case 1 :
                cout <<"Enter Serial number: ";
                cin >> input;
                part.setSerial(input);
                cout << "Enter lot number:";
                cin >> input;
                part.setLot(input);
                cout <<"Enter Manufacture date: "<< "\n";
                cout << "Enter day: ";
                cin >> input;
                cout << "Enter month: ";
                cin >> month;
                cout << "Enter year: ";
                cin >> year;
                part.setManufact(input,month, year);

                parts.createNode(part);
                parts.display();

                break;

            case 2 :
                    cout << "Enter Serial number of the part you want to take: ";
                    cin >> input;
                    parts.takePart(input);
                    parts.display();
                break;

            case 3 :
                cout <<"Exiting menu..." << endl;
                menu = false;
                break;


            default:
                break;
        }
    }


    return 0;
}
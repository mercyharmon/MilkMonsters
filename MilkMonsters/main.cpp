//==========================================================
//
// Title: Milk Monsters
// Author: Mercyllia Harmon
// Description:
// application that calculates and displays the cost of a customer’s milk purchase
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type

using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()

{
    
    // Declare variables
    int gallons;
    string code, type;
    double price, totalPrice;
    
    // Show application header
    cout << "Welcome to switch Statements" << endl;
    cout << "----------------------------" << endl << endl;
    
    // Initialize varibles
    cout << "Please input the number of gallons purchased: ";
    cin >> gallons;
    cout << "Please input the milk code (w-whole, t-2%, s-skim)";
    cin >> code;
    
    // Caculate total price
    
    if (code == "w") {
        type = "whole";
        price = 4;
    }
    else if (code == "t") {
        type = "2%";
        price = 3.5;
    }
    else {
        type = "skim";
        price = 3;
    }
    
    totalPrice = price * gallons;
    
    // Show inputs and outputs
    cout << "_______________________________" << endl << endl;
    cout << "Gallons: " << gallons << endl;
    cout << "Milk Type: " << type << endl;
    cout << "Milk Cost ($): " << fixed << setprecision(2) << totalPrice << "$" << endl;
    cout << "Purchase cost ($): " << setprecision(2) << totalPrice << "$" << endl;
    
    // Show application close
    cout << "\nEnd of Milk Monsters " << endl << endl;
    
    // Pause before application window closes
    cout << "Press any key to exit ..." << endl;
    return 0;
}

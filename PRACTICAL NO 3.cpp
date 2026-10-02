#include <iostream>  
#include <string> // for string class  

using namespace std;  

int main() {  
    cout << "\t\t\t\t Enter 10 Characters: ";  
    cout << "\n\t\t =============================== \n";  
    string op; // Use a string instead of a char array  
    for (int i = 0; i < 10; i++) {  
        cout << "\t\t";  
        char c = cin.get(); // Read a character, requires Enter key  
        op += c;           // Append to the string  
        cout << c << "\t\t\n\n";  
    }  

    cout << "\n\t\t The string you entered is: " << op << endl;  
    return 0;  
}  


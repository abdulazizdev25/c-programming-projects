
//LAB NO 4: WRITE A PROGRAM TO ADD,SUBTRACT,MUTIPLY AND DIVIDE TWO NUMBER USING ARITHMETIC OPERATION
#include <iostream>  

using namespace std;  

int main() {  
    cout << "\n\n\t\t      ADD, SUBTRACT, MULTIPLY AND DIVIDE TWO NUMBERS ARITHMETIC OPERATION \n";  
    cout << "\t\t ===============================================================================================\n\n";  

    int number1, number2, result; // Removed number3 as it wasn't used  
    
    cout << "\t\t\t\t Enter 1st Number : ";  
    cin >> number1;  
    
    cout << "\t\t\t\t Enter 2nd Number : ";  
    cin >> number2;  
    
    cout << "\n\n\t\t\t\t--------x--------------x---------x---------\n\n";  

    // Addition  
    result = number1 + number2;  
    cout << "\t\t\t\t The Result of Number1 + Number2 is " << result << "\n";  

    // Subtraction  
    result = number1 - number2;  
    cout << "\t\t\t\t The Result of Number1 - Number2 is " << result << "\n";  

    // Multiplication  
    result = number1 * number2;  
    cout << "\t\t\t\t The Result of Number1 * Number2 is " << result << "\n";  

    // Division  
    if (number2 != 0) {  // Added a check to prevent division by zero  
        result = number1 / number2;  
        cout << "\t\t\t\t The Result of Number1 / Number2 is " << result << "\n";  
    } else {  
        cout << "\t\t\t\t Cannot divide by zero!\n";  
    }  

    return 0;  
}  

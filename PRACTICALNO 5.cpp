//LAB NO 5: WRITE A PROGRAM TO COMPUTER THE TOTAL AND AVERAGE OF SIX NUMBERS
#include <iostream>
        using namespace std;
        
        int main()
        {
            cout << "\n\n\t\t\tCALCULATE THE TOTAL AND AVERAGE OF SIX NUMBERS\n";
            cout << "\t\t====================================================================\n\n";
        
            int number1, number2, number3, number4, number5, number6, total;
            float avg;
                    cout << "\t\t\tEnter 1st number : ";
            cin >> number1;
            cout << "\t\t\tEnter 2nd number : ";
            cin >> number2;
            cout << "\t\t\tEnter 3rd number : ";
            cin >> number3;
            cout << "\t\t\tEnter 4th number : ";
            cin >> number4;
            cout << "\t\t\tEnter 5th number : ";
            cin >> number5;
            cout << "\t\t\tEnter 6th number : ";
            cin >> number6;
        
            cout << "\n\t\t--------------------------------------------------------------------\n\n";
        
            total = number1 + number2 + number3 + number4 + number5 + number6;
            avg = total / 6.0;
        
            cout << "\t\t\tThe Total is equal : " << total << "\n";
            cout << "\t\t\tThe Average is equal : " << avg << "\n\n";
                 return 0;        }


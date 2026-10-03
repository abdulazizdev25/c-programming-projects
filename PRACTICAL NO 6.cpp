//LAB NO 6: WRITE A PROGRAM TO CHECK WHETHER A NUMBWE IS POSITIVE OR NEGATIVE OR ZERO
#include <iostream>
            using namespace std;
            
            int main()
            {
                int number;
                cout << "\n\n\t\t\tCHECK WHETHER A NUMBER IS POSITIVE, NEGATIVE OR ZERO \n";
                cout << "\t\t\t=======================================\n";
                cout << "\n\n\t\t\t\t\tEnter a number : ";
                cin >> number;
                if (number > 0)
                {
                    cout << "\n\n\t\t\t\t\tThe number is Positive.";
                }
                else if (number < 0)
                {
                    cout << "\n\n\t\t\t\t\tThe number is Negative.\n\n";
                }
                else
                {
                    cout << "\n\n\t\t\t\t\tThe number is Zero.\n\n";
               }    
               return 0;
              }


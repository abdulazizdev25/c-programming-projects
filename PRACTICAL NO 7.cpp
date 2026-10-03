//LAB NO 7: WRITE A PROGRAM TO FIND THE AREA OF RECTANGLE
#include <iostream>
                using namespace std;
                
                int main()
                {
                    int length, width, area;
                    cout << "\n\n\t\t\t CALCULATE THE AREA OF RECTANGLE \n";
                    cout << "\t\t\t===================================\n";
                    cout << "\n\n\t\t\t\t Enter the length : ";
                    cin >> length;
                    cout << "\t\t\t\t Enter the width : ";
                    cin >> width;
                    area = length * width;
                    cout << "\n\n\t\t\t The Area of a Rectangle is : " << area << "\n\n\n";
                    return 0;

                }


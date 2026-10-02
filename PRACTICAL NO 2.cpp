
//LAB NO 2: WRITE A PROGRAM TO CALCULATE TOTAL , PERCENTAGE AND GRADES

#include <iostream>
using namespace std;

int main() {
    cout << "\n\n\t\t\t\t       CALCULATE TOTAL, PERCENTAGE AND GRADES \n";
    cout << "\t\t ==================================================================== \n\n";
    
    int math, english, urdu, computer, science, total;
    float percentage;
    
    cout << " \t\t\t\t Enter Marks for Maths : ";
    cin >> math;
    cout << " \t\t\t\t Enter Marks for English : ";
    cin >> english;
    cout << " \t\t\t\t Enter Marks for Urdu : ";
    cin >> urdu;
    cout << " \t\t\t\t Enter Marks for Computer : ";
    cin >> computer;
    cout << " \t\t\t\t Enter Marks for Science : ";
    cin >> science;
    
    cout << "\n\n\t\t\t\t--------x--------------x---------x---------\n\n";
    cout << "\t\t\t\t ( Note: Each Subject Carries 100 marks )\n\n";
    
    total = math + english + urdu + computer + science;
    cout << "\t\t\t\t The Total is equal : " << total << "\n\n";
    
    percentage = (total * 100.0) / 500;
    cout << "\t\t\t\t The Percentage is equal : " << percentage << "%\n\n";
    
    if (percentage >= 33 && percentage <= 40) {
        cout << "\t\t\t\t The Grade is equal to E \n\n\n";
    } else if (percentage >= 41 && percentage <= 50) {
        cout << "\t\t\t\t The Grade is equal to D \n\n\n";
    } else if (percentage >= 51 && percentage <= 60) {
        cout << "\t\t\t\t The Grade is equal to C \n\n\n";
    } else if (percentage >= 61 && percentage <= 70) {
        cout << "\t\t\t\t The Grade is equal to B \n\n\n";
    } else if (percentage >= 71 && percentage <= 79) {
        cout << "\t\t\t\t The Grade is equal to A \n\n\n";
    } else if (percentage >= 80 && percentage <= 100) {
        cout << "\t\t\t\t The Grade is equal to A1 \n\n\n";
    } else {
        cout << "\t\t\t\t Out of Range \n\n\n";
    }
    
    return 0;
}

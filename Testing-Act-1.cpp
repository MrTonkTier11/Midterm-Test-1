#include <iostream>
#include <cctype> 
#include <unistd.h>

using namespace std;

void maritalStatus_Salary() {
    char maritalAns;
    double salary;
    double taxed_salary;
    string SINGLE = "Marital Status is SINGLE. \n";
    string MARRIED = "Marital Status is MARRIED. \n";
    do {
        cout << "Please enter your marital status (S-single, M-married): ";
        cin >> maritalAns;
        maritalAns = tolower(maritalAns);

        //decisions
        if (maritalAns == 's') {
            do {
                cout << "Please enter your salary (must be non-negative integer!): ";
                cin >> salary;

                if (salary >= 0) {
                    if (salary > 100000) {
                        taxed_salary = 0.3 * salary;
                        cout << SINGLE;
                        cout << "Your salary is " << salary << endl;
                        cout << "Your tax rate is 30%! \n";
                        cout << "Your computed salary with tax is: " << taxed_salary << endl;
                    } else if (salary <= 100000 && salary >= 50000) {
                        taxed_salary = 0.2 * salary;
                        cout << SINGLE;
                        cout << "Your salary is " << salary << endl;
                        cout << "Your tax rate is 20%! \n";
                        cout << "Your computed salary with tax is: " << taxed_salary << endl;
                    } else if (salary < 50000) {
                        taxed_salary = 0.1 * salary;
                        cout << SINGLE;
                        cout << "Your salary is " << salary << endl;
                        cout << "Your tax rate is 10%! \n";
                        cout << "Your computed salary with tax is: " << taxed_salary << endl;
                    }
                    break; // Exit the outer loop if salary is non-negative
                } else {
                    cout << "ERROR! MUST BE NON-NEGATIVE VALUE! \n";
                }
            } while (true); // Loop until a non-negative salary is entered
        } else if (maritalAns == 'm') {
            // Input salary for married status (similar to single status)
            do {
                cout << "Please enter your salary (must be non-negative integer!): ";
                cin >> salary;

                if (salary >= 0) {
                    if (salary > 100000) {
                        taxed_salary = 0.25 * salary;
                        cout << SINGLE;
                        cout << "Your salary is " << salary << endl;
                        cout << "Your tax rate is 25%! \n";
                        cout << "Your computed salary with tax is: " << taxed_salary << endl;
                    } else if (salary <= 100000 && salary >= 50000) {
                        taxed_salary = 0.15 * salary;
                        cout << SINGLE;
                        cout << "Your salary is " << salary << endl;
                        cout << "Your tax rate is 15%! \n";
                        cout << "Your computed salary with tax is: " << taxed_salary << endl;
                    } else if (salary < 50000) {
                        taxed_salary = 0.05 * salary;
                        cout << SINGLE;
                        cout << "Your salary is " << salary << endl;
                        cout << "Your tax rate is 5%! \n";
                        cout << "Your computed salary with tax is: " << taxed_salary << endl;
                    }
                    break; // Exit the outer loop if salary is non-negative
                } else {
                    cout << "ERROR! MUST BE NON-NEGATIVE VALUE! \n";
                }
            } while (true); // Loop until a non-negative salary is entered
        }else{
            cout << "ERROR! INVALID MARITAL STATUS (MUST BE M OR S ONLY!) \n";
        }

    } while (maritalAns != 's' && maritalAns != 'm'); // Loop until a valid marital status is entered
}

int main() {
    char newEntry;
    do{
        maritalStatus_Salary();
        cout << "Would you like to input a new entry? (y/n): ";
        cin >> newEntry;
        newEntry = tolower(newEntry);
        if (newEntry == 'n'){
            cout << "Closing in 5 seconds... \n";
            sleep(5);
            break;
        }
    } while (newEntry == 'y');
    return 0;
}
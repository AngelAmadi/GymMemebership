#include<iostream> // using input and out stream (cin,cout)
#include "Registration.h" // included a header file
using namespace std;//computer needs to know the code for the cout ,cin ( reduce bogus code)
int main() {
    while (true) {//looping so that i can return to loop each time a choice has been executed
        int choice; //declaring the users choice
        cout << "*******************************************************************\n\n\n";
        cout << "\t\t               Welcome to ANGEL'S GYM                      \n\n\n";
        cout << "*******************************************************************\n\n";
        cout << "----------------------------------------------------------------------------------------------------------------\n\n";
        cout << "This is one of the most helpful and affordable gyms that you can find. \n"
                "With any deal you choose to have, you're provided the full workout planner as well as a meal planner for the week\n";
        cout << "----------------------------------------------------------------------------------------------------------------\n\n";
        cout << "__ What would you like to do today? __\n";
        cout << "1.Login into account" << endl;
        cout << "2.Register an account" << endl;
        cout << "3.Forgot password" << endl;
        cout << "0.Exit" << endl;
        cout << "\nEnter HERE: ";
        cin >> choice;
        cout << endl;
        switch (choice) {  // A switch statement provides a means of checking an expression against various cases.
            case 1:
                login(); // if 1, go to login
                break;
            case 2:
                signUP(); // if 2, go to sign up
                break;
            case 3:
                forgot_password(); // if 3, go to forgot password
                break;
            case 0:
                return 0; // to exit, return 0 - end program
            default:
                cout << " Select a valid option \n" << endl;
                return 0;//default is executed when no case matches,return 0 - end program
        }
    }
}
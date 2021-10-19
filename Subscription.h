#include <iostream> // using input and out stream (cin,cout)
#include <fstream> // using input and out file stream
using namespace std;//computer needs to know the code for the cout ,cin ( reduce bogus code)
void sub (){ // declare sub without return a value
    int yourpick, ACNO; // declare input as integer
    string addy, name; // declare input as string (in case of number and letter)
    cout << "\n\n\t\t\t\t---------Subscription-------\n"<<endl;
    cout << "We have five main workout plans which include: whole body toning, abs building, muscle building, weight loss and weight gain\n";
    cout << "All of these plans have the same price\n" "Change your mind ? \t Access another workout plan still at the same price\n";
    cout <<  " [1] A month = £50 \n [2] 3 months =£100 \n"
             " [3] 6 months =£200 \n [4] 12 months =£250 \n " << endl;
    cout << "Which package would you like (1-4): ";
    cin >> yourpick ;

    if (yourpick==1){ // looping if 1
        cout << "subscription is £50" << endl;
        cout << "tax is " << (50*0.0675) << endl; // increase price due tax by 6.75 percent
        cout << "total is " << (50+(50*0.0675)) << endl;
        cout << "Enter account number: ";
        cin >> ACNO;
        while (!(cin >> ACNO))
        {
            cout << " wrong input! \nProvide a correct account number: ";
            // Clear input stream
            cin.clear();
            // Discard previous input
            cin.ignore(123, '\n');
        }
        cin.ignore();
        cout << "Name on card ~ (and enter): ";
        getline(cin, name); //get user input as full line of string
        cin.ignore(); //ignore  whitespace ignore
        cout << "Type in your address ~ (and enter): ";
        getline(cin, addy); //get user input as full line of string
        ofstream sum; //name it different so that i can write into
        sum.open("base.txt", ios::out);//user input to store receipt in file and ios::out to delete each time cos it is a receipt
        sum<<"Account Number: "<<ACNO<<endl;
        sum<<"Name on card: "<<name<< endl; // new line
        sum<<"Address: "<<addy<<endl; // new line
        cout<<"\nPayment Successful \n";
        sum.close();
    }
    else if (yourpick==2){
        cout << "subscription is £100" << endl;
        cout << "tax is " << (100*0.0675) << endl; // increase price due tax by 6.75 percent
        cout << "total is " << (100+(100*0.0675)) << endl;
        cout << "Enter account number: ";
        cin >> ACNO;
        while (!(cin >> ACNO))
        {
            cout << " wrong input! \nProvide a correct account number: ";
            // Clear input stream
            cin.clear();
            // Discard previous input
            cin.ignore(123, '\n');
        }
        cin.ignore();
        cout << "Name on card ~ (and enter): ";
        getline(cin, name); //get user input as full line of string
        cin.ignore(); //ignore  whitespace ignore
        cout << "Type in your address ~ (and enter): ";
        getline(cin, addy); //get user input as full line of string
        ofstream sum; //name it different so that i can write into
        sum.open("base.txt", ios::out);//user input to store receipt in file and ios::out to delete each time cos it is a receipt
        sum<<"Account Number: "<<ACNO<<endl;
        sum<<"Name on card: "<<name<< endl; // new line
        sum<<"Address: "<<addy<<endl; // new line
        cout<<"\nPayment Successful \n";
        sum.close();
    }
    else if (yourpick==3){
        cout << "subscription is £200" << endl;
        cout << "tax is " << (200*0.0675) << endl; // increase price due tax by 6.75 percent
        cout << "total is " << (200+(200*0.0675)) << endl;
        cout << "Enter account number: ";
        cin >> ACNO;
        while (!(cin >> ACNO))
        {
            cout << " wrong input! \nProvide a correct account number: ";
            // Clear input stream
            cin.clear();
            // Discard previous input
            cin.ignore(123, '\n');
        }
        cin.ignore();
        cout << "Name on card ~ (and enter): ";
        getline(cin, name); //get user input as full line of string
        cin.ignore(); //ignore  whitespace ignore
        cout << "Type in your address ~ (and enter): ";
        getline(cin, addy); //get user input as full line of string
        ofstream sum; //name it different so that i can write into
        sum.open("base.txt", ios::out);//user input to store receipt in file and ios::out to delete each time cos it is a receipt
        sum<<"Account Number: "<<ACNO<<endl;
        sum<<"Name on card: "<<name<< endl; // new line
        sum<<"Address: "<<addy<<endl; // new line
        cout<<"\nPayment Successful \n";
        sum.close();
    }
    else if (yourpick==4){
        cout << "subscription is £250" << endl;
        cout << "tax is " << (250*0.0675) << endl; // increase price due tax by 6.75 percent
        cout << "total is " << (250+(250*0.0675)) << endl;
        cout << "Enter account number: ";
        cin >> ACNO;
        while (!(cin >> ACNO))
        {
            cout << " wrong input! \nProvide a correct account number: ";
            // Clear input stream
            cin.clear();
            // Discard previous input
            cin.ignore(123, '\n');
        }
        cin.ignore();//ignore  whitespace ignore
        cout << "Name on card ~ (and enter): ";
        getline(cin, name); //get user input as full line of string
        cin.ignore(); //ignore  whitespace ignore
        cout << "Type in your address ~ (and enter): ";
        getline(cin, addy); //get user input as full line of string
        ofstream sum; //name it different so that i can write into
        sum.open("base.txt", ios::out);//user input to store receipt in file and ios::out to delete each time cos it is a receipt
        sum<<"Account Number: "<<ACNO<<endl;
        sum<<"Name on card: "<<name<< endl; // new line
        sum<<"Address: "<<addy<<endl; // new line
        cout<<"\nPayment Successful \n";
        sum.close();
    }else {
        cout << "Wrong Entry!" <<endl;
    }
    cout<<"Log in now to access the amazing packages, GOOD LUCK!\n"; }
    //returns int main regardless as a void function
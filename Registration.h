#include<iostream> // using input and out stream (cin,cout)
#include<fstream> // using input and out file stream
#include <sstream> // using string stream
#include "Subscription.h" // included a header file
#include "Diet.h" // included a header file
using namespace std; //computer needs to know the code for the cout ,cin ( reduce bogus code)
void login() // declare login without return a value
{
    string username,password; //declaring user input as string
    cout<<"Please enter the following details"<<endl;
    cout<<"USERNAME :";
    cin>>username;
    cout<<"PASSWORD :";
    cin>>password;
    string usernamepassword; //declaring a function for the line as it is in the file
    usernamepassword = username + " " + password; // the line in the file is in this format

    fstream database_file("database.txt", ios::in); // ios::in- read from file , creates file
    string line; //declaring file a string
    if(database_file.is_open()) {
        while (!database_file.eof()) { //read everything in the file
            getline(database_file, line); //read the next line (using the while loop)
            if (line == usernamepassword) { // if the line is the same  as the line in the file
                for (size_t j=0; j< username.length(); ++j) // size initialized to 0, the username length is bigger
                {
                    username[j] = toupper(username[j]);// make uppercase
                }
                cout << " Welcome back " <<  username << ", Nice to see you again. " << endl;//show this
                database_file.close(); //and close
                return diet(); // breaks back into diet menu , it will break if line found
            }
        }
        cout << " Please check your log in details and try again "<< endl;//if line not found then breaks into int main
    }
    else{
        cout << "The file you are looking for does not exist"<< endl; //error message in case of error in file opening
    }
    database_file.close(); //close file
}
void signUP() { // declare sign up without return a value
    string reguser, regpass, username, password; //declaring user input as string + temporary input
    cout << "Enter the username :";
    cin >> reguser;
    cout << "Enter the password :";
    cin >> regpass;
    ifstream file("database.txt", ios::in); // ios::in- read from file , creates file
    string line; //declaring line a string
    if (file.is_open()) {
        while (!file.eof()) { //read everything
            while (getline(file, line)) { //store each line of the file to function called line
                stringstream ss(line); //converts line to string using string stream (allows breaking of line using delimiter (' '))
                getline(ss, username, ' '); //gets line and store the username like the line in file ,
                getline(ss, password, ' '); //gets password and stores the password
                if (reguser == username) { //if the new registering username is the same as a username already in file
                    cout << "Sorry this username is use, Please use another username \n" << endl; //print this
                    return;} // returns to int main options
            }
        }file.close(); //close file
    }
    // When reg and pass is entered, it goes through loop above, so if reguser ==!username, below is executed
    ofstream filee;
    filee.open("database.txt", ios::app);//use the user input to append to end of file
    filee<<reguser<<' '<<regpass<<endl; //enter the user input into file separated by a delimiter
    cout<<"Registration Successful \n"; //success message
    filee.close(); //close file
    return sub(); // I want user to subscribe everytime they sign up, so it takes them straight there.
}
void  forgot_password(){
    string finduser, search_UP_user, search_UP_pass; //declaring user input as string + temporary input
    cout << "Enter your username : ";
    cin >> finduser;
    ifstream file2("database.txt", ios::in); // ios::in- read from file , creates file
    string line2; //declaring line a string
    if (file2.is_open()) {
        while (!file2.eof()) { //read everything
            while (getline(file2, line2)) { //store each line of the file to function called line
                stringstream ss(line2); //converts line to string using string stream (allows breaking of line using delimiter (' '))
                getline(ss, search_UP_user, ' '); //gets line and store the username like the line in file ,
                getline(ss, search_UP_pass, ' '); //gets password and stores the password
                if (finduser == search_UP_user) { //if user input match a username -loop-
                    cout << "Your password has been found!\nYour password is: "<< search_UP_pass << endl; //print this // tell them their pass
                    return;}
                // returns to int main options
            }
        }cout << "User not found\n\n"; //else user not found
        file2.close(); //close file
    }
}

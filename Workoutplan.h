#include<iostream> // using input and out stream (cin,cout)
using namespace std; //computer needs to know the code for the cout ,cin ( reduce bogus code)
class workout_plan { // defining class
public: //public members are accessible everywhere;
    //static- so you can access it without having an instance(obj) of the class,
    // so u can call void function directly from class using workout_plan::weightLoss() in cpp file
    static void weightLoss();
    static void weightGain();
    static void BodyTone();
    static void muscleBuild();
    static void AbWorkout();
};
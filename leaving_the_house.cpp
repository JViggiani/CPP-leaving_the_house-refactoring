#include <iostream>
using namespace std;

bool iHaveMyOysterCard = false;
bool iHaveMyWallet = false;
bool iHaveMyKeys = false;

void findMissingItem() {

	/*
	The break statements have been replaced with if statements in order to prevent the use of breaks. 
	The if statement is also faster than the switch. 
	*/

    static int i = 0;
    ++i;
	if (i == 1) {
		iHaveMyKeys = true;
		cout << "Now I have my keys" << endl;
	}
	else if (i == 2) {
		iHaveMyWallet = true;
		cout << "Now I have my wallet" << endl;
	}
	else if (i == 3) {
		iHaveMyOysterCard = true;
		cout << "Now I have my Oyster Card" << endl;
	}
}

void lockTheFrontDoor() {
    cout << "Front door is locked" << endl;
}

void goBackInsideTheHouse() {
    cout << "I am back inside the house" << endl;
}

void goOutsideTheHouse() {
    cout << "I am outside the house" << endl;
}

void walkToTheStation() {
    cout << "I am walking to the station" << endl;
}

int main()
{
	/*
	The while true has been removed, and replaced with a conditional whih checks each of the global bools.
	When all of the global bools are true, the while loop breaks and we have eveything we need. 
	The if else statement inside of the while is no longer needed. 
	*/
    while ( !iHaveMyKeys || !iHaveMyWallet || !iHaveMyOysterCard )
    {
    	goOutsideTheHouse();
        cin.get();
    	cout << "I am missing something" << endl;
        cin.get();
    	goBackInsideTheHouse();
        cin.get();
    	findMissingItem();
        cin.get();

    }

	cout << "I have everything I need" << endl;
	cin.get();
	lockTheFrontDoor();
	cin.get();
	walkToTheStation();
    return 0;
}



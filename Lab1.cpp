//============================================================================
// Name        : Lab1.cpp
// Author      : Aaron Baker
// Description : Lab for processing list
//============================================================================

#include<iostream> //including iostream
#include<fstream> //including fstream
#include<sstream> //including sstream

using namespace std; //using the strandard namespace for the file

//starting main function
int main() {
	string input; //creating variable input to hold a string
	double val1, val2, val3, val4; //creating four double to hold the values
    double count = 2; //setting count to two because we will add the first two before the
    					//counter starts
	std::cout << "Please Enter File Name: "; //showing information to the user
	cin >> input; //asking for user input, user input is being passed to the input string

	ifstream inFile(input); //opening file name held in the input string into an ifstream and the var is called inFile

	if(inFile.fail()) //checking to make sure that the user file was opened correctly
	{
		cout << "ERROR OPENING FILE" << "\n" << "Please check file and try again" << endl; //showing error opening to the user if the file was not opened correctly
		system( "read -n 1 -s -p \"Press any key to continue...\"" ); //waiting for user
	}

	inFile >> val1; //pushing the first value of the file in to double val1
	inFile >> val2;//pushing the second value of the file in to double val2


	//while the function has not reached the end of the file then add one to count, if it has reached the end of the file
	//then add one to count but also push the value in to double val4
	while (!inFile.eof() && inFile >> val4)
	{
		count++;
    }
	inFile.clear(); //clear the file location
	inFile.seekg(0, inFile.beg); //start at the beginning of the file

	for(int i=0; i<count-1; i++) //while i is less then the total count of the file minus 1 then add 1 to i and push the value to double val3 this will have the right value at the end
	{
		inFile >> val3;
	}

	//showing the user the values of the doubles and count of the file to the user.
	cout << "Val1: " << val1 << "\t" << "Val2: " << val2 << "\n" << "Val3: " << val3 << "\t\t" << "Val4: " << val4 << endl;
	cout << "Count: " << count << endl;

	system( "read -n 1 -s -p \"Press any key to end...\"" ); // waiting for the user to end the program
	cout << "Terminated" << endl; //shows user that it is ended
	return 0; // ends function
}

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	double num1; //An integer that the user will enter
	double num2; 
	int numForRadian = 180;
	double pi, radius, area, circum, diam; //declaring the numbers the user will enter for the radius, area, etc.
	pi = 3.141592653589793238462643383279502884197169399375; //defining PI
    string userInput; //A variable needed for input into the program
    float base, power, total; //declaring the numbers need for indexing
	float radian;
	int angle;
	double percentage;
    char mathOp; //char variable for math operators i.e "+", "*" etc
    float sum; //float variable for the total of the two numbers the user enters


    do{ //Do while loop to loop through the program
    cout << "Please choose a Calculation you want to do: \nAddition - 1 \nMultiplication - 2 \nSubtraction - 3 \nDivison - 4 \nPower - 5 \nSquare Root - 6 " << endl;
    cout << "Cirlce Calculations - 7 \nDegree to Radian - 8  \nPercentage - 9" << endl;
	cin >> userInput;


    if(userInput == "1") //if statement for addition if user enters 1
    {
        cout << "You chose Addition." << endl;
        cout << "Enter your calculation: " << endl;
        cin >> num1; //inputting integer
        cin >> mathOp;//inputting operator
        cin >> num2;

        switch(mathOp)
        {
            case '+' : sum = num1 + num2; //if user enters 4+3 it will add
            break;
        }

        cout << "= " << sum; //printing out the total of the numbers entered

    }else if(userInput == "2")//same as last one just multiplies
    {
        cout << "\t* - Multiply" << endl;
        cout << "You chose Multiplication." << endl;
            cout << "Enter your calculation: " << endl;
			cin >> num1;
            cin >> mathOp;
                cin >> num2;

        switch(mathOp)
        {
		case '*' : sum = num1 * num2;
            break;
        }

        cout << "= " << sum;
    }else if(userInput == "3")//subtract calculation
    {
        cout << "You chose Subtraction." << endl;
            cout << "Enter your calculation: " << endl;
			cin >> num1;
            cin >> mathOp;
			cin >> num2;											

        switch(mathOp)
        {
		case '-' : sum = num1 - num2;
            break;
        }

        cout << "= " << sum;
    }else if(userInput == "4")//division calculation
    {
        cout << "\t/ - Division" << endl;
        cout << "You chose Division." << endl;
            cout << "Enter your calculation: " << endl;
			cin >> num1;
            cin >> mathOp;
			cin >> num2;

        switch(mathOp)
        {
		case '/' : sum = num1 / num2;
            break;
        }

        cout << "= " << sum;


    }else if(userInput == "5")//power calculation
    {
        cout << "You chose to Index your number." << endl;
            cout << "Please enter your base number: ";
			cin >> base; //inputting the base number to index

        cout << "Please enter the power: ";
		cin >> power; //inputting the power

		total = pow(base, power); //calcualte the base and power e.g 5^3

		cout << base << " to the power of " << power << " = " << total << endl; //prints out the total


    }
    else if(userInput == "6")///sqaure root calculation
    {
        cout << "You chose Square root." << endl;
            cout << "Please enter the number you want to Sqaure Root: ";
			cin >> num1; //entering a number to sqrt

			cout << "The sqaure root of " << num1 << " = " << sqrt(num1) << endl; //simple code to sqaure root the number
	
	}else if(userInput == "7")//cirlce calculation
	{
		cout << "You chose Cirlce Calculations." << endl;
		cout << "\nWhat do you want to calcualte?" << endl;
		cout << "Area - 1" << endl;
		cout << "Circumfrence - 2" << endl;
		cin >> userInput;
		
			if(userInput == "1")//if user enters 1 it will go to the area calculation
			{
			cout << "Please input value of radius for the area: " << endl;
				cin >> radius;//inputting radius
					area = pi * (radius*radius); //calculating area e.g Pi*r^2
			cout << "The area of the cirlce is " << area << endl;//outputting area
			}
				else if(userInput == "2")//if user enters 2 it will calcualte circumfrence 
				{
				cout << "Please input the diameter of the cirlce for the circumfrence: " << endl;
					cin >> diam;//inputting diameter
						circum = pi * diam;//calculating circumfrence e.g Pi*d
				cout << "The circumfrence is " << circum;//outputting cirumfrence
				}
	}else if(userInput == "8")
	{
		cout << "You chose to convert degrees to radians." << endl;
			cout << "Enter your angle: " << endl;
		cin >> angle;
		radian = (pi / numForRadian) * angle;

		cout << angle << " degrees in radian is " << radian;

	}
	else if (userInput == "9")
	{
		cout << "You chose Percentage." << endl;
			cout << "Enter your calculation: " << endl;
		cin >> num1;
			cin	>> mathOp;
				cin >> num2;
		switch(mathOp)
		{
		case '/' : percentage = num1 / num2 * 100;
			break;
		default:
			cout << "Error - Invalid Input!";
		}

		cout << "= " << percentage << endl;

	}

    cout << "\nWould you like to do another operation? (y/n)" << endl;
    cin >> userInput;

    }while(userInput == "y");//if user enters "y" it will loop the program again

}
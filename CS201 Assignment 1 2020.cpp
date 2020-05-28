// CS201 Assignment 1 2020.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{

	//Dispalying menu
    cout << "\n  ****** SALARY CALCULATOR ****** \n " << endl;
	cout << "\n  ******************************* \n " << endl;
	cout << "\n  ****** ENTER 1 FOR SPS6 ******* \n " << endl;
	cout << "\n  ****** ENTER 2 FOR SPS7 ******* \n " << endl;
	cout << "\n  ****** ENTER 3 FOR SPS8 ******* \n " << endl;	
	cout << "\n  ****** ENTER 4 FOR SPS9 ******* \n " << endl;
	cout << " Select the pay scale form menu:  ";

	int input;

	cin >> input;
	int initialScale, Increment, updateScale, taxDeducted, netPay, textDeduct;

	/*
	if (input == 1)
	{
			initialScale = 40000;
			Increment   = 40000*20/100;
			updateScale  = initialScale + Increment ;
			taxDeducted   = updateScale * 3/100;
			netPay      = initialScale + Increment - taxDeducted;
			cout << " Initial Salary   :  " << initialScale << endl;
			cout << " Increment Amount :  " << Increment << endl;
			cout << " Update Salary    :  " << updateScale << endl;
			cout << " Tex Deduction    :  " << taxDeducted << endl;
			cout << " Net Pay          :  " <<  netPay << endl;
	}
	else if (input == 2)
	{
		initialScale = 60000;
			Increment   = 60000*15/100;
			updateScale  = initialScale + Increment ;
			taxDeducted   = updateScale * 3/100;
			netPay      = initialScale + Increment - taxDeducted;
			cout << " Initial Salary   :  " << initialScale << endl;
			cout << " Increment Amount :  " << Increment << endl;
			cout << " Update Salary    :  " << updateScale << endl;
			cout << " Tex Deduction    :  " << taxDeducted << endl;
			cout << " Net Pay          :  " <<  netPay << endl;
	}
	else if (input == 3)
	{
		initialScale = 80000;
			Increment   = 80000*10/100;
			updateScale  = initialScale + Increment ;
			taxDeducted   = updateScale * 3/100;
			netPay      = initialScale + Increment - taxDeducted;
			cout << " Initial Salary   :  " << initialScale << endl;
			cout << " Increment Amount :  " << Increment << endl;
			cout << " Update Salary    :  " << updateScale << endl;
			cout << " Tex Deduction    :  " << taxDeducted << endl;
			cout << " Net Pay          :  " <<  netPay << endl;
	}
	else if (input == 4)
	{
		initialScale = 100000;
			Increment   = 100000*5/100;
			updateScale  = initialScale + Increment ;
			taxDeducted   = updateScale * 3/100;
			netPay      = initialScale + Increment - taxDeducted;
			cout << " Initial Salary   :  " << initialScale << endl;
			cout << " Increment Amount :  " << Increment << endl;
			cout << " Update Salary    :  " << updateScale << endl;
			cout << " Tex Deduction    :  " << taxDeducted << endl;
			cout << " Net Pay          :  " <<  netPay << endl;
	
	}
	else
	{
		cout << "Invalid Input Try Again. " << endl;
	}
	*/

	
	switch (input)
	{
	case 1:
		initialScale = 40000;
			Increment   = 40000*20/100;
			updateScale  = initialScale + Increment ;
			taxDeducted   = updateScale * 3/100;
			netPay      = initialScale + Increment - taxDeducted;
			cout << " Initial Salary   :  " << initialScale << endl;  
			cout << " Increment Amount :  " << Increment << endl;
			cout << " Update Salary    :  " << updateScale << endl;
			cout << " Tex Deduction    :  " << taxDeducted << endl;
			cout << " Net Pay          :  " <<  netPay << endl;
		break;

	case 2:
		initialScale = 60000;
			Increment   = 60000*15/100;
			updateScale  = initialScale + Increment ;
			taxDeducted   = updateScale * 3/100;
			netPay      = initialScale + Increment - taxDeducted;
			cout << " Initial Salary   :  " << initialScale << endl;
			cout << " Increment Amount :  " << Increment << endl;
			cout << " Update Salary    :  " << updateScale << endl;
			cout << " Tex Deduction    :  " << taxDeducted << endl;
			cout << " Net Pay          :  " <<  netPay << endl;
		break;

	case 3:
		initialScale = 80000;
			Increment   = 80000*10/100;
			updateScale  = initialScale + Increment ;
			taxDeducted   = updateScale * 3/100;
			netPay      = initialScale + Increment - taxDeducted;
			cout << " Initial Salary   :  " << initialScale << endl;
			cout << " Increment Amount :  " << Increment << endl;
			cout << " Update Salary    :  " << updateScale << endl;
			cout << " Tex Deduction    :  " << taxDeducted << endl;
			cout << " Net Pay          :  " <<  netPay << endl;
		break;

	case 4:
		initialScale = 100000;
			Increment   = 100000*5/100;
			updateScale  = initialScale + Increment ;
			taxDeducted   = updateScale * 3/100;
			netPay      = initialScale + Increment - taxDeducted;
			cout << " Initial Salary   :  " << initialScale << endl;
			cout << " Increment Amount :  " << Increment << endl;
			cout << " Update Salary    :  " << updateScale << endl;
			cout << " Tex Deduction    :  " << taxDeducted << endl;
			cout << " Net Pay          :  " <<  netPay << endl;
		break;

	default:
		cout <<  "Invalid Input Try Again. " << endl;
	}


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

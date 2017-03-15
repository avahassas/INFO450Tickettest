#include "stdafx.h"
#include "Ticket.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	char input;

	do
	{
		cout << "Open new ticket? Enter Y to continue" << endl;
		cin >> input;
		input = toupper(input);

		if(input =='Y')
		{
			cout << "What is the name of the caller" << endl;
			cout << "Issue Type? S=Server, A=Applicaiton C=Access" << endl; 
			cout << "What is the description of the issue?" << endl;
			cout << "How many user impacted" << endl;
			cout << "Your issue ID is" << endl;
		}
		
		if (input =='N')
		{
			cout << "Issue Summary by type and priority" << endl << endl; 
			cout << "    Server App Access" << endl; 
			cout << "Low" << endl;
			cout << "Med" << endl;
			cout << "High" << endl;
			cout << "_________________________" << endl;
			cout << "Ticket Listing" << endl; 
			cout << "_________________________" << endl;
			cout << "Ticket Id: " << endl;
			cout << "Status: " << endl; 
			cout << "Description: " << endl; 
			cout << "User: " << endl;
			cout << "Users Impacted: " << endl;
			cout << "Priority: " << endl; 
			system("pause");
			break;
		}
		
		if (input != ' Y' && input != 'N')
		{
			cout << "Please only enter Y or N" << endl;
		}
		
	} while (!isdigit(input));

	return 0;
}


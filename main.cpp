// interacts with user
//add, view and del objects

#include <iostream>
#include <string>
#include "DbFunctions.h"
#include "Electronics.h"


using namespace std;

int main()
{
//	getMetadata();

	string cmd, tbl;
	cout << "\t\t\t DB++\n\t\t\t======\n\n\tpress 'h' for help";
	do
	{
		cout << "\n===========================================================\n\t\tENTER COMMAND : ";
		cin >> cmd;
		
		if (cmd[0] == 'h')
		{
			cout << "\n\t\t HELP :\n\t TABLES : Mobile, Tablet, Laptop";
			cout << "\n\t COMMANDS : add, view, del, exit, meta";
			cout << "\n\t eg1: ADD MOBLIE";
			cout << "\n\t eg2: VIEW TABLET";
			cout << "\n\t eg3: DEL row 3 from LAPTOP";
			continue;
		}
	
		if (cmd.compare ("add") == 0)
		{
			cout << "\t\t  ENTER TABLE : ";
			cin >> tbl;
			if (tbl[0] == 'M' || tbl[0] == 'm')		MobilePhone();
			if (tbl[0] == 'T' || tbl[0] == 't')		Tablet();
			if (tbl[0] == 'L' || tbl[0] == 'l')		Laptop();
		}
	
		if (cmd.compare ("view") == 0)
		{
			cout << "\t\t ENTER TABLE : ";
			cin >> tbl;
			tbl.append (".txt");
			view (tbl);
		}
	
		if (cmd.compare ("del") == 0)
		{
			cout << "\t\t ENTER TABLE : ";
			cin >> tbl;
			tbl.append (".txt");
			int row;
			cout << "\t\t ENTER ROW NO: ";
			cin >> row;
			del (tbl, row);
		}

		if (cmd.compare ("meta") == 0) 
		{
			getMetadata(true);
		}

	}while (cmd.compare ("exit") != 0);
	cout << "EXITING\n";
	return 0;
}
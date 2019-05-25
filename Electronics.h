#include <iostream>
#include <string>
#include "DbFunctions.h"

#ifndef elec
#define elec

using namespace std;

class BasicEelectronics
{
	public:
	int screen_size;
	int price;
	int battery;

	BasicEelectronics()
	{
		cout << "\n\t\t ENTER DETAILS : ";
		cout << "\n\t screen size : ";
		cin >> screen_size; 
		cout << "\t price : ";
		cin >> price;
		cout << "\t battery : ";
		cin >> battery;
	}

	string basicToString()
	{
		string s = to_string (screen_size);
		s = s.append ("\t|");
		s = s.append (to_string (price));
		s = s.append ("\t|");
		s = s.append (to_string (battery));
		return s;
	}

   	string toString();
};

class MobilePhone : public BasicEelectronics
{
	public:
	int camera_resolution;

	MobilePhone()
	{
		cout << "\t camera resolution : ";
		cin >> camera_resolution;

		string line = toString();
		if (add (line, "Mobile.txt"))
			cout << "\n\t\t DATA SAVED SUCCESSFULLY.\n";
		else
			cout << "\n\t\t ERROR IN SAVING DATA";
	}

	string toString()
	{
		string s = basicToString();
		s = s.append ("\t|");
		s = s.append (to_string (camera_resolution));
		return s;
	}
};

class Tablet : public MobilePhone
{
	public:
	string processor; 

	Tablet()
	{
		cout << "\t processor : ";
		cin >> processor;

		string line = toString();
		if (add (line, "Tablet.txt"))
			cout << "\n\t\t DATA SAVED SUCCESSFULLY.\n";
		else
			cout << "\n\t\t ERROR IN SAVING DATA";
	}

	string toString()
	{
		string s = basicToString();
		s = s.append ("\t|");
		s = s.append (to_string (camera_resolution));
		s = s.append ("\t|");
		s = s.append (processor);
		return s;
	}
};

class Laptop : public BasicEelectronics
{
	public:
	string processor, graphic_card;

	Laptop()
	{
		cout << "\t processor : ";
		cin >> processor;
		cout << "\t graphic card : ";
		cin >> graphic_card;

		string line = toString();
		if (add (line, "Laptop.txt"))
			cout << "\n\t\t DATA SAVED SUCCESSFULLY.\n";
		else
			cout << "\n\t\t ERROR IN SAVING DATA";
	}

	string toString()
	{
		string s = basicToString();
		s = s.append ("\t|");
		s = s.append (processor);
		s = s.append ("\t|");
		s = s.append (graphic_card);	
		return s;
	}
};

#endif
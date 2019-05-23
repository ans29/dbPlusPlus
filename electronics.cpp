// classes as databases
/*	
	Electronics as base class 
	mob ph, tablet, (PS), laptop as derived class
*/

#include <iostream>
#include <string>

using namespace std;

class Eelectronics
{
	int screen_size;
	int price;
	int battery;

	string basicToString()
	{
		string s = to_string (screen_size);
		s = s.append (":");
		s = s.append (to_string (price));
		s = s.append (":");
		s = s.append (to_string (battery));
		return s;
	}

   	public:
		string toString();
};

class MobilePhone : public Eelectronics
{
	int camera_resolution;
	string toString()
	{
		string s = basicToString();
		s = s.append (":")
		s = s.append (to_string (camera_resolution));
		return s;
	}
};

class Tablet : public MobilePhone
{
	int processor; 
	string toString()
	{
		string s = basicToString();
		s = s.append (":")
		s = s.append (to_string (camera_resolution));
		s = s.append (":")
		s = s.append (to_string (processor));
		return s;
	}
};

class Laptop : public Eelectronics
{
	string processor, graphic_card;
	string toString()
	{
		string s = basicToString();
		s = s.append (":")
		s = s.append (processor);
		s = s.append (":")
		s = s.append (graphic_card);	
		return s;
	}
};
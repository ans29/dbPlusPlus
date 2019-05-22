// classes as databases
/*	
	Electronics as base class 
	mob ph, tablet, (PS), laptop as derived class
*/

#include <iostream>
#include <string>

class Eelectronics
{
	int screen_size;
	int price;
	int battery;
};

class MobilePhone : public Eelectronics
{

};

class Tablet : public MobilePhone
{

};

class Laptop : public Eelectronics
{

};

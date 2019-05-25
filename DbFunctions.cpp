// This code performs file handling
// Generalised way of writing and reading objects into database
// add, view and del objects

#include "DbFunctions.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
fstream  metaF, file;
static string chosenTable_metadata;

string getMetadata (bool flag)
{
	string line, full;
	metaF.open ("METADATA.txt", ios::out | ios::in);
	if (metaF.is_open())
  	{
    	while ( getline (metaF,line) )
    	{
    		if (flag == true)
      			cout << line << '\n';
      		else
      		{
				full.append (line);
				full.append ("$");
			}
    	}
    	metaF.close();
    	return full;
  	}
  	else
  	{
  		cout << " ERROR : unable to read METADATA.txt.. exiting";
  		exit(0);
  	}
  	return NULL;
}

bool add (string data, string tableName)
{
	ofstream fout;
	fout.open (tableName, ios::app);
	if (fout.is_open())
  	{
		fout << data << "\n";
		return true;
	}
	return false;
}

void view (string tableName)
{
	int start, end;
	if (tableName[0] == 'M')	{ start=0;	end=31;	}
	if (tableName[0] == 'T') 	{ start=32;	end=42;	}
	if (tableName[0] == 'L') 	{ start=75;	end=76;	}

	string metaLines = getMetadata (false);
	cout << metaLines.substr (start, end) << "\n";
	
	string line;
	ifstream fin;
	fin.open (tableName,ios::in);

	if (fin.is_open())
  	{
    	while ( getline (fin,line) )
      		cout << "| " << line << '\n';
    	fin.close();
  	}
  	else
  		cout << " ERROR : unable to read.\n";
}

bool del (string tableName, int row)
{

}
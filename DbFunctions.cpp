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

void getMetadata ()
{
	string line;
	metaF.open ("METADATA.txt", ios::out | ios::in);
	if (metaF.is_open())
  	{
    	while ( getline (metaF,line) )
    	{
      		cout << line << '\n';
    	}
    	metaF.close();
  	}
  	else
  	{
  		cout << " ERROR : unable to read METADATA.txt.. exiting";
  		exit(0);
  	}	
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

}

bool del (string tableName, int row)
{

}
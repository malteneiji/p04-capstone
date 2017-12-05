#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "find.h"
using namespace std;

void printinformation(string ,int , int [], int []);

int main()
{

	ifstream file;
	char filename[200];
	int i = 0;
	string filenames[10];
	bool success;
	int filenumber = 0;
	int words = 0;
	string fnm;
	findwords f1[10];
	string someword;
	string fname;
	int wordno[100];
	int lineno[100];
	cout <<"Welcome to Find , Enter the Filenames you want to search through and after done enter done or DONE" << endl;

	do
	{
	do 
	{
	cout <<"Enter File Name "<<i+1 << " :";
	cin >> filename;
	cin.ignore();
	file.open(filename);
	success = file.is_open();
	fname = filename;
	if((fname != "DONE") && (fname != "done"))
	{
	if(success == false )
	{
		cout <<"Cannot open " << filename << endl;
	}
	else 
	{
		f1[i].setFilename(filename);
		i++;



	}
	}
	}while(success == false);
	
	}while((fname != "DONE")&&(fname != "done"));
	filenumber = i;
	cout <<"Enter a word to Find - " ;
	cin >> someword;
	for(int j = 0;j<filenumber;j++)
	{
	fname = f1[j].getFilename() ;
	words =	f1[j].find(someword,lineno,wordno);
	printinformation(fname , words, lineno, wordno);
	}


	return 0 ;
}

void printinformation(string filename ,int words, int lineno[100], int wordno[100])
{
cout <<"In File	"<< filename << endl;
if(words > 0)
{
cout <<"Found the word "<<words<< " times" << endl;
for(int i = 0;i<words;i++)
{
cout <<"Found word in line "<< lineno[i] << " word "<< wordno[i] <<endl;

}

}

}


#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
class findwords
{
	public:
	
		void setFilename(char filen[200])
		{
			
			for(int i = 0;i<200;i++)
			{
			filename[i] = filen[i];
			}
		}
			
		string getFilename()
		{

			return filename;
		}
		int find(string word , int (&lineno)[100] , int (&wordno) [100]);
	private:
		char filename[200];
		int fileno;
	

};


void printinformation(string filename ,int words, int lineno[100], int wordno[100]);

int main()
{

	ifstream file;
	char filename[200];
	char contents[200];

	int i = 0;
	string filenames[10];
	string line;

	string word;
	string chosenword;
	bool success;
	int filenumber = 0;
	int words = 0;
	string fnm;
	findwords f1[10];
	string someword;
	string fname;
	int wordno[100];
	int lineno[100];
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
int findwords::find(string word , int (&lineno)[100] , int (&wordno) [100])
                {
                ifstream file;
                string words;
                string wordin;
                string line;
                string lastline;
                stringstream ss;
                int wordcount = 0;
                int linecount = 0;
                char c[50];
                int spaces = 0;
                char fname[200];
                int j = 0;
                int k = 0;
                file.open(filename);

                line = "";

		while(file.good())
		{
                getline(file,line);
		j++;
                ss << line;
                while(!ss.eof())
                {
                ss >> wordin;
        	k++;   
		if(ss.fail())
		{
		k--;
//		cout << "Failed" << endl;
		}
		else if(!ss.fail())
		{	
		if(word == wordin)
		{
			lineno[wordcount] = j;
			wordno[wordcount] = k;		
			wordcount++;
		  // cout <<"FOUND The Line : "<< lineno[wordcount-1] << endl;
	          // cout <<"FOUND word no "<< wordno[wordcount-1] << endl;

		}
		}
	    // cout <<"The Word : "<< wordin << endl;
           // cout <<"The Line : "<< j << endl;
//	cout <<"word no "<< k << endl;
		    }
//		cout <<"Word count : "<< k << endl;
		k = 0;
		ss.clear();
		
		}
//		cout <<"Line count : "<< j << endl;

/*		for(int i = 0;i<wordcount;i++)
		{
		cout <<"Found word in Line "<< lineno[i] << " Word "<< wordno[i] << endl;
		}
*/
		return wordcount;
                }


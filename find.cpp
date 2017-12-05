#include<iostream>
#include<sstream>
#include<fstream>
#include <string>
#include "find.h"
using namespace std;
void findwords::setFilename(char filen[200])
{
	      for(int i = 0;i<200;i++)
                   {
                        filename[i] = filen[i];
                   }


}

string findwords::getFilename()
{

	return filename;

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

                }
                else if(!ss.fail())
                {
                if(word == wordin)
                {
                        lineno[wordcount] = j;
                        wordno[wordcount] = k;
                        wordcount++;


                }
                }

                }

                k = 0;
                ss.clear();

                }

                return wordcount;
}


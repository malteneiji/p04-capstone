#ifndef _FIND_H_
#define _FIND_H_
#include <string>
using namespace std;
class findwords
{
        public:

                void setFilename(char filen[200]);
                string getFilename();
                int find(string word , int (&lineno)[100] , int (&wordno) [100]);

        private:
                char filename[200];
                


};

#endif

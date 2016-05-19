#ifndef FILE_H
#define FILE_H

#include <string>
using namespace std;

class File
{
    public:
        virtual ~File();  // important! This should be virtual. As we want to delete the derived classes' objects not File object

        string getName();

        virtual string getPrintRep() =0;

    protected:
        File();
        File(string n);
    private:
          string name;
};

#endif // FILE_H

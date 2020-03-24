//  Last sanity check: 2020-03-24
// Example program
#include <iostream>
#include <string>
using namespace std;

class Birthday
{
    int month, day, year;

public:
    Birthday(int m, int d, int y) : month(m), day(d), year(y)
        { cout<<"New birthday created: "<<month<<"/"<<day<<"/"<<year<<endl; };    
    ~Birthday() { cout <<"Deleted Birthday object " <<month<<"/"<<day<<"/"<<year<< endl; }
    
    void printDate()
    {
        cout<<month<<"/"<<day<<"/"<<year<<endl; 
    }
};

class People
{
    string name;
    Birthday dateOfBirth;
public:
    People(string x, Birthday b) : name(x), dateOfBirth(b)
        {
            cout << "New people created: " << name << endl;
        }
    ~People() { cout<< "Deleted People object "<< name<< endl; } 
    
    void printInfo()
    {
        cout << name << " was born on ";
        dateOfBirth.printDate(); 
        cout << endl;    
    }
};

int main()
{
    Birthday birthAlex = Birthday(03, 11, 1994);
    People alex = People("Alex Seceleanu", birthAlex);
    
    //alex.printInfo();
    cout << endl <<"END OF PROGRAM"<<endl;
    return 0;
}

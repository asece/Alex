//  Last sanity check: 2020-05-13
// Resource Management
// persons.push_back(Person("Alex")) trebuie facut doar daca exista copy contructor si operator definite!
// altfel se face copie shallow si programul nu merge! 
// Alta varianta - salvezi pointeri catre Person in vector; stergi copy constr si operator si creezi functie de clonare;

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person
{
private:
    string *pName_;
    
public:  
    Person(string name)
        { pName_ = new string(name); }
    ~Person() { delete pName_; }

    Person (const Person& copy)
    {
        pName_ = new string(* (copy.pName()) );
    }
    
    Person& operator=(const Person& copy);
    
    string* pName() const 
    { 
        return pName_; 
    }
    
    void printName()
    { cout << *pName_ << endl; }
};

int main()
{

    vector<Person> persons;
    persons.push_back(Person("Alex"));
    
    persons.back().printName();
    cout<<"END"<<endl;
    return 0;
}

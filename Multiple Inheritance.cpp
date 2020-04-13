//  Last sanity check: 2020-04-13
// Example program
#include <iostream>
#include <string>
using namespace std;

class File
{
  public:  
  File(string fname)
    { cout<< "File is created"<<endl; }
  
  string name;
  void open()
  { cout<<"File::open()"<<endl; }

};

class In : virtual public File
{
public:
    In(string fname) : File(fname) 
        { cout<< "In is created"<< endl; }
        
    void read()
        { cout<<"In::read()"<<endl; }

private:
    void open()
        { cout<<"In::open()"<<endl; }
};

class Out : virtual public File
{
 public:
 Out(string fname): File(fname) 
    {cout<< "Out is created"<< endl;}
 
    void write()
        { cout<<"Out::write()"<<endl; }
    void open()
        { cout<<"Out::open()"<<endl; }
};

class IO : public In, Out
{    
    public: 
    IO(string fname): Out(fname), In(fname), File(fname) 
        {cout<< "IO is created"<< endl; }
        
    void read()
        { cout<<"IO::read()"<<endl; }
};

int main()
{
    
    IO f = IO("Alex");
    
    f.read();
    
    int a = 1, b =1;
    
    a = (b=5, b+5);
    cout<< endl<<a<<endl;
    
    return 0;
}

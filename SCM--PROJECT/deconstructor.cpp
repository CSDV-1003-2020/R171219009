#include <iostream>
using namespace std;
class HelloWorld{
public:
	//Destructor
    HelloWorld()
    {
     cout<<"Destructor is called"<<endl;
    }
    //Member function
    void display()
    {
     cout<<"Hello World!"<<endl;
    }
};
int main()
{
   //Object created
   HelloWorld obj;
   //Member function called
   obj.display();
   return 0;
}

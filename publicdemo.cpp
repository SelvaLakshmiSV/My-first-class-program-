#include<iostream>
#include<string>
using namespace std;

class Dinky{
   public :
       void getname(string x){
           name = x;
       }
       string putname(){
           return name;
       }
   private :
      string name;
};
int main()
{
    Dinky d;
    d.getname("Selva Lakshmi");
    cout<<d.putname();
    return 0;
}

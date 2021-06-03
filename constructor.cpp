#include<iostream>
#include<string>
using namespace std;

class Dinky{
   public :
       Dinky(string z){
         getname(z);
       }
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
    Dinky d("Selva Lakshmi");

    cout<<d.putname();
    return 0;
}

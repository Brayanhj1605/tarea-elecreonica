#include <iostream>
using namespace std;
bool comprobador;
float numero1;
float numero2;
int main() {
   cout <<"insertar numero1: ";
   cin >>numero1;
   cout <<"insertar numero2: ";
   cin >>numero2;
   if(numero1<numero2)
   cout<<numero1<<"<"<<numero2<<endl;
   if(numero1>numero2)
   cout<<numero1<<">"<<numero2<<endl;
   if(numero1==numero2)
   cout<<numero1<<"=="<<numero2<<endl;
   }
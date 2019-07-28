#include<iostream>

using namespace std;

template <typename T> 
T mayor(T x, T y) 
{ 
   return (x > y)? x: y; 
} 

int main()
{
  cout<<"Esta aplicacion tiene una funcion para saber el mayor entre dos datos"<<endl;
  return 0;
}

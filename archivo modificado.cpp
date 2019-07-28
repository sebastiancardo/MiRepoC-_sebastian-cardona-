#include <iostream>

using namespace std;

template <typename T>

T mayor(T x, T y)
{
   return (x > y)? x: y;
}

int main()
{
    cout<<"Esta aplicacion tiene una funcion para saber el mayor entre dos datos"<<endl;
    cout<< mayor(3,7) << endl;
    cout<< mayor (4.0,9.8)<<endl;

   return 0;
}

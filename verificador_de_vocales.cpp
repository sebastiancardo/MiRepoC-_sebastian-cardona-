#include <iostream>

using namespace std;
int main(){
  char palabra[40];
    int i,c=0;
    cout<<"por favor ingrese una palabra: ";gets(palabra);
    for (i=0;i<40;i++){
        switch (palabra[i]){
        case 'a':c=c+1;
            break;
        case 'e':c=c+1;
            break;
        case 'i':c=c+1;
            break;
        case 'o':c=c+1;
            break;
        case 'u':c=c+1;
            break;
        }
    }
    cout<<"el numero de vocales encontradas son:"<<c<<endl;
}

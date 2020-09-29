#include <iostream>

using namespace std;

int main() {
    string cadena;

    //cin>> cadena; //lee hasta espacio o enter
    getline(cin, cadena);//lee hasta el \n enter
    cout<< cadena.size()<< endl;

    return 0;
}
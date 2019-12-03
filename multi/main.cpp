#include <iostream>

using namespace std;

int multiplicacion(int n);
int main()
{
    cout << multiplicacion(5);
    return 0;
}
int multiplicacion(int n){
if ( n == 0){
    return 1;
}
else {

    return n*multiplicacion(n-1);
}
}

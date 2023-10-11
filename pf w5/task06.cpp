#include<iostream>
using namespace std;
void checkcase( char a ) ;
int main() {
    char a  ;
    cout << "Enter a character (A/a): " ;
    cin >> a ;
    checkcase(a) ;
}
    void checkcase( char a )
    { if ( a == 'A' )
    {   cout << "You have entered Capital " << a ;
        
    }
    if ( a == 'a' )
    {
        cout << "You have entered small " << a ;
    }
    

    }









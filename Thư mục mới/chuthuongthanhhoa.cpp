#include <iostream>
#include  <cctype>
using namespace std;

int main(){
	char a[3]={'k','v','1'};
    char chr;
    /*Tru?ng h?p có th? chuy?n v? ch? hoa*/
    chr = toupper('h');
    cout << chr <<endl; //H

    chr = toupper('a');
    cout << chr <<endl;; //A

    /*Tru?ng h?p không th? chuy?n v? ch? hoa*/ 
    chr = toupper('H');
    cout << chr <<endl; //H

    chr = toupper('!');
    cout << chr <<endl; //!
    
    return 0;
}


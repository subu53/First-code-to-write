#include <iostream>
using namespace std;
int main()
{
    double currency, USD, CYN, EUR, GBP, KSH, AMOUNT;
 cout <<"Enter The Name Currency In Capital: e.g USD, CYN, EUR, GBP " ;
 cin >> currency;
 cout <<"Enter The Amount in figures(Without spaces or commas): ";
  cin >> AMOUNT;
    if (currency ==USD) {
        KSH = AMOUNT*152 ;
        cout<< "The Amount in Kshs is: "<< KSH ;
    	}
    if (currency ==CYN) {
        KSH = AMOUNT*21.27 ;
        cout<< "The Amount in Kshs is: "<< KSH ;
        }
    if (currency ==EUR) {
        KSH = AMOUNT*166.88 ;
        cout<< "The Amount in Kshs is: "<< KSH ;
        }
    else (currency ==GBP); {
        KSH = AMOUNT*190.73 ;
        cout<< "The Amount in Kshs is: "<< KSH ;
        }
    return 0;
    }

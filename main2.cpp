#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

void meni(){
	cout << "1. - Unos racuna\n";
	cout << "2. - Pregled racuna\n";
	cout << "3. - Spremanje racuna u text file\n";
	cout << "4. - Citanje racuna iz datoteke\n";
	cout << "5. - Trazenje tacnog racuna\n";
	cout << "6. - Izmjena tacnog racuna\n";
	cout << "0. - Izlaz\n";
}
void sokovi(){
	cout << "1. - Esspresso 2KM\n";
	cout << "2. - Caj 1.5KM\n";
	cout << "3. - Topla cokolada 2.5KM\n";
	cout << "4. - Nes 2KM\n";
	cout << "5. - Nes Classic 2KM\n";
	cout << "6. - Cola 2.5KM\n";
	cout << "7. - Fanta 2.5KM\n";
	cout << "8. - Kisela 1.5KM\n";
	cout << "9. - Limunada 3KM\n";
	cout << "10. - Schweepes 2.5KM\n";
	cout << "11. - Fructal 2.5KM\n";
	cout << "12. - Cappy 3KM\n";
    cout<<"Izlaz 0"<<endl;
}
int main(){
    int meniopcija;

    meni();
    cout<<"Unesite jednu od opcija: ";
    cin>>meniopcija;
    switch (meniopcija){
    case 1:
        cout<<"Molimo unesite skoiće: "<<endl;
        sokovi();
        break;
    
    default:
        break;
    }

}

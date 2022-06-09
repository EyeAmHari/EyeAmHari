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
    int meniopcija,total;
    ofstream dat("racun.txt",ios::app);
    string pamtilo;
    meni();
    cout<<"Unesite jednu od opcija: ";
    cin>>meniopcija;
    switch (meniopcija){
    case 1:
        cout<<"Molimo unesite skoice: "<<endl;
        sokovi();
        int unosenjeSokica;
        float tempRacun;
        switch (unosenjeSokica){
        case 1:
            tempRacun+=2;
            total+=2;
            pamtilo+="Esspresso 2KM\n";
            break;
        case 2:
            tempRacun+=1.5;
            total+=1.5;
            pamtilo+="Caj 1.5KM\n";
            break;
        case 3:
            tempRacun+=2.5;
            total+=2.5;
            pamtilo+="Topla cokolada 2.5KM\n";
            break;
        case 4:
            tempRacun+=2;
            total+=2;
            pamtilo+="Nes 2KM\n";
            break;
        case 5:
            tempRacun+=2;
            total+=2;
            pamtilo+="Nes Classic 2KM\n";
            break;
        case 6:
            tempRacun+=2.5;
            total+=2.5;
            pamtilo+="Cola 2.5KM\n";
            break;
        case 7:
            tempRacun+=2.5;
            total+=2.5;
            pamtilo+="Fanta 2.5KM";
            break;
        case 8:
            tempRacun+=1.5;
            total+=1.5;
            pamtilo+="Kisela 1.5KM\n";
            break;
        case 9:
            tempRacun+=3;
            total+=3;
            pamtilo+="Limunada 3KM\n";
            break;
        case 10:
            tempRacun+=2.5;
            total+=2.5;
            pamtilo+="Schweepes 2.5KM\n";
            break;
        case 11:
            tempRacun+=2.5;
            total+=2.5;
            pamtilo+="Fructal 2.5KM\n";
            break;
        case 12:
            tempRacun+=3;
            total+=3;
            pamtilo+="Cappy 3KM\n";
            break;
        default:
            cout<<"Nepostojeci unos, molimo unesite ope: ";
            break;
        }
        break;

    default:
        break;
    }

}

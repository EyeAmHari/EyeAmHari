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
    cout << "5. - Trazenje artikla u racunu\n";
    cout << "6. - Izmjena artikla u racunu\n";
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
    string pamtilo, s, linija;
    do{
        meni();
        cout<<"Unesite jednu od opcija: ";
        cin>>meniopcija;
        switch (meniopcija){
            case 1:
                cout<<"Molimo unesite sokice: "<<endl;
                sokovi();
                int unosenjeSokica;
                cin>>unosenjeSokica;
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
                        cout<<"Nepostojeci unos, molimo unesite opet: ";
                        break;
                }
                break;

            case 2:
                cout<<"Vas trenutni racun je: \n";
                cout<<pamtilo;
                cout<<"==========================\n";
                cout<<"Total: "<<tempRacun<<"\n";
                system("PAUSE");
                break;
            case 3:
                fstream datout("racun.txt", ios::out);
                datout<<pamtilo;
                datout<<"Total: "<<tempRacun;
                datout.close();
                break;
            case 4:
                fstream datin("racun.txt", ios::in);
                cout<<"Racun u datoteci je: \n";
                while(getline(datin, linija)){
                    cout<<s<<"\n";
                }
                datin.close();
                system("PAUSE");
                break;
            case 5:
                cout<<"Unesite artikal koji zelite potraziti: ";
                getline(cin, s);
                datin.open("racun.txt");
                while(getline(datout, linija)){
                    if(linija.find(s)>-1){
                        cout<<linija;
                    }
                }
                datin.close();
                system("PAUSE");
                break;
              
            case 0:
                return 0;    
            default:
                break;
        }
    }while(1);    

}

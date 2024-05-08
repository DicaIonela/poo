#include <iostream>
#include "Produs.h"
#include "Subprodus.h"
#include "GestiuneAdministratori.h"
using namespace std;

int main()
{
    //verificare clase ce tin de magazin
    Produs p1("Patiserie",56753);
    cout<<"\nDatele pentru prima categorie:"<<p1<<endl;
    Subprodus s1("Patiserie", 37645, "Paine", 100, 50);
    cout<<"\nDatele pentru produsul 1:"<<s1<<endl;
    s1=s1+5;
    cout<<"\nDatele pentru produsul 1 stoc actualizat +5:"<<s1;
    s1=s1-20;
    cout<<"\n\nDatele pentru produsul 1 stoc actualizat -20"<<s1;


    ///administratori, verificare
    GestiuneAdministratori gestiune("administratori.txt");
    gestiune.adaugaAdministrator("admin3", "parola3");
    string numeUtilizator, parola;
    cout << "\n\nIntroduceti numele de utilizator si parola pentru verificare:" << endl;
    cout << "Nume de utilizator: ";
    cin >> numeUtilizator;
    cout << "Parola: ";
    cin >> parola;
    if (gestiune.esteAdministrator(numeUtilizator, parola)) {
        cout << "Utilizatorul este administrator." << endl;
    } else {
        cout << "Utilizatorul nu este administrator." << endl;
    }

    return 0;


    return 0;
}

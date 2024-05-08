#include "GestiuneAdministratori.h"
#include <iostream>
#include <fstream>
using namespace std;
GestiuneAdministratori::GestiuneAdministratori(const string& numeFisier) {
    ifstream file(numeFisier);
    if (file.is_open()) {
        string numeUtilizator, parola;
        while (file >> numeUtilizator >> parola) {
            administratori.push_back(make_pair(numeUtilizator, parola));
        }
        file.close();
    } else {
        cerr << "Nu s-a putut deschide fisierul de administratori!" << endl;
    }
}

bool GestiuneAdministratori::esteAdministrator(const string& numeUtilizator, const string& parola) {
    for (const auto& admin : administratori) {
        if (admin.first == numeUtilizator && admin.second == parola) {
            return true;
        }
    }
    return false;
}

void GestiuneAdministratori::adaugaAdministrator(const string& numeUtilizator, const string& parola) {
    administratori.push_back(make_pair(numeUtilizator, parola));
    ofstream file("administratori.txt", ios::app);
    if (file.is_open()) {
        file << numeUtilizator << " " << parola << endl;
        file.close();
    } else {
        cerr << "Nu s-a putut deschide fisierul de administratori pentru adaugare!" << endl;
    }
}

#ifndef GESTIUNEADMINISTRATORI_H
#define GESTIUNEADMINISTRATORI_H

#include <string>
#include <vector>

class GestiuneAdministratori {
private:
    std::vector<std::pair<std::string, std::string>> administratori;

public:
    GestiuneAdministratori(const std::string& numeFisier);
    bool esteAdministrator(const std::string& numeUtilizator, const std::string& parola);
    void adaugaAdministrator(const std::string& numeUtilizator, const std::string& parola);
};

#endif // GESTIUNEADMINISTRATORI_H

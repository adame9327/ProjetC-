#include "berserker.h"
#include <iostream>

// Frappe punitive
void Berserker::frappePunitive(Personnage& cible) {
    std::cout << getNom() << " frappe avec une attaque punitive!" << std::endl;
    cible.infligerDegats(10); // Dégâts infligés
}

// Coup déchaîné
void Berserker::coupDechaine(Personnage& cible) {
    std::cout << getNom() << " utilise un coup déchaîné!" << std::endl;
    cible.infligerDegats(20); // Dégâts infligés
}

// Action spéciale
void Berserker::actionSpeciale(Personnage& cible) {
    if (getEnergie() >= 100) {
        std::cout << getNom() << " utilise son attaque spéciale!" << std::endl;
        cible.infligerDegats(50); // Dégâts infligés
        setEnergie(getEnergie() - 100); // Coût en énergie
    } else {
        std::cout << getNom() << " n'a pas assez d'énergie pour l'action spéciale!" << std::endl;
    }
}

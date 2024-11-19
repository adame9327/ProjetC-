#ifndef BERSERKER_H
#define BERSERKER_H

#include "personnage.h"

class Berserker : public Personnage {
public:
    Berserker(const std::string& nom, int pv, int energie)
        : Personnage(nom, pv, energie) {}

    void frappePunitive(Personnage& cible);
    void coupDechaine(Personnage& cible);
    void actionSpeciale(Personnage& cible);
};

#endif // BERSERKER_H

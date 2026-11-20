#include "tableau_dynamique.hpp"

#include <print>

int main()
{
    TableauDynamique notes;
    for (int i{0}; i < 10; ++i) {
        ajouter(notes, 10.0 + i);
    }
    TableauDynamique copie = notes; // copie superficielle : même adresse
    liberer(copie);
    liberer(notes); // double libération
}

#include "tableau_dynamique.hpp"

#include <print>

int main()
{
    TableauDynamique notes;
    for (int i{0}; i < 10; ++i) {
        ajouter(notes, 10.0 + i);
        std::println("taille {:>2}, capacité {:>2}", notes.taille, notes.capacite);
    }
    std::println("element 3 : {}", element(notes, 3));
#ifndef SANS_LIBERER
    liberer(notes);
#endif
}

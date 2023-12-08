// hjolaferth.hpp

#pragma once

#include <iostream>
#include <string>

#include "journey.hpp"

// Klasinn hjolaferth erfir frá Journey og bætir við upplýsingum um tíma hjólaförarinnar.
class hjolaferth : public Journey{
private:
    int timi;  // Fjöldi klukkustunda sem hjólaförin er varandi.
public:
    hjolaferth(); // Tómi smiður fyrir hjolaferth hlutinn.
    hjolaferth(int nr, int fjoldibokathir, int heildarfjoldi, int timi); // Smiður sem mótar Journey hlut með tilgreindum upplýsingum.
    int gettimi(); // Aðferð til að ná í fjölda klukkustunda sem hjólaförin er varandi.
    void settimi(int timi);  // Aðferð til að setja fjölda klukkustunda sem hjólaförin er varandi.
    void prenta(); // Aðferð til að prenta út upplýsingar um hjólaförina.
};
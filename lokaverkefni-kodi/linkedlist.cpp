#pragma once

#include "journey.hpp"

struct JourneyNode {
    Journey* nr;
    JourneyNode* next;

    JourneyNode(Journey* nr) {
        this->nr = nr;
        this->next = nullptr;
    }

    ~JourneyNode() {
        delete this->nr; // Corrected the variable name to match the member variable
    }
};

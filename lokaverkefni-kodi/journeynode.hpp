#pragma once

#include "journey.hpp"
#include "journeynode.hpp"

struct JourneyNode {
    Journey* data;
    JourneyNode* next;

    JourneyNode(Journey* data) {
        this->data = data;
        this->next = nullptr;
    }

    /*
    ~JourneyNode() {
        delete this->data; // Corrected the variable name to match the member variable
    }*/
};

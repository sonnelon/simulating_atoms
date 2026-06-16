#pragma once
#include <vector>
#include "Physics.h"

class Simulation {
private:
    long long count_atoms;
    std::vector<int> atoms_x;
    std::vector<int> atoms_y;
    Physics physics;
public:
    Simulation(long long count_atoms);
    void start() const;
    void render();
};
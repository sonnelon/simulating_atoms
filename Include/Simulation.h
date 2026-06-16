#pragma once
#include <vector>
#include "Physics.h"

class Simulation {
public:
    Simulation(size_t count_atoms, size_t width, size_t height);
    void start() const;
    void render();
    void display_atoms_cords() const;
private:
    size_t count_atoms;
    size_t width;
    size_t height;
    std::vector<int> atoms_x;
    std::vector<int> atoms_y;
    Physics physics;
    void spawn_atoms();
};
#include <cstdlib>
#include <iostream>
#include "Simulation.h"

Simulation::Simulation(size_t count_atoms, size_t width, size_t height) : 
count_atoms(count_atoms), width(width), height(height), physics(width, height, count_atoms) {
    atoms_x.resize(count_atoms);
    atoms_y.resize(count_atoms);
    spawn_atoms();
}

void Simulation::spawn_atoms() {
    for (size_t i = 0; i < count_atoms; i++) {
        atoms_x[i] = rand() % width;
        atoms_y[i] = rand() % height;
    }
}

void Simulation::start() const {
    std::cout << "Starting simulation with " << count_atoms << " atoms." << std::endl;
}

void Simulation::render() {
    std::cout << "Rendering simulation..." << std::endl;
}

void Simulation::display_atoms_cords() const {
    for (size_t i = 0; i < count_atoms; i++) {
        std::cout << "Atom " << i + 1 << ": (" << atoms_x[i] << ", " << atoms_y[i] << ")" << std::endl;
    }
}

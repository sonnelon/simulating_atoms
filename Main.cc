#include <iostream>
#include "Simulation.h"

int main() {
    size_t count_atoms = 100;
    size_t width = 800;
    size_t height = 600;

    Simulation simulation(count_atoms, width, height);
    simulation.start();
    simulation.render();
    simulation.display_atoms_cords();
    return 0;
}
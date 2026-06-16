#pragma once
#include <vector>

class Physics {
public:
    Physics(size_t width, size_t height, size_t count_atoms);
    void update(std::vector<int>& atoms_x, std::vector<int>& atoms_y) const;
private:
    size_t width;
    size_t height;
    size_t count_atoms;
};
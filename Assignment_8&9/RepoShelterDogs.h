#pragma once
#include "Dog.h"
#include <vector>

class RepoShelterDogs {
private:
    std::vector<Dog> dogs;

public:
    RepoShelterDogs();
    ~RepoShelterDogs();
    void addDog(const std::string &name, const std::string &breed, int age, const std::string &photograph);
    void addDog(const Dog &dog);
    void deleteDog(const std::string &name);
    void updateDog(const std::string &name, const std::string &newBreed, int newAge, const std::string &newPhotograph);
    std::vector<Dog> getDogs() const;
    int getDogPosition(const Dog& dog);
    int getDogPositionByName(const std::string& name);
    Dog getDogByName(const std::string& name);
};


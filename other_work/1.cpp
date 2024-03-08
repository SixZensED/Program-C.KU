#include <iostream>
#include <string>
using namespace std;

class Monster {
protected:
    string name;

public:
    virtual string attack() = 0;
};

class FireMonster : public Monster {
public:
    string attack() {
        return "FireMonster attacks with fire!";
    }
};

class WaterMonster : public Monster {
public:
    string attack() {
        return "WaterMonster attacks with water!";
    }
};

class StoneMonster : public Monster {
public:
    string attack() {
        return "StoneMonster attacks with stones!";
    }
};

int main() {
    FireMonster fire; WaterMonster water; StoneMonster stone;

    std::cout << fire.attack() << std::endl;
    std::cout << water.attack() << std::endl;
    std::cout << stone.attack() << std::endl;

    return 0;
}

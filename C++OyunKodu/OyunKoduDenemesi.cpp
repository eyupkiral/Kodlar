#include <iostream>
#include <string>

class character {
public:
    virtual void attack() {
        std::cout << "Character attacks!" << std::endl;
    }
};

class warrior : public character {
public:
    void attack() override {
        std::cout << "Warrior swings a sword!" << std::endl;
    }
};

class mage : public character {
public:
    void attack() override {
        std::cout << "Mage casts a fireball!" << std::endl;
    }
};

class archer : public character {
public:
    void attack() override {
        std::cout << "Archer shoots an arrow!" << std::endl;
    }
};

int main() {
    // Nesneleri ve pointer'ları main içine aldık
    character* c1 = new warrior();
    character* c2 = new mage();
    character* c3 = new archer();

    // Fonksiyonları çağırıp test edelim
    c1->attack();
    c2->attack();
    c3->attack();

    // (İyi bir alışkanlık: new ile açtığımız belleği siliyoruz)
    delete c1;
    delete c2;
    delete c3;

    return 0;
}
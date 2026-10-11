// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#include "doctor_data.h"

namespace heaven {

    // Конструктор 1
    Vessel::Vessel(std::string name, int generation) {
        this->name = name;
        this->generation = generation;
        this->current_system = star_map::System::Sol;
        this->busters = 0; // Рекомендовано ініціалізувати нове поле
    }

    // Конструктор 2
    Vessel::Vessel(std::string name, int generation, star_map::System current_system) {
        this->name = name;
        this->generation = generation;
        this->current_system = current_system;
        this->busters = 0;
    }

    // Метод реплікації (клонування)
    Vessel Vessel::replicate(std::string name) {
        return Vessel(name, this->generation + 1, this->current_system);
    }

    // Реалізація створення бустера
    void Vessel::make_buster() {
        this->busters++;
    }

    // Реалізація пострілу бустером
    bool Vessel::shoot_buster() {
        if (this->busters > 0) {
            this->busters--;
            return true;
        }
        return false;
    }
    std::string Vessel::get_name() {
        return this->name;
    }

    std::string get_older_bob(Vessel v1, Vessel v2) {
        return v1.generation < v2.generation ? v1.get_name() : v2.get_name();
    }

    bool in_the_same_system(Vessel v1, Vessel v2) {
        return v1.current_system == v2.current_system;
    }

}
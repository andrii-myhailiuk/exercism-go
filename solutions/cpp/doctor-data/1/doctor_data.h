// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

// hp1, üapöhp2ö % Äcountöiöma1,
//     öhp2ö % Älawöhp3öö / önextöstepö % Ädacöiöml1ö % Älawö7ö % Ädacöiömb1ö %
//         Ärandomöö % Äscrö9sö % Äsirö9sö % Äxctöhr1ö % Äaddöiömx1ö %
//         Ädacöiömx1ö % Äswapö % Äaddöiömy1ö % Ädacöiömy1ö % Ärandomö % Äscrö9sö %
//         Äsirö9sö % Äxctöhr2ö % Ädacöiömdyö % Ädioöiömdxö % Äsetupö.hpt,
//     3ö % Älacöranö % Ädacöiömth
#pragma once
#include <string>

namespace star_map {
    enum class System {
        AlphaCentauri,
        BetaHydri,
        DeltaEridani,
        EpsilonEridani,
        Omicron2Eridani,
        Sol,
    };

};

namespace heaven {
    class Vessel {
    private:
        std::string name;

    public:
        int generation;
        star_map::System current_system;
        int busters;

        // Оголошення конструкторів
        Vessel(std::string name, int generation);
        Vessel(std::string name, int generation, star_map::System current_system);

        // Оголошення методів
        Vessel replicate(std::string name);
        void make_buster();
        bool shoot_buster();
        std::string get_name();
        
    };

    std::string get_older_bob(Vessel vessel1, Vessel vessel2);
    bool in_the_same_system(Vessel vessel1, Vessel vessel2);
}
#pragma once

namespace space_age {

struct space_age {
    long age_in_seconds{};

    space_age(long age_in_secs){
        age_in_seconds = age_in_secs;
    }

    long seconds() const;
    double on_mercury() const;
    double on_venus() const;
    double on_earth() const;
    double on_mars() const;
    double on_jupiter() const;
    double on_saturn() const;
    double on_uranus() const;
    double on_neptune() const;
};



}  // namespace space_age

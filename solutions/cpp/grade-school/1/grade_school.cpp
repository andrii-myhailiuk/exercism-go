#include "grade_school.h"
#include <algorithm>

namespace grade_school {

    void school::add(const std::string& name, int grade_num) {
        for (const auto& [existing_grade, roster_students] : students) {
            if (std::binary_search(roster_students.begin(), roster_students.end(), name)) {
                return;
            }
        }

        auto& vec = students[grade_num];
        auto pos = std::lower_bound(vec.begin(), vec.end(), name);
        if (pos == vec.end() || *pos != name) {
            vec.insert(pos, name);
        }
}

    std::map<int, std::vector<std::string>> school::roster() const{
        return students;
    }

    std::vector<std::string> school::grade(int grade) const {
        auto it = students.find(grade);
        if (it == students.end()) {
            return {};
        }
        return it->second;
    }
}  // namespace grade_school

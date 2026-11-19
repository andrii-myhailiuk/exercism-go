#pragma once

#include <string>
#include <vector>
#include <map>

namespace grade_school {

// TODO: add your solution here
class school {
    public:
    void add(const std::string& name, int grade_num);
    std::map<int, std::vector<std::string>> roster() const;
    std::vector<std::string> grade(int grade) const;

    
    private:
    std::map<int, std::vector<std::string>> students;
};

}  // namespace grade_school

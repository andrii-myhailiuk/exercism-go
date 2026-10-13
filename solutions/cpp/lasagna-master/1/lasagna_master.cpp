#include "lasagna_master.h"
#include <vector>

namespace lasagna_master {

// TODO: add your solution here
int preparationTime(std::vector<std::string> layers, int average_time) {
    return layers.size() * average_time;
}

amount quantities(std::vector<std::string> layers){
    // amount amnt = *new amount;
    int noodles = 0;
    double sauce = 0.0;

    for (auto layer : layers){
        if (layer == "noodles") {
            noodles += 50;
        } else if (layer == "sauce") {
            sauce += 0.2;
        }
    }
    return amount{noodles, sauce};
}

void addSecretIngredient(std::vector<std::string> &myList, const std::vector<std::string> friendsList){
    myList.at(myList.size() - 1) = friendsList.at(friendsList.size() - 1);
}

void addSecretIngredient(std::vector<std::string> &myList, std::string secretIngredient){
    myList.at(myList.size() - 1) = secretIngredient;
}


std::vector<double> scaleRecipe(const std::vector<double>& quantities, int portions) {
    std::vector<double> result;
    result.reserve(quantities.size());

    for (double quantity : quantities) {
        result.push_back(quantity * (portions / 2.0));
    }
    return result;
}

}  // namespace lasagna_master

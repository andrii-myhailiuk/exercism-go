#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:
bool connection_check(pillar_men_sensor *pms){
    if (pms != nullptr) {return true;}
    return false;
}

int activity_counter(pillar_men_sensor* activity_arr, int capacity){
    int res = 0;
    for (int i = 0; i < capacity; i++){
        res += activity_arr[i].activity;
    }
    return res;
}

bool alarm_control(pillar_men_sensor *pms) {
    if (!connection_check(pms)) {return false;}
    if (pms->activity > 0) {
        return true;
    }else {
        return false;
    }
}

bool uv_alarm(pillar_men_sensor *pms) {
    if (!connection_check(pms)) {return false;}
    if (uv_light_heuristic(&pms->data) > pms->activity){
        return true;
    }
    return false;
}

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

}  // namespace speedywagon

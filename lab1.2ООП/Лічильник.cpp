
#include "˳�������.h"

˳�������::˳�������(int min_val, int max_val, int init_val) {
    min_value = min_val;
    max_value = max_val;
    if (init_val < min_val || init_val > max_val) {
        current_value = min_val;
    }
    else {
        current_value = init_val;
    }
}

int ˳�������::getMinValue() const {
    return min_value;
}

int ˳�������::getMaxValue() const {
    return max_value;
}

int ˳�������::getCurrentValue() const {
    return current_value;
}

bool ˳�������::setMinValue(int min_val) {
    if (min_val <= max_value) {
        min_value = min_val;
        return true;
    }
    return false;
}

bool ˳�������::setMaxValue(int max_val) {
    if (max_val >= min_value) {
        max_value = max_val;
        return true;
    }
    return false;
}

bool ˳�������::setCurrentValue(int current_val) {
    if (current_val >= min_value && current_val <= max_value) {
        current_value = current_val;
        return true;
    }
    return false;
}

void ˳�������::increase() {
    if (current_value < max_value) {
        current_value++;
    }
}
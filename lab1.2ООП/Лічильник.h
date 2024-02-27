#pragma once

class Лічильник
{
private:
    int min_value;
    int max_value;
    int current_value;

public:
    Лічильник(int min_val, int max_val, int init_val);

    int getMinValue() const;
    int getMaxValue() const;
    int getCurrentValue() const;

    bool setMinValue(int min_val);
    bool setMaxValue(int max_val);
    bool setCurrentValue(int current_val);

    void increase(); 
};
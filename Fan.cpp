//
// Created by brian on 6/18/26.
//

#include <string>

struct Fan
{
    int speed { 1 };
    double radius { 1.53 };
    std::string color { "green" };

    Fan() = default;

    explicit Fan(double newRadius) : radius{ newRadius } {}
};

int main(void) {
    Fan fan;
}
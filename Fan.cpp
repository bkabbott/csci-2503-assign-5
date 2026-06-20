// Course: CSCI 2503: Survey of Programming Languages
// Student: Brian Abbott
// Created on 6/18/26
// Last Modified: 6/20/26

#include <string>
#include <format>
#include <iostream>

struct Fan
{
    int speed { 1 };
    double radius { 1.53 };
    std::string color { "green" };

    // sets members to default values above
    Fan() = default;

    // convenience constructor
    explicit Fan(double newRadius) : radius{ newRadius } {}

    std::string toString() const
    {
        return std::format("A {:.2f} inch {} fan at a speed of {}",
                           radius, color, speed);
    }

    // accessors and mutators
    [[nodiscard]] int         getSpeed()  const            { return speed;  }
    void        setSpeed(int s)              { speed  = s;    }
    [[nodiscard]] double      getRadius() const            { return radius; }
    void        setRadius(double r)          { radius = r;    }
    [[nodiscard]] std::string getColor()  const            { return color;  }
    void        setColor(const std::string& c) { color = c;   }
};



int main(void) {
    Fan defaultFan;
    Fan customFan{ 8.0 };

    // Mutators as with Java
    customFan.setSpeed(3);
    customFan.setColor("blue");

    std::cout << defaultFan.toString() << '\n';
    std::cout << customFan.toString()  << '\n';

    return 0;
}
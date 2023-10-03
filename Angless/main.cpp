#include "Angless.h"
#include <iostream>
#include <cmath>
#include <sstream>
#ifndef M_PI
#define M_PI (3.14159265358979323846)
#endif

using namespace std;
Angle::Angle() : degrees(0.0), minutes(0.0) {}

Angle::Angle(double degrees, double minutes) : degrees(degrees), minutes(minutes) {}

void Angle::Init(double degrees, double minutes) {
    this->degrees = degrees;
    this->minutes = minutes;
}

void Angle::Read() {
    std::cout << "Enter degrees: ";
    std::cin >> degrees;
    std::cout << "Enter minutes: ";
    std::cin >> minutes;
}

void Angle::Display() const {
    std::cout << degrees << " degrees " << minutes << " minutes";
}

double Angle::toRadians() const {
    return (degrees + minutes / 60.0) * M_PI / 180.0;
}

void Angle::normalize() {
    while (degrees >= 360.0) {
        degrees -= 360.0;
    }
    while (degrees < 0.0) {
        degrees += 360.0;
    }
}

void Angle::increase(double value) {
    degrees += value;
    normalize();
}

void Angle::decrease(double value) {
    degrees -= value;
    normalize();
}

double Angle::sin() const {
    return std::sin(toRadians());
}

bool Angle::isEqual(const Angle& other) const {
    return (degrees == other.degrees) && (minutes == other.minutes);
}

std::string Angle::toString() const {
    std::stringstream ss;
    ss << degrees << " degrees " << minutes << " minutes";
    return ss.str();
}

#include <iostream>
#include "Angless.h"

int main() {
    Angle angle1, angle2;

    std::cout << "Enter the first angle:" << std::endl;
    angle1.Read();
    std::cout << "Enter the second angle:" << std::endl;
    angle2.Read();

    std::cout << "First angle: ";
    angle1.Display();
    std::cout << std::endl;

    std::cout << "Second angle: ";
    angle2.Display();
    std::cout << std::endl;

    std::cout << "Sine of the first angle: " << angle1.sin() << std::endl;
    std::cout << "Sine of the second angle: " << angle2.sin() << std::endl;

    if (angle1.isEqual(angle2)) {
        std::cout << "The angles are equal" << std::endl;
    }
    else {
        std::cout << "The angles are not equal" << std::endl;
    }

    return 0;
}

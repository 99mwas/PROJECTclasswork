#include <iostream>
#include <cmath> // For M_PI

// Function to calculate the volume of a cylinder
double calculateVolume(double radius, double height) {
    return M_PI * std::pow(radius, 2) * height;
}

int main() {
    double radius, height;

    // Prompt the user to enter the radius and height
    std::cout << "Enter the radius of the cylinder: ";
    std::cin >> radius;
    std::cout << "Enter the height of the cylinder: ";
    std::cin >> height;

    // Calculate the volume
    double volume = calculateVolume(radius, height);

    // Display the volume
    std::cout << "The volume of the cylinder is: " << volume << std::endl;

    return 0;
}
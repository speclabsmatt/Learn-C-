#include <iostream>

int main()
{

    const double earth_gravity_force = 9.81;
    const double mars_gravity_force = 3.711;
    const double km_factor = 1.609344;

    // Calculate weight on Mars
    double earthWeight;
    double marsWeight;

    std::cout << "Enter your weight in pounds: ";
    std::cin >> earthWeight;

    marsWeight = (earthWeight / earth_gravity_force) * mars_gravity_force;

    std::cout << "Your weight on Mars would be " << marsWeight << " pounds.\n";

    // Miles to kilometers
    double miles;
    double kilometers;

    std::cout << "Enter the number of miles: ";
    std::cin >> miles;

    kilometers = miles * km_factor;

    std::cout << miles << " miles is equal to " << kilometers << " kilometers.\n";

    return 0;
}

#include <iostream>

int main()
{
    double weight;
    int planet;
    double relativeWeight;

    std::cout << "Enter your weight: ";
    std::cin >> weight;
    std::cout << "List of available planets\n";
    std::cout << "1	Mercury\n2	Venus\n3	Mars\n4	Jupiter\n5	Saturn\n6	Uranus\n7	Neptune\n";
    std::cout << "Enter your planet selection: ";
    std::cin >> planet;

    switch (planet)
    {
    case 1:
        relativeWeight = weight * 0.38;
        break;
    case 2:
        relativeWeight = weight * 0.91;
        break;
    case 3:
        relativeWeight = weight * 0.38;
        break;
    case 4:
        relativeWeight = weight * 2.34;
        break;
    case 5:
        relativeWeight = weight * 1.06;
        break;
    case 6:
        relativeWeight = weight * 0.92;
        break;
    case 7:
        relativeWeight = weight * 1.19;
        break;
    }

    std::cout << "Your weight on the selected planet is " << relativeWeight << ".\n";
}
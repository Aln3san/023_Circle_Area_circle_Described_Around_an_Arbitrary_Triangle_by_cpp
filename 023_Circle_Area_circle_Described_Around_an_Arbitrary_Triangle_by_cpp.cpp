#include <iostream>
#include <cmath>
int main()
{
    const float PI = 3.14;
    float sideA, sideB, sideC;
    std::cout << "Please Enter Sides of the triangle to calculate Circle Area!\n"
        << "Side A : "; std::cin >> sideA;
    std::cout << "Side B : "; std::cin >> sideB;
    std::cout << "Side C : "; std::cin >> sideC;

    float semiPerimeter = (sideA + sideB + sideC)/2;
    unsigned int Area = round( PI * pow( (sideA * sideB * sideC)/(4* sqrt(semiPerimeter * (semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC)) ), 2));

	std::cout << "Area of Circle described around the triangle is : " << Area << std::endl;
}

#include <iostream>
#include <cmath>

unsigned int CalculateCircleAreaBySidesOfTriangle(float sideA, float sideB, float sideC) {
    const float PI = 3.14;
    float semiPerimeter = (sideA + sideB + sideC)/2;
    return round( PI * pow( (sideA * sideB * sideC)/(4* sqrt(semiPerimeter * (semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC)) ), 2));
}

int main()
{
    float sideA, sideB, sideC;
    std::cout << "Please Enter Sides of the triangle to calculate Circle Area!\n"
        << "Side A : "; std::cin >> sideA;
    std::cout << "Side B : "; std::cin >> sideB;
    std::cout << "Side C : "; std::cin >> sideC;


	std::cout << "Area of Circle described around the triangle is : " << CalculateCircleAreaBySidesOfTriangle(sideA, sideB, sideC) << std::endl;
}

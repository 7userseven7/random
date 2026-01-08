#include <iostream>
#include<cmath>
const float pi = 3.14;
class calc {
public:
    char op;
    //truncated con volume = (1/3) × π × height × (r² + r × R + R²)
    float trunVol(float height, float r, float R) {
        return float(1 / 3) * pi * height * (pow(r, 2) + r * R + pow(R, 2));
    }
    //square/rectangle volume = height × length × width
    float squareVol(float height, float length, float width) {
        return height * length * width;
    }
    //co nvolume = (1/3) × height × R²
    float conVol(float height, float R) {
        return float(1 / 3) * height * pow(R, 2);
    }
    //pyramide volume = (length × width × height)/3
    float pyrVol(float length, float height, float width) {
        return (length * height * width) / 3;
    }
    // Area of circle = π × R²
    float circArea(float R) {
        return pi * pow(R, 2);
    }

};
int main() {
    float length, height, width, r, R;
    float answer;
    int input;
    std::cout << "Which would you like to calculate?\n";
    std::cout << "To calculate circles area, type: 1\n";
    std::cout << "To calculate cons volume, type: 2\n";
    std::cout << "To calculate pyramides volume, type: 3\n";
    std::cout << "To calculate truncated cons volume, type: 4\n";
    std::cout << "To calculate square/recrangle  volume, type: 5\n";
    std::cout << "Which one would you like to calculate: ";
    std::cin >> input;
    calc get;
    switch (input) {
    case 1:
        std::cout << "\nEnter the value of R: ";
        std::cin >> R;
        answer = get.circArea(R);
        std::cout << "\nYour answer is: " << answer <<" or: pi * " << pow(R, 2);
        break;
    case 2:
        std::cout << "\nEnter the value of height: ";
        std::cin >> height;
        std::cout << "\nEnter the value of R: ";
        std::cin >> R;
        answer = get.conVol(height, R);
        std::cout << "\nYour answer is: " << answer;
        break;
    case 3:
        std::cout << "\nEnter the value of length: ";
        std::cin >> length;
        std::cout << "\nEnter the value of height: ";
        std::cin >> height;
        std::cout << "\nEnter the value of width: ";
        std::cin >> width;
        answer = get.pyrVol(length, height, width);
        std::cout << "\nYour answer is: " << answer;
        break;
    case 4:
        std::cout << "\nEnter the value of height: ";
        std::cin >> height;
        std::cout << "\nEnter the value of r: ";
        std::cin >> r;
        std::cout << "\nEnter the value of R: ";
        std::cin >> R;
        answer = get.trunVol(height, r, R);
        std::cout << "\nYour answer is: " << answer;
        break;
    case 5:
        std::cout << "\nEnter the value of height: ";
        std::cin >> height;
        std::cout << "\nEnter the value of length: ";
        std::cin >> length;
        std::cout << "\nEnter the value of width: ";
        std::cin >> width;
        answer = get.squareVol(height, length, width);
        std::cout << "\nYour answer is: " << answer;
        break;

    }

    return 0;
}

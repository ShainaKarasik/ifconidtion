#include <iostream>

//grade checker
int main() {

    int grade = 92;

    if (grade >= 70) {
        std::cout << "Congrats, you passed the class" << std::endl;
    }

    if (grade < 70) {
        std::cout << "Condolences, you did not pass the class" << std::endl;
    }
   
    return 0;

}

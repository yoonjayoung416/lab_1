//변수 상수 표준 입출력
#include <iostream>

int main()
{
    //int numOfStudents{31};
    //switch 구문
    int score{};    char grade{};
    std::cout << "enter score: "; std::cin >> score;
    switch (score / 10){
        case 10:
        case 9: grade = 'A'; break;
        case 8: grade = 'B'; break;
        case 7: grade = 'C'; break;
        case 6: grade = 'D';break;
        default: grade = 'F';

    }std::cout << score << ", " <<grade << std::endl;


    //조건연산자
    // if (numOfStudents == 30) std::cout << "default\n";
    // else std::cout << "change\n";
    // (numOfStudents == 30) ? (std::cout << "default\n") : (std::cout << "changed\n");


    // if (numOfStudents > 30) std::cout << "increased\n";
    // else if (numOfStudents < 30) std::cout << "decreased\n";
    // else std::cout << "default\n";

    // if (numOfStudents == 30 ) std::cout << "default\n";
    // else std::cout << "change\n";
    
    //전위증가 후위증가 연산자
    // std::cout << numOfStudents++ << std::endl;
    // std::cout << numOfStudents << std::endl;
    // std::cout << ++numOfStudents << std::endl;
    // std::cout << numOfStudents << std::endl;

    // std::cout << "Enter the Number of students: ";
    // std::cin >> numOfStudents;
    // std::cout << numOfStudents <<std::endl;
    
    // std::cout << sizeof(numOfStudents) << std::endl;
    // std::cout << typeid(numOfStudents).name() << std::endl;
    // std::cout << typeid(static_cast<double>(numOfStudents)).name() << std::endl;
    return 0;
}
#include <iostream>

using namespace std;

// student -> name, surname, age, student_id (attributes)
class Student {
    public:
        string name, surname, id;
        int age;

        int getScore() {
            return score;
        }
    
    private:
        int score;
};

int main()
{
    // oop -> object-oriented programming
    // c++ classess, objects
    Student student_1;
    student_1.name = "Phantakan";
    student_1.surname = "Thepnakorn";
    student_1.age = 18;
    student_1.id = "67023";
    cout << student_1.getScore();
    return 0;
}
#include <iostream>

class Student {
    // Define 'student_info' nested class
    class StudentInfo {
    public:
        std::string name;
        int roll_number;
        char sex;

        StudentInfo(std::string n, int r, char s)
            : name(n), roll_number(r), sex(s) {}
    };

    // Define 'date' nested class
    class Date {
    public:
        int day;
        int month;
        int year;

        Date(int d, int m, int y)
            : day(d), month(m), year(y) {}
    };

public:
    StudentInfo student_info;
    Date date_of_birth;

    Student(std::string name, int roll_number, char sex, int day, int month, int year)
        : student_info(name, roll_number, sex), date_of_birth(day, month, year) {}

    void display() {
        std::cout << "Student Name: " << student_info.name << std::endl;
        std::cout << "Student Roll Number: " << student_info.roll_number << std::endl;
        std::cout << "Student Sex: " << student_info.sex << std::endl;
        std::cout << "Date of Birth: " << date_of_birth.day << "/" << date_of_birth.month << "/" << date_of_birth.year << std::endl;
    }
};

int main() {
    std::string name;
    int roll_number, day, month, year;
    char sex;

    std::cout << "Enter the name of the student: ";
    std::cin >> name;
    std::cout << "Enter the roll number of the student: ";
    std::cin >> roll_number;
    std::cout << "Enter the sex of the student (M/F): ";
    std::cin >> sex;
    std::cout << "Enter the day of the birthdate: ";
    std::cin >> day;
}
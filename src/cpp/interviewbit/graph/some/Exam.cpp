#include"Exam.h"
#include<iostream>
Exam::Exam() {
    total_marks = 50;

}
Exam::Exam(int total_marks) {
    this->total_marks - total_marks;
}

Exam::~Exam() {}

int Exam::get_total_marks() {
    return this->total_marks;
}
bool Exam::reveal_answers() const {
    return false;

}
void Exam::prints() {
    std::cout<<total_marks;
}

class MockExam: public Exam {

    public:

    bool reveal_answers() const {
    return true;

}
    
};
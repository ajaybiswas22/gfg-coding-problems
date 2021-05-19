class Exam {
    unsigned int total_marks;

    public:
    Exam();
    Exam(int total_marks);
    ~Exam();

    int get_total_marks();
    bool reveal_answers() const;
    void prints();
};


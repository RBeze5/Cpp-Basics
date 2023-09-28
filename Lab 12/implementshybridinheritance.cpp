#include <iostream>
using namespace std;

class Student {
protected:
    int rollNumber;

public:
    void setRollNumber(int roll) {
        rollNumber = roll;
    }

    void displayRollNumber() {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Test : virtual public Student {
protected:
    int sub1;
    int sub2;

public:
    void setTestScores(int s1, int s2) {
        sub1 = s1;
        sub2 = s2;
    }

    void displayTestScores() {
        cout << "Test Scores: Subject 1 = " << sub1 << ", Subject 2 = " << sub2 << endl;
    }
};

class Sports : virtual public Student {
protected:
    int sportsScore;

public:
    void setSportsScore(int score) {
        sportsScore = score;
    }

    void displaySportsScore() {
        cout << "Sports Score: " << sportsScore << endl;
    }
};

class Result : public Test, public Sports {
public:
    void calculateTotalMarks() {
        int totalMarks = sub1 + sub2 + sportsScore;
        cout << "Total Marks: " << totalMarks << endl;
    }

    void displayResult() {
        displayRollNumber();
        displayTestScores();
        displaySportsScore();
        calculateTotalMarks();
    }
};

int main() {
    Result studentResult;
    studentResult.setRollNumber(101);
    studentResult.setTestScores(85, 90);
    studentResult.setSportsScore(95);

    studentResult.displayResult();

    return 0;
}

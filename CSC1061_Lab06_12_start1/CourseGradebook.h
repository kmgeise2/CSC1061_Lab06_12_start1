#ifndef COURSEGRADEBOOK_H
#define COURSEGRADEBOOK_H

#include <algorithm>
#include "Gradebook.h"

using namespace std;

class CourseGradebook : public Gradebook {
protected:
    // TODO: Type your code here

public:
    virtual ~CourseGradebook() {
        // TODO: Type your destructor code here, if needed
    }

    unordered_map<int, double> GetAssignmentScores(
        string assignmentName) override {
        // TODO: Type your code here (remove placeholder line below)
        return std::unordered_map<int, double>();
    }

    double GetScore(string assignmentName, int studentID) override {
        // TODO: Type your code here (remove placeholder line below)
        return NAN;
    }

    std::vector<string> GetSortedAssignmentNames() override {
        // TODO: Type your code here (remove placeholder line below)
        return vector<string>();
    }

    // GetSortedStudentIDs() returns a vector with all distinct student IDs,
    // sorted in ascending order.
    vector<int> GetSortedStudentIDs() override {
        // TODO: Type your code here (remove placeholder line below)
        return vector<int>();
    }

    // GetStudentScores() gets all scores that exist in the gradebook for the
    // student whose ID equals the studentID parameter. Scores are returned as
    // an unordered_map that maps an assignment name to the student's
    // corresponding score for that assignment.
    unordered_map<string, double> GetStudentScores(
        int studentID) override {
        // TODO: Type your code here (remove placeholder line below)
        return unordered_map<string, double>();
    }

    void SetScore(string assignmentName, int studentID, double score) override {
        // TODO: Type your code here
    }
};

#endif

#include <iostream>
#include <string>
#include <vector>
#include "studentGrades.h"

using namespace std;

void calculateStatistics(const vector<float>& scores, float& average, float& minScore, float& maxScore) {
    average = accumulate(scores.begin(), scores.end(), 0.0) / scores.size();
    minScore = *min_element(scores.begin(), scores.end());
    maxScore = *max_element(scores.begin(), scores.end());
}

string assignGrade(float score) {
    if (score >= 90) {
        return "A";
    } else if (score >= 80) {
        return "B";
    } else if (score >= 70) {
        return "C";
    } else if (score >= 60) {
        return "D";
    } else {
        return "F";
    }
}
int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    vector<string> names(n);
    vector<float> scores(n);

    // Input student names and test scores
    for (int i = 0; i < n; i++) {
        cout << "Enter name of student " << i+1 << ": ";
        cin >> names[i];
        cout << "Enter test score of student " << i+1 << ": ";
        cin >> scores[i];
    }

    // Calculate class statistics
    float average, minScore, maxScore;
    calculateStatistics(scores, average, minScore, maxScore);

    // Output student grades
    cout << "\n";
    cout << "Name\t\tTest Score\tGrade\n";
    cout << "====\t\t==========\t=====\n";
    for (int i = 0; i < n; i++) {
        cout << names[i] << "\t\t" << scores[i] << "\t\t" << assignGrade(scores[i]) << endl;
    }

    // Output class statistics
    cout << "\n=========Class Statistics==========\n";
    cout << "Number Of Students in the class: " << n << endl;
    cout << "Class Average score: " << average << endl;
    cout << "Maximum Test score: " << maxScore << endl;
    cout << "Minimum Test score: " << minScore << endl;

    return 0;
} 

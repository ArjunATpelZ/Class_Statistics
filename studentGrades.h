// studentGrades.h
#ifndef STUDENTGRADES_H
#define STUDENTGRADES_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

string assignGrade(float score);
void calculateStatistics(const std::vector<float>& scores, float& average, float& minScore, float& maxScore);

#endif // STUDENTGRADES_H

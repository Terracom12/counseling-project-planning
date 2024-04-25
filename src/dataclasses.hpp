#pragma once

#include <map>
#include <string>
#include <vector>

/**
 * @brief Stores data pertaining to a university course.
 *
 */
struct Course
{
    std::string name;
    // prerequisites
    // units
    // ...
};

/**
 * @brief Stores data of a university student relevant to transfer requirements.
 *
 */
struct StudentData
{
    std::vector<Course> completedCourses;
    std::vector<Course> enrolledCourses;
    std::string universityChoice;
};

struct CourseSpec
{
    std::vector<Course> courses;
    bool isRequired; // required / additional approved
};

struct UniversityData
{
    std::string name;
    std::map<std::string, CourseSpec> majorSpecs;
};
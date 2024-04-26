#pragma once

#include <map>
#include <memory>
#include <string>
#include <variant>
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

// TODO: Logical stuff
// TODO: Allowed / permitted enum type for course spec

class LogicalCourseRelation
{
    enum class Type { AND, OR } type;
    std::variant<std::vector<Course>, std::unique_ptr<LogicalCourseRelation>> req;
};

struct CourseReq
{
    std::variant<Course, LogicalCourseRelation> req;
};

struct UniversityData
{
    std::string name;
    std::map<std::string, CourseReq> majorReqs;
};
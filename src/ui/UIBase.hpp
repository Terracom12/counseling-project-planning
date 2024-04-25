#pragma once

#include <string>
#include <string_view>
#include <vector>

// TODO: Better validation method
typedef std::vector<std::string> StringList;

/**
 * @brief Abstract base class to handle end user interface functionality.
 *
 */
class UIBase
{
public:
    /**
     * @brief Prompts the user to select a file.
     *
     * @param msg Message to prompt the user with for selection.
     * @return std::string The selected file name.
     */
    virtual std::string promptFileChoice(std::string_view msg) const = 0;
    // TODO: Type for universities
    virtual std::string promptUniversityChoice(const StringList& validUniNames) const = 0;
    virtual std::string promptMajorChoice(const StringList& validMajorNames) const = 0;
    // TODO: Type for courses
    virtual StringList promptCourseSelection(const StringList& validCourseNames) const = 0;
    virtual void display(std::string_view msg) const = 0;
};
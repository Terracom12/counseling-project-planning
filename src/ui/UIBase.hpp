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
class UI
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
    /**
     * @brief Prompts the user to enter a university of transfer choice.
     * Ensures their entry is a valid university name.
     *
     * @param validUniNames List of valid university names.
     * @return std::string University name entered by the user.
     */
    virtual std::string promptUniversityChoice(const StringList& validUniNames) const = 0;
    /**
     * @brief Prompts the user to enter a major choice.
     * Ensures their entry is a valid university name.
     *
     * @param validMajorNames List of valid major names.
     * @return std::string University name entered by the user.
     */
    virtual std::string promptMajorChoice(const StringList& validMajorNames) const = 0;
    // TODO: Type for courses
    /**
     * @brief Prompts the user to enter a list of courses that they have taken.
     * Ensures the course names are all valid.
     *
     * @param validCourseNames List of valid course names.
     * @return std::string Course names entered by the user.
     */
    virtual StringList promptCourseSelection(const StringList& validCourseNames) const = 0;

    /**
     * @brief Displays an arbitrary string to the user.
     *
     * @param msg String to display.
     */
    virtual void display(std::string_view msg) const = 0;
};
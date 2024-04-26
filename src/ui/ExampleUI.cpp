#include "ui/ExampleUI.hpp"
#include <algorithm>
#include <iostream>
#include <string>

std::string ExampleUI::promptFileChoice(std::string_view msg) const
{
    std::cout << msg;
    std::string fileName;
    std::getline(std::cin, fileName);

    return fileName;
}

std::string ExampleUI::promptUniversityChoice(const StringList& validUniNames) const
{
    constexpr std::string_view prompt{"Please enter the university you wish to transfer to: "};
    std::string uniChoice;
    std::cout << prompt;
    std::getline(std::cin, uniChoice);

    return uniChoice;
}

std::string ExampleUI::promptMajorChoice(const StringList& validMajorNames) const
{
    constexpr std::string_view prompt{"Please enter your major of choice: "};
    std::string majorName;
    std::cout << prompt;
    std::getline(std::cin, majorName);

    return majorName;
}

StringList ExampleUI::promptCourseSelection(const StringList& validCourseNames) const
{
    constexpr std::string_view prompt{"Please enter all of your completed and in-progress courses: "};
    std::string listInput;
    StringList courseNames;

    std::cout << prompt;

    // Comma separated course names
    std::getline(std::cin, listInput);

    int prevSlice = 0;
    for (int i = 0; i < listInput.size(); ++i) {
        if (listInput[i] == ',') {
            courseNames.push_back(listInput.substr(prevSlice, i - prevSlice));
            prevSlice = i + 1;
        }
    }

    courseNames.push_back(listInput.substr(prevSlice));

    return courseNames;
}

void ExampleUI::display(std::string_view msg) const
{
    std::cout << msg << '\n';
}

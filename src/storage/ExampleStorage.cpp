#include "ExampleStorage.hpp"
#include <iostream>
#include <vector>

void ExampleStorage::loadTranscript(std::string_view path) {
    std::cout << "Load transcript '" << path << "'\n";
}

void ExampleStorage::loadUniData(std::string_view path) {
    std::cout << "Load university data '" << path << "'\n";
}

const std::vector<Course> ExampleStorage::getCompletedCourses() const {
    std::cout << "Getting completed courses...\n";

    return {};
}

std::vector<std::string> ExampleStorage::getValidUniNames() const {
    std::cout << "Getting valid university names...\n";

    return {};
}

std::vector<std::string> ExampleStorage::getValidMajorNames(std::string_view uni) const {
    std::cout << "Getting valid major names for '" << uni << "'...\n";

    return {};
}

std::vector<std::string> ExampleStorage::getValidCourseNames(std::string_view uni, std::string_view major) const {
    std::cout << "Getting valid major names for '" << major << "' at '" << uni << "'...\n";

    return {};
}

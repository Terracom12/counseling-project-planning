#include "ExampleStorage.hpp"

void ExampleStorage::loadTranscript(std::string_view path) {}

void ExampleStorage::loadUniData(std::string_view path) {}

const std::vector<Course>& ExampleStorage::getCompletedCourses() const {}

std::vector<std::string> ExampleStorage::getValidUniNames() const {}

std::vector<std::string> ExampleStorage::getValidMajorNames(std::string_view uni) const {}

std::vector<std::string> ExampleStorage::getValidCourseNames(std::string_view uni, std::string_view major) const {}

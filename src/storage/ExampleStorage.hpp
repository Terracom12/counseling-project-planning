#pragma once

#include "StorageBase.hpp"

/**
 * @brief Test class. Outputs any information recieved to stdout.
 * 
 */
class ExampleStorage : public Storage
{
    void loadTranscript(std::string_view path) override;
    void loadUniData(std::string_view path) override;
    const std::vector<Course> getCompletedCourses() const override;
    std::vector<std::string> getValidUniNames() const override;
    std::vector<std::string> getValidMajorNames(std::string_view uni) const override;
    std::vector<std::string> getValidCourseNames(std::string_view uni, std::string_view major) const override;
};
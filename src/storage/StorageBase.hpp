#pragma once

#include "dataclasses.hpp"
#include <string_view>
#include <vector>

class Storage
{
public:
    // TODO: Strongly-typed file paths

    virtual void loadTranscript(std::string_view path) = 0;
    virtual void loadUniData(std::string_view path) = 0;

    virtual const std::vector<Course>& getCompletedCourses() const = 0;

    virtual std::vector<std::string> getValidUniNames() const = 0;
    virtual std::vector<std::string> getValidMajorNames(std::string_view uni) const = 0;
    virtual std::vector<std::string> getValidCourseNames(std::string_view uni, std::string_view major) const = 0;
};
#include "Application.hpp"
#include "ui/UIBase.hpp"
#include <fmt/format.h>
#include <fmt/ranges.h>
#include <stdexcept>

Application::Application(std::unique_ptr<Storage> storage, std::unique_ptr<UI> interface)
    : m_storage(std::move(storage))
    , m_interface(std::move(interface))
{
    if (s_isInstantiated) {
        throw std::logic_error("May not instantiate more than one application!");
    }

    s_isInstantiated = true;
}

void Application::run()
{
    auto fileName = m_interface->promptFileChoice(fmt::format("{}: ", "Please enter the path to your transcript file"));
    auto major = m_interface->promptMajorChoice({"CS"});
    auto uniChoice = m_interface->promptUniversityChoice({"UCI", "UCSD", "UCLA"});
    auto courses = m_interface->promptCourseSelection({"CS1A", "CS1B", "MATH3A"});

    m_interface->display(fmt::format("{}", courses));
}

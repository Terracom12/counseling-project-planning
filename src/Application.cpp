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
    // Obtain transcript data
    auto transcriptFilePath = m_interface->promptFileChoice("Please enter the path to your transcript file: ");
    m_storage->loadTranscript(transcriptFilePath);

    auto uniDataFilePath = m_interface->promptFileChoice("Please enter the path to a university course database: ");
    m_storage->loadUniData(uniDataFilePath);

    auto uni = m_interface->promptUniversityChoice(m_storage->getValidUniNames());

    auto major = m_interface->promptMajorChoice(m_storage->getValidMajorNames(uni));
    auto courses = m_interface->promptCourseSelection(m_storage->getValidCourseNames(uni, major));

    m_interface->display("Application exiting!");
}

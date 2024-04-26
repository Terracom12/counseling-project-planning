#include "ui/UIBase.hpp"

/**
 * @brief Basic UI example. Parses data from stdin and displays it back to user.
 * 
 */
class ExampleUI final : public UI
{
public:
    std::string promptFileChoice(std::string_view msg) const override;
    std::string promptUniversityChoice(const StringList& validUniNames) const override;
    std::string promptMajorChoice(const StringList& validMajorNames) const override;
    StringList promptCourseSelection(const StringList& validCourseNames) const override;
    void display(std::string_view msg) const override;
};
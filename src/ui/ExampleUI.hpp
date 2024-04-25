#include "ui/UIBase.hpp"

class ExampleUI final : public UIBase
{
public:
    std::string promptFileChoice(std::string_view msg) const override;
    std::string promptUniversityChoice(const StringList& validUniNames) const override;
    std::string promptMajorChoice(const StringList& validMajorNames) const override;
    StringList promptCourseSelection(const StringList& validCourseNames) const override;
    void display(std::string_view msg) const override;
};
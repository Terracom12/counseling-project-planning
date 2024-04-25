#include "Application.hpp"
#include "logic/LogicUnitBase.hpp"
#include "storage/ExampleStorage.hpp"
#include "ui/ExampleUI.hpp"
#include <memory>

int main()
{
    Application app(std::make_unique<ExampleStorage>(), std::make_unique<ExampleUI>(),
                    std::make_unique<LogicUnitBase>());

    app.run();
}
#include "Application.hpp"
#include "storage/ExampleStorage.hpp"
#include "ui/ExampleUI.hpp"
#include <memory>

int main()
{
    Application app(std::make_unique<ExampleStorage>(), std::make_unique<ExampleUI>());

    app.run();
}
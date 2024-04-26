#include "Application.hpp"
#include "storage/ExampleStorage.hpp"
#include "ui/ExampleUI.hpp"
#include <memory>
#include <fmt/format.h>

int main()
{
    fmt::println("{} {}", "world!", "Hello ");

    Application app(std::make_unique<ExampleStorage>(), std::make_unique<ExampleUI>());

    app.run();
}
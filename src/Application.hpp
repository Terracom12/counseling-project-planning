#pragma once

#include "storage/StorageBase.hpp"
#include "ui/UIBase.hpp"
#include <memory>

// This would be much cleaner as a class template, but perhaps harder to understand

/**
 * @brief Main application instance; handles program runtime.
 *
 */
class Application
{
public:
    Application(std::unique_ptr<Storage> storage, std::unique_ptr<UI> interface);
    void run();

private:
    std::unique_ptr<Storage> m_storage;
    std::unique_ptr<UI> m_interface;

    /**
     * @brief Whether the application has been instantiated.
     *
     */
    inline static bool s_isInstantiated = false;
};
#pragma once

#include "logic/LogicUnitBase.hpp"
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
    Application(std::unique_ptr<StorageBase> storage, std::unique_ptr<UIBase> interface,
                std::unique_ptr<LogicUnitBase> logicUnit);
    void run();

private:
    std::unique_ptr<StorageBase> m_storage;
    std::unique_ptr<UIBase> m_interface;
    std::unique_ptr<LogicUnitBase> m_logicUnit;

    /**
     * @brief Whether the application has been instantiated.
     *
     */
    inline static bool s_isInstantiated = false;
};
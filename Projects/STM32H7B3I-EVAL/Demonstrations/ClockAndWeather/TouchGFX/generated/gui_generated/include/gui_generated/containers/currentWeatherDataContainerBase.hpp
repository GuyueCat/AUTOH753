/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef CURRENTWEATHERDATACONTAINERBASE_HPP
#define CURRENTWEATHERDATACONTAINERBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/Image.hpp>

class currentWeatherDataContainerBase : public touchgfx::Container
{
public:
    currentWeatherDataContainerBase();
    virtual ~currentWeatherDataContainerBase() {}
    virtual void initialize();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::TextArea windSpeed;
    touchgfx::TextArea windDirection;
    touchgfx::TextArea pressure;
    touchgfx::TextArea humidity;
    touchgfx::TextArea rain;
    touchgfx::TextAreaWithOneWildcard windSpeedValue;
    touchgfx::TextAreaWithOneWildcard windDirectionValue;
    touchgfx::TextAreaWithOneWildcard pressureVal;
    touchgfx::TextAreaWithOneWildcard humidityVal;
    touchgfx::TextAreaWithOneWildcard rainVal;
    touchgfx::Image rainIcon;
    touchgfx::Image windSpeedIcon;
    touchgfx::Image pressureIcon;

    /*
     * Wildcard Buffers
     */
    static const uint16_t WINDSPEEDVALUE_SIZE = 10;
    touchgfx::Unicode::UnicodeChar windSpeedValueBuffer[WINDSPEEDVALUE_SIZE];
    static const uint16_t WINDDIRECTIONVALUE_SIZE = 10;
    touchgfx::Unicode::UnicodeChar windDirectionValueBuffer[WINDDIRECTIONVALUE_SIZE];
    static const uint16_t PRESSUREVAL_SIZE = 5;
    touchgfx::Unicode::UnicodeChar pressureValBuffer[PRESSUREVAL_SIZE];
    static const uint16_t HUMIDITYVAL_SIZE = 4;
    touchgfx::Unicode::UnicodeChar humidityValBuffer[HUMIDITYVAL_SIZE];
    static const uint16_t RAINVAL_SIZE = 20;
    touchgfx::Unicode::UnicodeChar rainValBuffer[RAINVAL_SIZE];

private:

};

#endif // CURRENTWEATHERDATACONTAINERBASE_HPP

/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/wifiInfoSmallContainerBase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"

wifiInfoSmallContainerBase::wifiInfoSmallContainerBase() :
    flexButtonCallback(this, &wifiInfoSmallContainerBase::flexButtonCallbackHandler)
{
    setWidth(330);
    setHeight(60);

    wifiSSID.setPosition(20, 0, 222, 37);
    wifiSSID.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    wifiSSID.setLinespacing(0);
    Unicode::snprintf(wifiSSIDBuffer, WIFISSID_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID21).getText());
    wifiSSID.setWildcard(wifiSSIDBuffer);
    wifiSSID.setTypedText(touchgfx::TypedText(T_SINGLEUSEID20));

    encryption.setPosition(20, 29, 222, 25);
    encryption.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    encryption.setLinespacing(0);
    Unicode::snprintf(encryptionBuffer, ENCRYPTION_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID23).getText());
    encryption.setWildcard(encryptionBuffer);
    encryption.setTypedText(touchgfx::TypedText(T_SINGLEUSEID22));

    signalStrengthIcon.setXY(268, 6);
    signalStrengthIcon.setBitmap(touchgfx::Bitmap(BITMAP_WIFI_LOW_ICON_2X_ID));

    listButtonOverlay.setBoxWithBorderPosition(0, 0, 0, 0);
    listButtonOverlay.setBorderSize(5);
    listButtonOverlay.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(0, 102, 153), touchgfx::Color::getColorFrom24BitRGB(0, 153, 204), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
    listButtonOverlay.setPosition(0, 0, 330, 60);
    listButtonOverlay.setAction(flexButtonCallback);

    add(wifiSSID);
    add(encryption);
    add(signalStrengthIcon);
    add(listButtonOverlay);
}

void wifiInfoSmallContainerBase::initialize()
{
	
}

void wifiInfoSmallContainerBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &listButtonOverlay)
    {
        //Interaction1
        //When listButtonOverlay clicked call virtual function
        //Call elementSelected
        elementSelected();
    }
}

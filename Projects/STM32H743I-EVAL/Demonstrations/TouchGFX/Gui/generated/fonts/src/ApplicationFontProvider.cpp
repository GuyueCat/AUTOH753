/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <fonts/ApplicationFontProvider.hpp>
#include <fonts/GeneratedFont.hpp>
#include <texts/TypedTextDatabase.hpp>

touchgfx::Font* ApplicationFontProvider::getFont(touchgfx::FontId typography)
{
    switch (typography)
    {
    case Typography::DEMOVIEW_MCULOAD_TEXT:
        // RobotoCondensed_Bold_18_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[0]);
    case Typography::DEMOVIEW_MCULOAD_TEXT_TINY:
        // RobotoCondensed_Regular_13_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[1]);
    case Typography::GAME_2048_TEXT:
        // Asap_Regular_20_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[2]);
    case Typography::GAME_2048_MCU_LOAD:
        // Asap_Regular_13_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[3]);
    case Typography::CAROUSELHEADLINE:
        // Asap_Bold_otf_20_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[4]);
    case Typography::CAROUSELTEXT:
        // Asap_Regular_16_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[5]);
    case Typography::ANIMATINGBUTTONSTEXT:
        // Asap_Regular_18_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[6]);
    case Typography::KNIGHT_MCU_LOAD:
        // PatuaOne_Regular_16_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[7]);
    case Typography::KNIGHT_POPUP:
        // PatuaOne_Regular_30_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[8]);
    case Typography::CONTROLS_HEADLINE:
        // RobotoCondensed_Bold_30_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[9]);
    case Typography::CONTROLS_READOUT:
        // RobotoCondensed_Regular_54_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[10]);
    case Typography::CONTROLS_READOUT_SUBSCRIPT_SMALL:
        // Roboto_Medium_30_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[11]);
    case Typography::CONTROLS_READOUT_LARGE:
        // RobotoCondensed_Regular_110_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[12]);
    case Typography::CONTROLS_READOUT_SUBSCRIPT_MEDIUM:
        // RobotoCondensed_Bold_60_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[13]);
    case Typography::MEDIA_PLAY_TIME:
        // NotoSans_Regular_22_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[14]);
    case Typography::EQUALIZER_BAND_READOUT:
        // RobotoCondensed_Bold_20_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[15]);
    case Typography::EQUALIZER_LOUDNESS_READOUT:
        // RobotoCondensed_Regular_40_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[16]);
    case Typography::AUDIO_PLAYLIST_LARGE:
        // RobotoCondensed_Regular_20_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[17]);
    case Typography::AUDIO_PLAYLIST_SMALL:
        // RobotoCondensed_Regular_18_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[18]);
    case Typography::AUDIO_FOLDER_NAME:
        // RobotoCondensed_Bold_22_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[19]);
    case Typography::SETTINGS_DIGITAL_CLOCK:
        // RobotoCondensed_Bold_48_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[20]);
    case Typography::SETTINGS_MAIN_DATE_YEAR:
        // RobotoCondensed_Bold_30_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[9]);
    case Typography::SETTINGS_MAIN_DATE_MONTH:
        // RobotoCondensed_Bold_30_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[9]);
    case Typography::SETTINGS_MAIN_DATE_DAY:
        // RobotoCondensed_Bold_90_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[21]);
    case Typography::HOMECONTROL_LOGIN_HEADER:
        // RobotoCondensed_Bold_22_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[19]);
    case Typography::HOMECONTROL_LOGIN_BANNER:
        // RobotoCondensed_Regular_22_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[22]);
    case Typography::HOMECONTROL_PRECENT_VALUE:
        // RobotoCondensed_Bold_32_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[23]);
    case Typography::HOMECONTROL_PERCENT_SIGN:
        // Roboto_Bold_22_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[24]);
    case Typography::DATE_PICKER:
        // RobotoCondensed_Regular_38_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[25]);
    case Typography::DATE_PICKER_SELECTED:
        // RobotoCondensed_Bold_42_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[26]);
    default:
        return 0;
    }
}

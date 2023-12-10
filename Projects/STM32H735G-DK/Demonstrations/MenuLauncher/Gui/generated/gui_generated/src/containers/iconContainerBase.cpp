/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/iconContainerBase.hpp>
#include "BitmapDatabase.hpp"

iconContainerBase::iconContainerBase()
{
    setWidth(200);
    setHeight(200);

    iconCenter.setXY(0, 0);
    iconCenter.setBitmap(touchgfx::Bitmap(BITMAP_ICON_CENTER_01_ID));
    iconCenter.setWidth(200);
    iconCenter.setHeight(200);
    iconCenter.setBitmapPosition(0.000f, 0.000f);
    iconCenter.setScale(1.000f);
    iconCenter.setCameraDistance(1000.000f);
    iconCenter.setOrigo(100.000f, 100.000f, 1000.000f);
    iconCenter.setCamera(100.000f, 100.000f);
    iconCenter.updateAngles(0.000f, 0.000f, 0.000f);
    iconCenter.setRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);

    iconSides.setXY(0, 0);
    iconSides.setBitmap(touchgfx::Bitmap(BITMAP_SMALL_ICON_CENTER_03_ID));
    iconSides.setWidth(200);
    iconSides.setHeight(200);
    iconSides.setBitmapPosition(50.000f, 50.000f);
    iconSides.setScale(2.000f);
    iconSides.setCameraDistance(1000.000f);
    iconSides.setOrigo(100.000f, 100.000f, 1000.000f);
    iconSides.setCamera(100.000f, 100.000f);
    iconSides.updateAngles(0.000f, 0.000f, 0.000f);
    iconSides.setRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    iconSides.setAlpha(0);

    add(iconCenter);
    add(iconSides);
}

void iconContainerBase::initialize()
{
	
}

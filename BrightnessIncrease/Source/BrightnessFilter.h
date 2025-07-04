#pragma once

#include "IImageFilter.h"

////////////////////////////////////////////////////////////////////////////////
//
/// Фильтр для увеличения яркости изображения.
/**
    Увеличивает значения каналов RGB каждого пикселя на заданную величину,
    не превышая значение 255.
 */
////////////////////////////////////////////////////////////////////////////////
class BrightnessFilter : public IImageFilter {
private:
    int m_amount;  ///< Величина, на которую увеличивается яркость.

public:
    /// Конструктор фильтра
    explicit BrightnessFilter(int amount) : m_amount(amount) {
    }

    /// Применяет фильтр к изображению
    virtual void Apply(ImageData* image) const override;
};

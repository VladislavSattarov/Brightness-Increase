#pragma once

#include "IImageFilter.h"

class BrightnessFilter : public IImageFilter {
private:
    int m_amount;

public:
    explicit BrightnessFilter(int amount) : m_amount(amount) {
    }

    virtual void Apply(ImageData& image) const override;
};

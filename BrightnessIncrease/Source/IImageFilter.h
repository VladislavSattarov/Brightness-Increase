#pragma once

#include "ImageData.h"

class ImageData;

class IImageFilter {
public:
    virtual ~IImageFilter() = default;
    virtual void Apply(ImageData& image) const = 0;
};

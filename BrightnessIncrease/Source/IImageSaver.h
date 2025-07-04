#pragma once
#include "ImageData.h"
class ImageData;

class IImageSaver {
public:
    virtual ~IImageSaver() = default;
    virtual bool Save(const ImageData& image, const std::string& path) const = 0;
};

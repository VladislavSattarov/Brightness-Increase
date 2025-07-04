#pragma once
#include "ImageData.h"
#include <optional>

class ImageData;

class IImageLoader {
public:
    virtual ~IImageLoader() = default;
    virtual std::optional<ImageData> Load(const std::string& path) const = 0;
};

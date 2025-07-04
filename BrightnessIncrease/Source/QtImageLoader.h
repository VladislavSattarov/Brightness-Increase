#pragma once

#include "IImageLoader.h"

class QtImageLoader : public IImageLoader {
public:
    virtual std::optional<ImageData> Load(const std::string& path) const override;
};

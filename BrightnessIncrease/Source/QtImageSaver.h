#pragma once

#include "IImageSaver.h"

class QtImageSaver : public IImageSaver {
public:
    virtual bool Save(const ImageData& image, const std::string& path) const override;
};

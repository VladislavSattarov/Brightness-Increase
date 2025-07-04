#include <QCoreApplication>

#include <iostream>
#include <memory>
#include <string>
#include <optional>

#include "Source/BrightnessFilter.h"
#include "Source/QtImageSaver.h"
#include "Source/QtImageLoader.h"

int main() {
    std::string inPath, outPath;
    int brightness;

    std::cout << "Enter input file path: ";
    std::getline(std::cin, inPath);

    std::cout << "Enter output file path: ";
    std::getline(std::cin, outPath);

    std::cout << "Enter brightness increase: ";
    std::cin >> brightness;

    std::unique_ptr<IImageLoader> loader = std::make_unique<QtImageLoader>();
    std::unique_ptr<IImageSaver> saver = std::make_unique<QtImageSaver>();

    auto imageOpt = loader->Load(inPath);
    if (!imageOpt) {
        std::cout << "Failed to load image from: " << inPath << std::endl;
        return 1;
    }

    auto& image = imageOpt.value();
    BrightnessFilter filter(brightness);
    filter.Apply(&image);

    if (!saver->Save(image, outPath)) {
        std::cout << "Failed to save image to: " << outPath << std::endl;
        return 1;
    }

    std::cout << "Image processed and saved to: " << outPath << std::endl;

    return 0;
}

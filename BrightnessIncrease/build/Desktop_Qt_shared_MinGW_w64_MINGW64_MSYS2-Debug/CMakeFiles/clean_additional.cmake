# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "BrightnessIncrease_autogen"
  "CMakeFiles\\BrightnessIncrease_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\BrightnessIncrease_autogen.dir\\ParseCache.txt"
  )
endif()

# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\HangManQT_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\HangManQT_autogen.dir\\ParseCache.txt"
  "HangManQT_autogen"
  )
endif()

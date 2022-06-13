set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_compile_options("/std:c++20")

add_library(DateInfo STATIC DateInfo.cxx)
set_target_properties(DateInfo
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_SOURCE_DIR}/lib"
    )

add_library(DateInfoShared SHARED DateInfo.cxx)
set_target_properties(DateInfoShared
    PROPERTIES
    RUNTIME_OUTPUT_NAME "DateInfo"
    RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_SOURCE_DIR}/dll"
    )

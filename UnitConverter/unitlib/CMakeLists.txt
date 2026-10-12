aux_source_directory(src DIR_LIB_SRCS)
add_library(unitlib ${DIR_LIB_SRCS})
target_include_directories(unitlib
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
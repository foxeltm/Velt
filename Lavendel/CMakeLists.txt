
file(GLOB_RECURSE ENGINE_SOURCES
        "${CMAKE_SOURCE_DIR}/Lavendel/src/*.cpp"
        "${CMAKE_SOURCE_DIR}/Lavendel/src/*.h"
        "${CMAKE_SOURCE_DIR}/Lavendel/include/*.h"
)

add_library(Lavendel SHARED ${ENGINE_SOURCES})


add_subdirectory(vendor/spdlog)
add_subdirectory(vendor/glfw)
add_subdirectory(vendor/volk)
add_subdirectory(vendor/glm)


find_package(Vulkan REQUIRED)
if (Vulkan_FOUND)
    message(STATUS "Vulkan include dir: ${Vulkan_INCLUDE_DIRS}")
    target_include_directories(Lavendel PRIVATE ${Vulkan_INCLUDE_DIRS})
    target_link_libraries(Lavendel PRIVATE ${Vulkan_LIBRARIES})
endif()

target_include_directories(Lavendel PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

set_target_properties(Lavendel PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
)

target_compile_definitions(Lavendel PRIVATE
        $<$<CONFIG:Debug>:LV_DEBUG>
        $<$<CONFIG:Release>:LV_RELEASE>
        $<$<CONFIG:Dist>:LV_DIST>
        LV_BUILD_DLL
)


target_include_directories(Lavendel
        PUBLIC
        ${CMAKE_SOURCE_DIR}/Lavendel/vendor/spdlog/include/
        ${CMAKE_SOURCE_DIR}/Lavendel/vendor/glfw/include/
        ${CMAKE_SOURCE_DIR}/Lavendel/vendor/glm/
        ${CMAKE_SOURCE_DIR}/Lavendel/src/
)

add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

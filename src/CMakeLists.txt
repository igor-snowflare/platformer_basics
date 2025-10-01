# Collect all .cpp files recursively
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS *.cpp)

# Expose them to parent CMakeLists
set(SRC_FILES ${SRC_FILES} PARENT_SCOPE)
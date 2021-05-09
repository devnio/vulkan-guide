# Make CMake work on MacOs

# Install sdl locally
Follow Unix terminal installation steps: https://wiki.libsdl.org/Installation

- Get a copy of the source code, either from Mercurial or an official tarball or whatever (I downloaded the source code (.zip file) here https://www.libsdl.org/download-2.0.php).
- Make a separate build directory (SDL will refuse to build in the base of the source tree).
- Run the configure script to set things up.
- Run "make" to compile SDL.
- Run "make install" to install your new SDL build on the system.

# Update the CMakeLists.txt
Change from https://github.com/pr0g/vulkan-guide/tree/starting-point, with additional target_compile_features(imgui PRIVATE cxx_std_14).

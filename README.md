# Velt Game Engine

Velt is a 2D/3D game engine powered by the Vulkan API. The project architecture is heavily inspired by modern engines such as Hazel, Unity, and the Source Engine, focusing on high-performance rendering and a modular development workflow.

While the primary focus is currently on Vulkan, Velt is designed with an abstraction layer to facilitate the future implementation of other modern graphics APIs. This includes plans for Metal to provide native macOS support and Direct3D 12 for optimized Windows compatibility, though these backends are not planned for the immediate future.

---

### Roadmap to Beta
The first beta release of Velt is scheduled once the following core features and systems are fully implemented:

* **Vulkan Renderer:** A functioning 2D renderer utilizing modern Vulkan pipelines and command buffers.
* **Editor Environment:** A usable editor for scene composition, entity manipulation, and resource management.
* **Scripting Engine:** A basic C# scripting backend to allow for high-level logic implementation and rapid prototyping.
* **Audio System:** A fundamental audio engine for handling sound effects and music playback.
* **Sprite Animation:** A dedicated system for managing frame-based 2D animations and state transitions.
* **Physics:** Integration of the Box2D engine to provide stable and performant 2D physics simulations.

---

### Compiling from Source

#### 1. Dependencies
To build Velt from source, ensure your development environment includes the following:
* **CMake:** For project configuration and build automation.
* **C++ Compiler:** A modern compiler with C++20 support (e.g., MSVC 2022, GCC, or Clang).
* **LunarG Vulkan SDK:** Must include the necessary headers, libraries, and shader compilation tools (glslc).

#### 2. Project Setup
Velt uses platform-specific scripts to automate the configuration process. Navigate to the project root directory and execute the appropriate script for your operating system:
* **Windows:** Execute `Setup.bat`
* **Unix-like:** Execute `Setup.sh`

#### 3. Compilation
Once the project files and build systems have been generated:
* **Windows:** Open the generated Visual Studio 2022 solution file (`.sln`) and compile using the "Build Solution" command.
* **Unix-like:** Navigate to the build directory and run `make all`.

#### 4. Execution
Following a successful compilation, the Velt binaries will be available in the output directory.

---

### Project Links
* **Website:** [https://velt.theodll.me](https://velt.theodll.me)
* **Engine Inspiration:** [Hazel Engine](https://hazelengine.com), [Unity](https://unity.com), [Valve Software](https://valvesoftware.com)

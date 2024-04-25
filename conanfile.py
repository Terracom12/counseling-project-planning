from conan import ConanFile  # type: ignore
from conan.tools.cmake import CMake, CMakeDeps, CMakeToolchain, cmake_layout  # type: ignore

# ??? Generated through `conan new cmake_exe`
# TODO: Configure


class CounselingProjectRecipe(ConanFile):
    name = "Counseling Project"
    version = "0.0.1"
    package_type = "application"

    # Optional metadata
    license = "<Put the package license here>"
    author = "<Put your name here> <And your email here>"
    url = "<Package recipe repository url here, for issues about the package>"
    description = "<Description of Counseling Project package here>"
    topics = ("<Put some tag here>", "<here>", "<and here>")

    # Binary configuration
    settings = "os", "compiler", "build_type", "arch"

    generators = "CMakeDeps", "VirtualRunEnv"

    # Sources are located in the same place as this recipe, copy them to the recipe
    exports_sources = "CMakeLists.txt", "src/*"

    # Check the documentation for the rest of the available attributes

    # The requirements method allows you to define the dependencies of your recipe
    def requirements(self):
        # Each call to self.requires() will add the corresponding requirement
        # to the current list of requirements
        # Uncommenting this line will add the zlib/1.2.13 dependency to your project
        # self.requires("zlib/1.2.13")
        self.requires("cmake/[>=3.15]")
        self.requires("fmt/10.2.1")
        self.test_requires("catch2/3.5.4")

    def layout(self):
        self.folders.generators = "build/conan"
        # cmake_layout(self, build_folder="build/conan")

    def generate(self):
        tc = CMakeToolchain(self)
        tc.user_presets_path = False
        tc.generate()

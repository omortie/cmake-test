# CMake Test Project

### Agenda
This project agenda is to qualify Morteza Sherafati on the CMake job task.

### Flow
* **mat** executable: receives user input parameters and returns the result of matrix method in the 'cgcustommath' library
* **cgcustommath** library: an interface shared library to add and multiply identity 
matrix using eigen's array

### Dependency
[Eigen library](https://gitlab.com/libeigen/eigen)

# How-To

## Build

**Note:** *run the following command in project root directory after ```clone```*

```git submodule update --init```

### Windows
You have to install msvc-compiler on you Windows machine first and then
try the following steps in order to build the project [follow this documentation](./docs/VSBuild.md)

### Mac
*Dependencies:*

* XCode installed on the system
* CMake installed and added to the environment PATH

Run these commands in order to create XCode project:

```cd scripts```

```chmod +x ./create-xcode-project.sh```

```./create-xcode-project.sh```

then open the ```cmake-test.xcodeproj``` with XCode installed on your machine and build the application

## Install
To create installers from the application First please build the project using 'Release' configurations

### Windows
*Dependencies:*

* **MSBuild.exe** in your environment PATH
* [**Wix Toolset**](https://wixtoolset.org/docs/wix3/) installed with Visual Studio Extension
* Python in your environment PATH

then please run the following commands to make installer using provided Python script:

```cd scripts```

```python create-installer-win.py```

If everything goes right You can find your installer in ```installer/installer/bin/Release/installer.msi```

### Mac

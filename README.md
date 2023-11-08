# generic-controller

Interface library to separate concerns during compilation and runtime in C.
Represents object with abilities to send command and data streams in a synchronous manner.

This is a [G2EPM](https://github.com/grzegorz-grzeda/g2epm) library.

## How to compile and link it?

Just include this directory in your CMake project.

Example `CMakeLists.txt` content:
```
...

add_subdirectory(<PATH TO THIS LIBRARY>)

target_link_libraries(${PROJECT_NAME} PUBLIC generic-controller)

...
```

# Copyright
This library was written by G2Labs Grzegorz Grzęda, and is distributed under MIT Licence. Check the `LICENSE` file for
more details.
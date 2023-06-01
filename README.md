# LibCxx SIMD: Single Header Library 

Welcome to the single-header implementation of the LibCxx SIMD library. This library provides efficient SIMD (Single Instruction, Multiple Data) operations in C++, following the guidelines set by the [N4808 draft](https://wg21.link/N4808).

This simplified, single-header version of the library is tailored for ease of testing and seamless integration with C++ projects.

For more context, we encourage you to check out the [original implementation](https://github.com/plctlab/llvm-project/tree/simd_for_upstream) as well as the [upstream discussion](https://reviews.llvm.org/D144362).

__Disclaimer:__ The single-header version hasn't been thoroughly tested for compatibility with all projects. We highly recommend using the [Compiler Explorer](https://godbolt.org/z/o6n4oY3x5) for a first-hand testing experience.

## Quickstart

### Requirements

To utilize this library, ensure that your C++ compiler supports C++17 or higher.

## Testing with Compiler Explorer

A convenient way to test the library is by using the [Compiler Explorer](https://godbolt.org/z/o6n4oY3x5). Simply insert the GitHub link to the header file in your test script. This will enable you to experiment with different compiler flags and settings, while simultaneously observing the corresponding assembly output.

## How to Use

We highly value your feedback and contributions. If you encounter any unexpected behavior or difficulties when integrating this file into your repository, please open an issue. We'll work to resolve it promptly.

For a concise usage example, consider the following:

In the `src/` directory, there is a file named [main.cc](./src/main.cc). This file demonstrates a simple matrix multiplication operation. To observe the result, run the following commands:
```
mkdir build
cd build
cmake ..
./simd_demo
```

To incorporate this into your project, please refer to the example code below:
```cpp
#include "simd.h"

// Insert your code here, then compile with -std=c++17 or a higher version
```

For more in-depth instructions on how to leverage SIMD operations in your code, please consult the [N4808 draft](https://wg21.link/N4808).


## License

This project is licensed under the Apache License V2.0. For more information, please see the LICENSE file included in the repository.

## Acknowledgments

This project builds on the [N4808 draft](https://wg21.link/N4808) for C++ SIMD operations.

Inspiration for using the Compiler Explorer for testing was drawn from the [VcDevel/std-simd](https://github.com/VcDevel/std-simd) repository on GitHub.


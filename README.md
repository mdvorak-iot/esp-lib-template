# lib_template

[![build](https://github.com/mdvorak-iot/esp-lib-template/actions/workflows/build.yml/badge.svg)](https://github.com/mdvorak-iot/esp-lib-template/actions/workflows/build.yml)

TODO Description

## Usage

To reference this library by your project, add it as git submodule, using command

```shell
git submodule add https://github.com/mdvorak-iot/esp-lib-template.git components/lib_template
```

and include either of the header files

```c
#include <lib.h>
```

For full example, see [lib_template_example_main.c](./example/main/lib_template_example_main.c).

## Development

Prepare [ESP-IDF development environment](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/index.html#get-started-get-prerequisites)
.

Configure example application with

```
cd example/
idf.py menuconfig
```

Flash it via (in the example dir)

```
idf.py build flash monitor
```

As an alternative, you can use [PlatformIO](https://docs.platformio.org/en/latest/core/installation.html) to build and
flash the example project.

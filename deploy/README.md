## How to create an ipk for NI LinuxRT distros

### Dependencies ###
- opkg-utils (to build ipk)
- libxml2 (should be already installed on NILRT)

### Steps to build ###

cd into build directory

- `cmake .. -DCMAKE_BUILD_TYPE=Release`
- `cmake --build . --target all`
- `cmake --install . --prefix ../deploy/libed247/usr/local/ed247`

then cd into deploy directory ( `cd../deploy`)

- update **libed247/CONTROL/control** fild to the correct version number
- `opkg-build libed247`
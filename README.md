# customizable-monetdb
Use specialized small part of monetdb library as you desired

1. Firstly install dependencies and build monetdb:

```bash
sudo apt install bison flex
sudo apt install pkg-config
cd MonetDB
mkdir build
cd build
cmake -DCMAKE_INSTALL_PREFIX=. ..
cmake --build . -j
cmake --build . --target install

```

2. Then, write your code to test.c and build out-of-tree:

```bash
cd customizable-monetdb
mkdir build
cd build
cmake -DMONETDB_PROJECT_DIR=../MonetDB -DMONETDB_BUILD_DIR=../MonetDB/build ..
cmake --build . ## dont use -j here because of race condition
```

3. You can run created test executable in your build/bin directory:

```bash
cd bin
./test
```

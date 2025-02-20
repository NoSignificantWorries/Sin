# Cmake версия

По умолчанию используется float версия, для сборки с типом double необходимо установить флаг `-DUSE_DOUBLE=ON`.

Пример сборки по умолчанию (с float):
```
cmake -S. -B build
cmake --build build
./build/main
```

Пример сборки с double типом:
```
cmake -S. -B build -DUSE_DOUBLE=ON
cmake --build build
./build/main
```


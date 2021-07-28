# fsls

This is a simple c++ program (an exercise to learn c++) to emulate the ls linux
command functionality.

## Getting started

First clone the program

```sh
cd ~
mkdir repo
cd repo
git clone https://github.com/AlphaTechnolog/fsls.git
# Change the pwd into fsls folder
cd fsls
```

## Requirements

- **make**: in your path as make.
- **g++**: in your path as g++, if not, set the CC variable in the `Makefile`.

## Compiling

To compile first set the pwd to the fsls folder:

```sh
cd ~/repo/fsls
```

Now compile it using the `make` command:

```sh
make
```

It command drop a file named `fsls` into the `fsls` git repository project:

```sh
ls ~/repo/fsls
fsls
fsls.cpp
fsls.o
Makefile
README.md
```

## Usage

To use, see this command help:

```sh
./fsls -h
usage: ./fsls [-h] dir (default = ./) -l
```

### Flags help

The flag `-h` show the help log.

The flag `-l` show the hidden files.

The param `dir` specify the dir to analyze, default = ./

### Behavior guide

If you execute:

```sh
./fsls
```

It show the list of the files in `./`

If you execute:

```sh
./fsls -l
```

It show the list of the files in `./` (with hidden files)

If you execute:

```sh
./fsls ~ -l
```

It show the list of the files in `~` (with hidden files)

If you execute:

```sh
./fsls ~
```

It show the list of the files in `~`
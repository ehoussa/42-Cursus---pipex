# Pipex Project

The Pipex project is a system engineering project at 42 Network that aims to mimic the functionality of the shell's pipe (`|`) command using basic file descriptor manipulation and process execution.

## Table of Contents

- [Project Overview](#project-overview)
- [Project Structure](#project-structure)
- [Usage](#usage)
- [Example](#example)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goal of the project is to create a program called `pipex` that takes four arguments:

1. A file to be used as input (`infile`).
2. The first command (`cmd1`).
3. The second command (`cmd2`).
4. A file to be used as output (`outfile`).

The `pipex` program should then execute the commands `cmd1` and `cmd2` sequentially, using file descriptors to redirect the output of `cmd1` to `cmd2`, and finally outputting the result to `outfile`.

## Project Structure

The project consists of the following files:

1. **pipex.c**: Contains the main logic for the `pipex` program.
2. **libft**: A library of utility functions (similar to the `libft` project) that may be used in `pipex`.
3. **Makefile**: Defines compilation rules and dependencies for building the `pipex` executable.

## Usage

To compile the `pipex` program, follow these steps:

1. **Clone the repository:**

    ```bash
    git clone https://github.com/ehoussa/42-Cursus---pipex/
    cd 42-Cursus---pipex
    ```

2. **Compile the program:**

    ```bash
    make
    ```

    This will compile the `pipex` program and create an executable file called `pipex`.

3. **Run `pipex` with arguments:**

    ```bash
    ./pipex infile "cmd1" "cmd2" outfile
    ```

    Replace `infile`, `cmd1`, `cmd2`, and `outfile` with actual file names and commands.

## Example

Assume you have two commands, `ls -l` and `grep .c`, and you want to run them sequentially on input from `infile` and output to `outfile`. You would run:

```bash
./pipex infile "ls -l" "grep .c" outfile

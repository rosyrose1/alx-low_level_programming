Makefile sets a set of rules to determine which parts of a program need to be recompile, and issues command to recompile them. • Makefile is a way of automating software building procedure and other complex tasks with dependencies. • Makefile contains: dependency rules, macros and suffix(or implicit) rules.

## Technologies
* Scripts written in Bash 4.3.11(1)
* C files are compiled using `gcc 4.8.4`
* Tested on Ubuntu 14.04 LTS
* Version of `make`: GNU Make 3.81

## Files

| Filename | Description |
| -------- | ----------- |
| `0-Makefile` | Builds an executable with `all` rule |
| `1-Makefile` | Builds an executable specifying a compiler and source files (`CC` and `SRC` variables) |
| `2-Makefile` | Builds an executable using `CC`, `SRC`, `OBJ` and `NAME` variables |
| `3-Makefile` | Builds an executable using `clean`, `oclean`, `fclean` and `re` rules, and `CC`, `SRC`, `OBJ`, `NAME` and `RM` variables |
| `4-Makefile` | Builds an executable using `clean`, `oclean`, `fclean` and `re` rules, and `CC`, `SRC`, `OBJ`, `NAME`, `RM` and `CFLAGS` variables  |
| `5-island_perimeter.py` | Function that returns the perimeter of an island described in `grid` list |
| `100-Makefile` | Complete Makefile with all of the variables and rules previously mentioned |

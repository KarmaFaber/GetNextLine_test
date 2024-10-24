# Description

This test only prints the lines that come in the texts provided. It does not check for memory leaks or other faults. 

The change of BUFFER_SIZE has to be done in Makefile:

```shell
CFLAGS      := -Wall -Wextra -Werror -D BUFFER_SIZE=42 
```


### Tests list:

* 1_test_text_own.c
* 2_test_1char.c
* 3_test_empty.c
* 4_test_lines_around_10.c
* 5_test_variable_nls.c
* 6_test_only_nl.c
* 7_test_giant_line.c
* 8_test_giant_line_nl.c
* 9_test_multiple_nl.c
* 10_test_one_line_no_nl.c
* 11_test_read_error.c
* 12_test_fd_cero.c


### Texts list 
(from https://github.com/xicodomingues/francinette):

* 1_text_own.txt
* 2_1char.txt
* 3_empty.txt
* 4_lines_around_10.txt
* 5_variable_nls.txt
* 6_only_nl.txt
* 7_giant_line.txt
* 8_giant_line_nl.txt
* 9_multiple_nl.txt
* 10_one_line_no_nl.txt
* 11_read_error.txt


# Commands
Make is executed int the <b>GetNextLine/test</b> path. 

Compile tests:
```shell
make 
```

Run test:
```shell
./gnl_test
```

Compile tests with Valgrind:
```shell
make valgrind
```


## ➾ Contributing

* Check the open issues or open a new issue to start a discussion around your feature idea or the bug you found. 
* Fork the repository, make your changes, and add yourself to AUTHORS.md
* Send a pull request

## ➾ Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/your/project/tags). 


## ➾ Authors

* [Karma Faber](https://github.com/KarmaFaber). 


## ➾ License

This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or distribute this software, either in source code form or as a compiled binary, for any purpose, commercial or non-commercial, and by any means.

In jurisdictions that recognize copyright laws, the author or authors of this software dedicate any and all copyright interest in the software to the public domain. We make this dedication for the benefit of the public at large and to the detriment of our heirs and successors. We intend this dedication to be an overt act of relinquishment in perpetuity of all present and future rights to this software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.




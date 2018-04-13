//
//  main.c
//  Python_c_test
//
//  Created by William Crupi on 3/27/18.
//  Copyright © 2018 William Crupi. All rights reserved.
//

#include <stdio.h>
#include "/Library/Frameworks/Python.framework/Versions/3.6/include/python3.6m/Python.h"
int main(int argc, const char * argv[]) {
    // insert code here...
    Py_Initialize();
    printf("Hello, World!\n");
    PyRun_SimpleString("import sys\n");
    PyRun_SimpleString("print sys.builtin_module_names\n");
    PyRun_SimpleString("x = 'brave '+ 'sir robin'");
    PyRun_SimpleString("print(x)");

    return 0;
}

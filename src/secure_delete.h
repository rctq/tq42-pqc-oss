#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <memory.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

#include <pqc/delete.h>

struct error
{
    int code;
};

int file_delete(const char * filename);

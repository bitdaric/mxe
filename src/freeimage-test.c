/*
 * This file is part of MXE. See LICENSE.md for licensing information.
 */

#include <stdio.h>
#include <FreeImage.h>

int main(int argc, char* argv[])
{
    (void)argc;
    (void)argv;

    printf("FreeImage: %s\n", FreeImage_GetVersion());
    return 0;
}

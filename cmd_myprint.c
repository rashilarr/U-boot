#include <common.h>

#include <command.h>

static int do_myprint(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
    printf("\nThis is new command added in u-boot source code!\n\n");
}

/*****************************************************************************/
U_BOOT_CMD(
        myprint,
        1,
        1,
        do_myprint,
        "This function used to print the given statement\n",
        "Prints the printf statement\n"
);

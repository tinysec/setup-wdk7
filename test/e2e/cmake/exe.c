#include <stdint.h>
#include <windows.h>

/*
 * main is a minimal user-mode fixture entry point. The test only needs to prove
 * that WDK7 can compile and link an executable through the CMake toolchain.
 */
int main(void)
{
    uint64_t value = UINT64_C(42);

    /*
     * Returning success keeps the fixture focused on toolchain behavior rather
     * than runtime behavior.
     */
    return value == 42 ? 0 : 1;
}

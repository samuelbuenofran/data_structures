#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    wchar_t lightShade = 0x2592;
    wprintf(L"%lc\n", lightShade);
    
    
}

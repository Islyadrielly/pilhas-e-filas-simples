#include <stdio.h>
#include <windows.h>
#include <locale.h>

void acentos() {
// Define o valor das páginas de código UTF8 e padrão do Windows
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();

  // Define codificação como sendo UTF-8
  SetConsoleOutputCP(CPAGE_UTF8);
} 

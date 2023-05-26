
#include <windows.h> 
#include <string>
using namespace std;
using namespace System;

string getHello() {
    //HWND hWnd = GetForegroundWindow();
    //ShowWindow(hWnd, SW_HIDE);//Прячем консоль
    ////Светим меседжбокс
    //MessageBox(hWnd, L"Message text", L"Caption text", MB_OK);
    std::string S1 = "Hello";
    return S1;
}

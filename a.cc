#define XSTR(x) STR(x)
#define STR(x) #x
#pragma message "The value of OS: " XSTR(OS)
int main() { return 0; }

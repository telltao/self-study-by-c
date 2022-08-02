#include <stdio.h>

int main() {
    // 查看反编译命令为 在 LLDB中输入 disassemble
    // 查看 Memory View 选中 变量 右击 show Memory view
    for (int i = 0; i < 5; ++i) {
        printf("Hello, World!\n");
    }
    return 0;
}

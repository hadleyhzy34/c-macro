#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <queue>
#include <cstdlib>
#include <kaikeba/ktest.h>
using namespace std;

struct{
    void (*func)();
    const char *func_name;
}func_arr[100];
int func_cnt = 0;

std::list<*

void a##_##b();\
__attribute__((constructor)) \
void reg_##a##_##b(){ \
    add_test_func(a##_##b,#a "." #b); \
}

__attribute__((constructor))
void test(){
    printf("test: hellow world\n")
    return;
}

int main(){
    printf("main: hello world\n");
    return 0;
}
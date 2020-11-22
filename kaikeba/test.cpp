#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <queue>
#include <cstdlib>

using namespace std;

#define PI 3.1415926
#define S(a,b) a * b
//arg... multiple variables
#define LOG1(frm, args...){\
    printf("[%s:%d]",__FILE__,__LINE__);\
    printf(frm,##args);\
    printf("\n");\
}

int flag = 0;
#define LOG2(frm, args...) do{\
    if(flag == 0)break;\
    printf("[%s:%d]",__FILE__,__LINE__);\
    printf(frm,##args);\
    printf("\n");\
}while(0);

// #ifdef DEBUG
// #elif
// #endif


#define LOG(frm, args...) do{\
    if(flag == 0)break;\
    printf("[%s:%d]",__FILE__,__LINE__);\
    printf(frm,##args);\
    printf("\n");\
}while(0);

void test(){
    LOG("hello world");
    return;
}

#define CAT(a,b) a##b

int main(){
    int hugcaptain = 9999;
    CAT(hug,captain) = 10000;
    LOG("hugcaptain = %d", hugcaptain);
    printf("hello world\n");
    test();
    printf("%f\n",2*PI);
    printf("%d\n",S(3,4));
    printf("%d\n",S((3+9),4));
    int n;
    S(int,P) = &n;
    printf("__LINE__ = %d\n", __LINE__);
    printf("__FILE__ = %s\n", __FILE__);
    printf("__func__ = %s\n", __func__);
    printf("__PRETTY_FUNCTION__ = %s\n", __PRETTY_FUNCTION__);
    return 0;
}
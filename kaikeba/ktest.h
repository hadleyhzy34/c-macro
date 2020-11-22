#ifndef _KTEST_H
#define _KTEST_H

//封装
#define EXPECT(a,comp,b){\
    if (!((a) comp (b))){\
    printf("error\n");\
    }\
}

#define EXPECT_EQ(a,b) EXPECT(a, == ,b)
#define EXPECT_NE(a,b) EXPECT(a, != ,b)
#define EXPECT_EQ(a,b) EXPECT(a, == ,b)
#define EXPECT_EQ(a,b) EXPECT(a, == ,b)
#define EXPECT_EQ(a,b) EXPECT(a, == ,b)
#define EXPECT_EQ(a,b) EXPECT(a, == ,b)

#define COLOR(msg, code) "\033[0;1;" #code "m" msg "\033[0m"
#define RED(msg) COLOR(msg, 31)
#define RED(msg) COLOR(msg, 32)
#define RED(msg) COLOR(msg, 33)
#define RED(msg) COLOR(msg, 34)

#endif
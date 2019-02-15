//
//  Macro.h
//  DQObjectCMaster
//
//  Created by wondertek on 2019/1/25.
//  Copyright © 2019年 deqing. All rights reserved.
//

#import <Foundation/Foundation.h>
//static inline
//static int isValidate(int id) __attribute__ ((always_inline));
//以inline的方式编译的会，会把该函数的code拷贝到每次调用该函数的地方。而static会让生成的二进制文件中没有清晰的符号表，让逆向的人很难弄清楚逻辑。
//引入内联函数是为了解决函数调用效率的问题
//
//由于函数之间的调用，会从一个内存地址调到另外一个内存地址，当函数调用完毕之后还会返回原来函数执行的地址。函数调用会有一定的时间开销，引入内联函数就是为了解决这一问题。

//，没有使用`static inline修饰的内联函数汇编代码中，会出现 call 指令！这就是区别！调用call指令就是就需要：
//- (1)将下一条指令的所在地址（即当时程序计数器PC的内容）入栈
//- (2)并将子程序的起始地址送入PC（于是CPU的下一条指令就会转去执行子程序）。
//1.使用inline修饰的函数，在编译的时候，会把代码直接嵌入调用代码中。就相当于用#define 宏定义来定义一个add 函数那样！与#define的区别是:
//1)#define定义的格式要有要求，而使用inline则就行平常写函数那样，只要加上`inline即可！
//2)使用#define宏定义的代码，编译器不会对其进行参数有效性检查，仅仅只是对符号表进行替换。
//3）#define宏定义的代码，其返回值不能被强制转换成可转换的适合的转换类型。


//__attribute__用法
//1、deprecated
//- (void)method1:( NSString *)string __attribute__((deprecated("使用#method2")));
//- (void)method12 DEPRECATED_ATTRIBUTE; //DEPRECATED_ATTRIBUTE是系统的宏

//2、unavailable
//@property (strong,nonatomic) id var1 NS_UNAVAILABLE;
//- (void)method9 NS_UNAVAILABLE;
//- (void)method10 UNAVAILABLE_ATTRIBUTE;
//- (void)method11 __attribute__((unavailable("不能用，不能用，不能用")));

//3.cleanup
//static void blockCleanUp(__strong void(^*block)(void)) {
//    (*block)();
//}
//__strong void(^block)(void) __attribute__((cleanup(blockCleanUp), unused)) = ^{
//
//};

//4、availability
//指定变量（方法）的使用版本范围
//- (void)method4 NS_DEPRECATED_IOS(2_0, 3_0,"不推荐这个方法");
//- (void)method5 CF_DEPRECATED_IOS(4_0, 5_0,"不推荐就不推荐");
//- (void)method6 __attribute__((availability(ios,introduced=3_0,deprecated=7_0,message="3-7才推荐使用")));
//- (void)method7 __attribute__((availability(ios,unavailable,message="iOS平台你用个屁啊")));
//- (void)method8 __attribute__((availability(ios,introduced=3_0,deprecated=7_0,obsoleted=8_0,message="3-7才可以用，8平台上不能用")));

//5、overloadable
//用在C的函数上实现像java一样方法重载

//6、objc_designated_initializer
//指定内部实现的初始化方法
//NS_DESIGNATED_INITIALIZER展开就是：__attribute__((objc_designated_initializer))
//当一个类存在方法带有NS_DESIGNATED_INITIALIZER属性时，它的NS_DESIGNATED_INITIALIZER方法必须调用super的NS_DESIGNATED_INITIALIZER方法。它的其他方法（非NS_DESIGNATED_INITIALIZER）只能调用self的方法初始化

//7、objc_subclassing_restricted
//不能有子类
//__attribute__((objc_subclassing_restricted)) //Final类 ,java的final关键字

//8、objc_requires_super
//子类重写这个方法的时候，必须调用[super xxx]
//#define NS_REQUIRES_SUPER __attribute__((objc_requires_super))
//- (void)method2 __attribute__((objc_requires_super));

//__builtin_expect指令
#define likely(x) __builtin_expect(!!(x), 1) //x很可能为真
#define unlikely(x) __builtin_expect(!!(x), 0) //x很可能为假

//通过这种方式，编译器在编译过程中，会将可能性更大的代码紧跟着起面的代码，从而减少指令跳转带来的性能上的下降。
NS_ASSUME_NONNULL_BEGIN

@interface Macro : NSObject

@end

NS_ASSUME_NONNULL_END

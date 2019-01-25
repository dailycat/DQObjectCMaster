//
//  Macro.h
//  DQObjectCMaster
//
//  Created by wondertek on 2019/1/25.
//  Copyright © 2019年 deqing. All rights reserved.
//

#import <Foundation/Foundation.h>
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
NS_ASSUME_NONNULL_BEGIN

@interface Macro : NSObject

@end

NS_ASSUME_NONNULL_END

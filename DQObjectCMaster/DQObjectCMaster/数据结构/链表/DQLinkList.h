//
//  DQLinkList.h
//  DQObjectCMaster
//
//  Created by wondertek on 2019/1/28.
//  Copyright © 2019年 deqing. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DQListNode;
/**
 模拟链表实现
 */
@interface DQLinkList : NSObject

/** 数组长度 */
@property (assign , nonatomic) NSUInteger size;

/** 数组初始化 */
+ (instancetype)array;

/** 通过一个 number 数组返回一个链表 */
- (instancetype)initLiknedArrayWithNunbers:(NSArray *)numbers;

/** 添加元素 */
- (void)addObject:(NSObject *)obj;

/** 替换元素 */
- (void)replaceNode:(DQListNode *)old withNode:(DQListNode *)update;

/** 移除指定元素 */
- (void)remove:(NSObject *)obj;

/** 移除指定索引元素 */
- (void)removeAtIndex:(NSInteger)index;

/** 获取指定位置的值 */
- (NSObject *)objectAtIndex:(NSInteger)index;

/** 获取第一个节点 */
- (DQListNode *)getFirstListNode;

/** 获取最后换一个节点 */
- (DQListNode *)getLastListNode;

/** 获取指定位置节点 */
- (DQListNode *)getListNodeAtIndex:(int)index;

/** 打印所有节点 */
- (void)printAllListNode;

@end


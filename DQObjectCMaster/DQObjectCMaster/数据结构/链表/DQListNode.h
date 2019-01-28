//
//  DQListNode.h
//  DQObjectCMaster
//
//  Created by wondertek on 2019/1/28.
//  Copyright © 2019年 deqing. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/**
 模拟链表实现
 */
@interface DQListNode : NSObject

/** 上个节点 */
@property (weak , nonatomic) DQListNode *previous;

/** 下个节点 */
@property (weak , nonatomic) DQListNode *next;

/** 当前节点内容 */
@property (strong , nonatomic) id content;

/** int */
@property(nonatomic, assign) int value;

/** 打印从当前节点开始之后所有的节点数据 */
- (void)printAllListNode;

@end

NS_ASSUME_NONNULL_END

//
//  DQListNode.m
//  DQObjectCMaster
//
//  Created by wondertek on 2019/1/28.
//  Copyright © 2019年 deqing. All rights reserved.
//

#import "DQListNode.h"

@implementation DQListNode

- (int)value {
    if (_content != nil && [_content isKindOfClass:NSClassFromString(@"NSNumber")]) {
        return [(NSNumber *)_content intValue];
    }
    return 0;
}

// 打印从当前节点开始之后所有的节点数据
- (void)printAllListNode {
    DQListNode *curNode = self;
    while (curNode) {
        DQListNode *preNode = curNode.previous;
        DQListNode *nextNode = curNode.next;
        NSLog(@"curNode=%p, value=%d, preNode=%p, nextNode=%p",curNode, curNode.value, preNode, nextNode);
        curNode = curNode.next;
    }
}

@end

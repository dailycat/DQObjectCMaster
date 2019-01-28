//
//  DQStack.m
//  DQObjectCMaster
//
//  Created by wondertek on 2019/1/28.
//  Copyright © 2019年 deqing. All rights reserved.
//

#import "DQStack.h"

@interface DQStack()

// 存储栈数据
@property (nonatomic, strong) NSMutableArray *stackArray;

@end

@implementation DQStack

#pragma mark - push

- (void)push:(id)obj {
    [self.stackArray addObject:obj];
}

#pragma mark - get

- (id)popObj {
    if ([self isEmpty]) {
        return nil;
    } else {
        id lastObject = self.stackArray.lastObject;
        [self.stackArray removeLastObject];
        return lastObject;
    }
}

-(id)topObj {
    if ([self isEmpty]) {
        return nil;
    } else {
        return self.stackArray.lastObject;
    }
}

- (BOOL)isEmpty {
    return !self.stackArray.count;
}

- (NSInteger)stackLength {
    return self.stackArray.count;
}

#pragma mark - 遍历

// 从栈底开始遍历
-(void)enumerateObjectsFromBottom:(StackBlock)block {
    [self.stackArray enumerateObjectsWithOptions:NSEnumerationConcurrent usingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        block ? block(obj) : nil;
    }];
}

// 从顶部开始遍历
-(void)enumerateObjectsFromtop:(StackBlock)block {
    [self.stackArray enumerateObjectsWithOptions:NSEnumerationReverse usingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        block ? block(obj) : nil;
    }];
}

// 所有元素出栈，一边出栈一边返回元素
-(void)enumerateObjectsPopStack:(StackBlock)block {
    __weak typeof(self) weakSelf = self;
    NSUInteger count = self.stackArray.count;
    for (NSUInteger i = count; i > 0; i --) {
        if (block) {
            block(weakSelf.stackArray.lastObject);
            [self.stackArray removeLastObject];
        }
    }
}

#pragma mark - remove

-(void)removeAllObjects {
    [self.stackArray removeAllObjects];
}

#pragma mark - lazy

- (NSMutableArray *)stackArray {
    if (!_stackArray) {
        _stackArray = [NSMutableArray array];
    }
    return _stackArray;
}


@end

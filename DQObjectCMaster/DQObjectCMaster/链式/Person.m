//
//  Person.m
//  DQObjectCMaster
//
//  Created by wondertek on 2019/1/25.
//  Copyright © 2019年 deqing. All rights reserved.
//

#import "Person.h"

@implementation Person

- (void(^)(void))method1 {
    
    void (^method)(void) = ^{
        
    };
    return method;
//    return ^{
//
//    };
}

- (Person *(^)())method2 {
    Person *(^method)() = ^{
        return self;
    };
    return method;
}

- (Person *(^)(NSString *param))method {
    Person *(^method)() = ^(NSString *param) {
      
        return self;
    };
    return method;
    
    return ^(NSString *param) {
        return self;
    };
}

@end

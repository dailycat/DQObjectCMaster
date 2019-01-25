//
//  Person.h
//  DQObjectCMaster
//
//  Created by wondertek on 2019/1/25.
//  Copyright © 2019年 deqing. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Person : NSObject

- (void(^)())method1;

- (Person *(^)())method2;

- (Person *(^)(NSString *param))method;



@end

NS_ASSUME_NONNULL_END

//
//  ViewController.m
//  DQObjectCMaster
//
//  Created by wondertek on 2018/12/18.
//  Copyright © 2018年 deqing. All rights reserved.
//

#import "ViewController.h"
#import <PromiseKit/PromiseKit.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [PMKPromise promiseWithResolver:^(PMKResolver resolve) {
        
    }];
    // Do any additional setup after loading the view, typically from a nib.
}




@end

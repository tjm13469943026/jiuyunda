//
//  ZXNetWork.h
//  WineShopping
//
//  Created by xinying on 2017/4/15.
//  Copyright © 2017年 habav. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZXNetWork : NSObject

@property(nonatomic,assign)BOOL isNetReachable;

+ (instancetype)shareInstance;

- (void)initNetWork;

@end
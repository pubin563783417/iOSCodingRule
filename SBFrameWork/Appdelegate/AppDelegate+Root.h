//
//  AppDelegate+Root.h
//  MVVMFrameWork
//
//  Created by qyb on 2018/5/21.
//  Copyright © 2018年 qyb. All rights reserved.
//

#import "AppDelegate.h"
extern NSString *const kAppEnterMainWorkNotification;
@interface AppDelegate (Root)
+ (UIViewController *)applicationRoot;
@end

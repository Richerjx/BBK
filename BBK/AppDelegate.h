//
//  AppDelegate.h
//  BBK
//
//  Created by Seven on 14-11-26.
//  Copyright (c) 2014年 Seven. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BMapKit.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate,BMKGeneralDelegate>

@property BOOL isForeground;
@property (strong, nonatomic) UIWindow *window;

@end


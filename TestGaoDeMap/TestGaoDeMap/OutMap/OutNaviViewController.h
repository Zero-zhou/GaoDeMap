//
//  OutNaviViewController.h
//  TestGaoDeMap
//
//  Created by libo on 15/10/9.
//  Copyright © 2015年 libo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GaoMapHeaders.h"

@class ViewController;

/**
 *  导航规划
 */

@interface OutNaviViewController : UIViewController

@property (nonatomic ,weak) ViewController *parentVC;

@property (nonatomic, readwrite) BOOL show;

/**
 *  返回事件回调
 */
@property (nonatomic,copy) void(^backBtnClicked)();

@end
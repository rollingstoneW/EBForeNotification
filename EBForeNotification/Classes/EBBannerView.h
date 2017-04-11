//
//  EBBannerView.h
//  iOS-Foreground-Push-Notification
//
//  Created by wuxingchen on 16/7/21.
//  Copyright © 2016年 57380422@qq.com. All rights reserved.
//

#import <UIKit/UIKit.h>

#define BannerStayTime 3
#define BannerSwipeUpTime 0.4
#define BannerSwipeDownTime 0.4

@interface EBBannerView : UIWindow

@property (nonatomic, retain) NSDictionary *userInfo;
@property (nonatomic, assign) BOOL isIos10;
@property (nonatomic, copy)   dispatch_block_t disappearedBlock;

- (void) removeWithAnimation;

@end


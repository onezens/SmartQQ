//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQVipDanmakuMenuView, UITextField;

@protocol QQVipDanmakuMenuViewDelegate <NSObject>
- (void)danmuMenu:(QQVipDanmakuMenuView *)arg1 sendDanMu:(NSString *)arg2 withColor:(NSString *)arg3;
- (void)danmuMenu:(QQVipDanmakuMenuView *)arg1 setDanmuDisplay:(_Bool)arg2;

@optional
- (void)danmuMenu:(QQVipDanmakuMenuView *)arg1 didBeginEditing:(UITextField *)arg2;
- (void)jumpToDanmuListView;
- (void)jumpToFinishTaskViewWithUrl:(NSString *)arg1 isBuySvip:(_Bool)arg2;
@end


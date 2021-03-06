//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVFunDrawingView, NSArray, NSDictionary, NSString, QQAVFloatWindow, UIColor, ViewInfo;

@protocol QQAVShowPanelRestructDelegate <NSObject>
- (QQAVFloatWindow *)getChatWindow;
- (ViewInfo *)getVideoViewInfoForUin:(NSString *)arg1 withType:(int)arg2;
- (void)onCameraSwapAnimationDone;
- (void)onImageDisplayDone;
- (void)onOpenGLInitFail;
- (void)onSmallViewTouch:(NSString *)arg1 withType:(int)arg2;
- (void)onVideoShowPanelMessageBarPressDelegate;
- (void)onVideoShowPanelOutAreaTouchDelegate;

@optional
- (void)drawingView:(AVFunDrawingView *)arg1 colorChaged:(UIColor *)arg2;
- (void)drawingView:(AVFunDrawingView *)arg1 didEndDrawUsingTool:(id <AVFunDrawingTool>)arg2;
- (void)drawingView:(AVFunDrawingView *)arg1 willBeginDrawUsingTool:(id <AVFunDrawingTool>)arg2;
- (NSArray *)getAllSmallView;
- (NSArray *)getAllViews;
- (ViewInfo *)getBigView;
- (NSString *)getNickName:(NSString *)arg1;
- (int)getVideoViewIndexForUin:(NSString *)arg1 withType:(int)arg2;
- (ViewInfo *)getVideoViewInfoAtIndex:(int)arg1;
- (_Bool)isMemoryWarning;
- (_Bool)isMulScreenMode;
- (void)onAVFunDrawingUsed;
- (void)onInviteViewTouchWithUin:(unsigned long long)arg1 andInviteId:(NSString *)arg2;
- (void)onSmallViewMoveEnd:(NSString *)arg1 withType:(int)arg2 withPosition:(int)arg3;
- (_Bool)onSwitchToBarAnimation;
- (void)onVideoShowPanelAntiTouchCancel;
- (void)onVideoShowPanelAntiTouchStart;
- (void)onVideoShowPanelAntiTouchStop;
- (void)refreshInviteViewAndSmallView;
- (void)reportDC1178:(NSDictionary *)arg1;
- (void)reportInvitOpName:(NSString *)arg1 withUseInfo:(NSDictionary *)arg2;
@end


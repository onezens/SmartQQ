//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QZJMaterialMaterialItem, UIImage;

@protocol QZLVStartLiveViewDelegate <NSObject>

@optional
- (void)checkLiveAuthentication;
- (void)didCountdownIsOver;
- (void)didLBSSwitchClicked;
- (void)didPermissionSwitchClicked;
- (void)didProtocolClicked;
- (void)didSetCoverClickedWithCoverImage:(UIImage *)arg1;
- (void)didStartLiveClicked;
- (void)didSwitchCameraClicked;
- (_Bool)isContiuneLive;
- (void)jumpToWebview:(NSString *)arg1;
- (UIImage *)liveCoverImage;
- (void)onStartCountDown;
- (void)presentPortal:(NSString *)arg1;
- (void)recordCameraSetting;
- (void)selectTheme:(QZJMaterialMaterialItem *)arg1;
- (void)showNoMicPrivilegeAlert;
- (void)showStartLiveCellularAlert:(_Bool)arg1;
- (void)startLiveLagTimer;
- (void)updateTheme;
@end


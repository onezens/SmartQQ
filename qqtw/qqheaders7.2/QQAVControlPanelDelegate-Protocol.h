//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol QQAVControlPanelDelegate <NSObject>
- (_Bool)isPanelHideable;
- (void)onControlPanelChangeToVideo:(_Bool)arg1;
- (void)onControlPanelShow:(_Bool)arg1;

@optional
- (_Bool)AnimateComplete:(int)arg1 nAntType:(int)arg2;
- (void)OnDisableBeautify;
- (_Bool)isMemoryWarning;
- (void)onBeautify:(float)arg1;
- (void)onControlPanelAntiTouchCancel;
- (void)onControlPanelAntiTouchStart;
- (void)onControlPanelAntiTouchStop;
- (void)onControlPanelLongPress;
- (void)onControlPanelShow:(_Bool)arg1 withSmallViewMove:(_Bool)arg2;
- (void)onDeviceLockAction;
- (void)onDisableAddMem;
- (void)onMSBackAction;
- (void)onPSTNCallAction;
- (void)onRechargeAction;
- (void)onReturn;
- (void)onTipsViewFrameChanged;
@end

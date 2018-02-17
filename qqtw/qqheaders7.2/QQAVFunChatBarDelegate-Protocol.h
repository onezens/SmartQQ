//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCGridVideoItem, MCTmplItem, NSDictionary, NSString, QQAVFunTempGridInteractiveItem;

@protocol QQAVFunChatBarDelegate <NSObject>
- (void)onAVFunChatClose;
- (void)onAVFunChatSelectDecorateItem:(MCTmplItem *)arg1 bindFilterPath:(NSString *)arg2;
- (void)onAVFunChatSelectDrawingItem:(MCGridVideoItem *)arg1;
- (void)onAVFunChatSelectDrawingType:(int)arg1;
- (void)onAVFunChatSelectInteractiveItem:(QQAVFunTempGridInteractiveItem *)arg1;
- (void)onAVFunChatSelectVoiceType:(int)arg1 enableLoopback:(_Bool)arg2;
- (void)onDecorateAction;
- (void)onDrawingAction;
- (void)onInteractiveAction;
- (void)onPicFixAction;
- (void)onPicFixValueChange:(float)arg1;
- (void)onPicFixValueEndChange;
- (void)onShowSupport:(NSString *)arg1;
- (void)onStopPersistAnimation;
- (void)onVoiceChangeAction;
- (void)onVoiceLoopbackAction:(_Bool)arg1;
- (void)reportDC1178:(NSDictionary *)arg1;
- (void)reportDC898:(NSString *)arg1 resv3:(NSString *)arg2 resv4:(NSString *)arg3;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQDynamicAvatarView;

@protocol QQDynamicAvatarViewDelegate <NSObject>

@optional
- (void)onDynamicAvatarPlayEnd:(QQDynamicAvatarView *)arg1;
- (void)onDynamicAvatarPlayFail:(QQDynamicAvatarView *)arg1;
- (void)onDynamicAvatarPlayStart:(QQDynamicAvatarView *)arg1;
- (void)onDynamicAvatarReadyToPlayOnce:(QQDynamicAvatarView *)arg1;
- (_Bool)shouldPlayOnceDynamicAvatar:(QQDynamicAvatarView *)arg1;
@end


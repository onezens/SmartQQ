//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, QQMutePlayer;

@protocol QQMutePlayerDelegate <NSObject>

@optional
- (void)onMutePlayer:(QQMutePlayer *)arg1 displayLayer:(CALayer *)arg2;
- (void)onMutePlayer:(QQMutePlayer *)arg1 frameIndex:(int)arg2;
- (void)onMutePlayer:(QQMutePlayer *)arg1 playStatusChange:(unsigned long long)arg2;
- (void)onMutePlayerEnd:(QQMutePlayer *)arg1;
- (void)onMutePlayerStart:(QQMutePlayer *)arg1;
@end


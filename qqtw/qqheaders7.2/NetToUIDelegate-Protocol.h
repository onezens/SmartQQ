//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@protocol NetToUIDelegate <NSObject>

@optional
- (void)onNotifyFail:(void *)arg1;
- (void)onNotifyFail:(NSString *)arg1 WithCMD:(int)arg2 Seq:(long long)arg3;
- (void)onNotifySuc:(NSData *)arg1;
- (void)onNotifySuc:(NSData *)arg1 WithCMD:(int)arg2 Seq:(long long)arg3;
@end

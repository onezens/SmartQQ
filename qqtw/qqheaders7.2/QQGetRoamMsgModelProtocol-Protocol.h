//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol QQGetRoamMsgModelProtocol <NSObject>

@optional
- (void)GetRoamMsg:(NSArray *)arg1;
- (void)GetRoamMsgError:(int)arg1 string:(NSString *)arg2;
- (void)GetRoamMsgFinish:(long long)arg1 hasMsg:(_Bool)arg2;
- (long long)getBreakTimeByDayBeginTime:(long long)arg1;
- (void)removeBreakTimeByDayBeginTime:(long long)arg1;
- (void)setRoamMsgBreak:(long long)arg1 dayBeginTime:(long long)arg2;
@end


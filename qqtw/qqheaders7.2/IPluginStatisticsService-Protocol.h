//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol IPluginStatisticsService <NSObject>
- (void)AddMsgLog:(NSString *)arg1;
- (void)AddStatisticsLog:(NSString *)arg1 clickPosition:(int)arg2 clickResult:(int)arg3;
- (void)SetDestType:(int)arg1;
- (void)SetMessageSource:(int)arg1;
- (void)upload;
@end


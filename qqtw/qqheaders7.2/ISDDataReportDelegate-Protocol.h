//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol ISDDataReportDelegate <NSObject>

@optional
- (unsigned int)OnGetServerTime;
- (void)OnReport:(NSString *)arg1 Result:(int)arg2;
- (void)OnReport:(NSString *)arg1 Result:(int)arg2 Pid:(unsigned int)arg3 SN:(NSString *)arg4;
@end


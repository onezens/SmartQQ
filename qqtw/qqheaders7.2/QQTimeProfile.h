//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQLockDictionary;

@interface QQTimeProfile : NSObject
{
    QQLockDictionary *_monitorDic;
    QQLockDictionary *_actionSDic;
}

+ (id)shareInstance;
- (void)beginMonitor:(id)arg1;
- (void)beginMonitor:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)endMonitor:(id)arg1;
- (void)getSystemLaunchTimeWithTotalTime:(double)arg1;
- (id)init;
- (void)uploadActionSDetail;

@end


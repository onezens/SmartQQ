//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface StrangerInfoManager : NSObject
{
    NSMutableDictionary *_dicStarngerInfo;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)shareInstance;
- (void)dealloc;
- (void)deleteCache:(id)arg1;
- (id)fetchInfo:(id)arg1;
- (_Bool)infoExpired:(id)arg1 field:(id)arg2;
- (id)init;
- (void)saveToDisk;
- (void)updateStrangerInfo:(id)arg1 field:(id)arg2 value:(id)arg3;

@end

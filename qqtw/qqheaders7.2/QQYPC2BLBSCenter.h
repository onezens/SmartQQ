//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQYPC2BLBSTaskMgr.h"

@class NSMutableSet, NSString;

@interface QQYPC2BLBSCenter : NSObject <QQYPC2BLBSTaskMgr>
{
    NSMutableSet *_unfinishedTasks;
}

- (void)asyncGetLBSInfo:(CDUnknownBlockType)arg1 poiCallback:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (void)onTaskFinish:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


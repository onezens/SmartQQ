//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface RPDebugCenter : NSObject
{
    NSMutableArray *_allNewAppInfos;
}

+ (id)shareCenter;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *allNewAppInfos; // @synthesize allNewAppInfos=_allNewAppInfos;
- (void)decorateOldInfoToNew:(id)arg1;
- (void)forceReconnect;
- (void)forceReconnectImpl;
- (id)getAllNewAppInfos;
- (void)globalDebugFunctions;
- (id)init;
- (void)postExceptopnNotification:(int)arg1 description:(id)arg2;
- (void)postNewRedPointComeNotification:(id)arg1;
- (void)testEnvAction:(id)arg1;
- (void)updateNewAppinfos:(id)arg1;
- (void)upgradeOldAppInfoToNewBy54Resturct:(id)arg1;

@end


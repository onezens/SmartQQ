//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCTempManagerDelegate.h"

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface QZAnimEffectMgr : NSObject <MCTempManagerDelegate>
{
    NSArray *_effectTempArray;
    NSDictionary *_effectTempDic;
    id <QZAnimEffectMgrDelegate> _selDelegate;
    NSMutableArray *_downloadList;
    _Bool _shouldReloadEffectList;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)animEffectQueue;
- (_Bool)didSelectAnimEffect:(id)arg1;
- (_Bool)downloadAnimEffect:(id)arg1;
- (void)downloadResource:(id)arg1;
- (void)downloadResourceFail:(id)arg1;
- (void)downloadResourceFail:(id)arg1 error:(id)arg2;
- (void)downloadResourceFinish:(id)arg1;
- (id)effectItemByName:(id)arg1;
- (id)emptyAnimEffectItem;
- (void)getDownloadList:(CDUnknownBlockType)arg1;
- (id)getEffectList;
- (id)init;
- (void)loadEffectList;
- (void)loadEffectListEx;
- (void)readyForUse;
- (void)retrieveAll;
- (void)setSelDelegate:(id)arg1;
- (void)updateDownloadResource:(id)arg1 progress:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

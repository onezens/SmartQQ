//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PersonalSignNetServiceProtocal.h"

@class NSMutableDictionary, NSString;

@interface PSFeedInfoLoader : NSObject <PersonalSignNetServiceProtocal>
{
    NSMutableDictionary *_completions;
    NSMutableDictionary *_requestingFeeds;
    int _xo;
}

+ (id)defaultLoader;
- (void).cxx_destruct;
- (id)init;
- (void)loadInfoForFeed:(struct RichStateModel *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notifyFinishFor:(struct RichStateModel *)arg1 success:(_Bool)arg2 error:(id)arg3;
- (id)requestDataForLoadInfo:(struct RichStateModel *)arg1;
- (void)requestFailForCommand:(id)arg1 seq:(int)arg2 errorCode:(int)arg3 errorTip:(id)arg4;
- (void)requestSuccessForCommand:(id)arg1 msg:(CDStruct_7895f40e)arg2;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *completions; // @dynamic completions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableDictionary *requestingFeeds; // @dynamic requestingFeeds;
@property(readonly) Class superclass;

@end


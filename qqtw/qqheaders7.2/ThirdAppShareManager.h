//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ThirdAppShareHandlerDelegate.h"

@class NSMutableArray, NSString;

@interface ThirdAppShareManager : NSObject <ThirdAppShareHandlerDelegate>
{
    NSMutableArray *_shareHandlerArray;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;
- (void)insertShareMsgModel:(id)arg1;
- (_Bool)isMsgModelInProcess:(id)arg1;
- (void)removeHandler:(id)arg1;
- (void)reportShareData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *shareHandlerArray; // @synthesize shareHandlerArray=_shareHandlerArray;
- (void)shareHandler:(id)arg1 shareModel:(id)arg2;
- (void)updateMsgFailState:(id)arg1;
- (void)updateSentStructureMessage:(id)arg1 sendType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


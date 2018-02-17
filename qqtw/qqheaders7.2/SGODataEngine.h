//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSArray, NSString, QQLockDictionary;

@interface SGODataEngine : NSObject <IEngineDispatchDelegate>
{
    QQLockDictionary *_entrySetting;
    NSArray *_selectedGroupList;
}

+ (id)sharedInstance;
- (MsgBody_ba4fc016 *)GenTextMsgBodyOfSendMsgReq:(id)arg1 message:(id)arg2;
- (id)createRequestData:(id)arg1 groupList:(id)arg2 atAll:(_Bool)arg3;
- (void)dealloc;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)getReportGroupList;
- (void)groupListV2Updated:(id)arg1;
- (id)init;
- (_Bool)isShowSuperGroupOwnerEntry;
- (void)notifyError:(id)arg1;
- (void)processRecievedMsg:(CDStruct_7895f40e)arg1;
- (_Bool)reqSuperGroupOwnerEntry;
- (void)rspSuperGroupOwnerEntry:(CDStruct_7895f40e)arg1;
- (void)saveEntrySetting;
@property(retain, nonatomic) NSArray *selectedGroupList; // @synthesize selectedGroupList=_selectedGroupList;
- (int)sendSuperGroupOwnerEntryReq:(unsigned long long)arg1 adminCount:(unsigned long long)arg2;
- (int)sendText:(id)arg1 groupList:(id)arg2 atAll:(_Bool)arg3;
- (id)superGroupOwnerEntryUrl;
- (id)superGroupOwnerEntryUrlWithType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

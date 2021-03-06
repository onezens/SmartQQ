//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSArray, NSString;

@interface QQChatBgManager : NSObject <IEngineDispatchDelegate>
{
    _Bool _isGroup;
    NSString *_uin;
    NSArray *_chatBgList;
}

+ (id)defaultManager;
- (id)IDArrayForAuth;
- (void)authChatBgs;
- (_Bool)cancelDownload:(id)arg1;
- (id)chatBgDirectoryPath;
@property(retain, nonatomic) NSArray *chatBgList; // @synthesize chatBgList=_chatBgList;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (unsigned long long)fileSizeForPath:(id)arg1;
- (id)getChatBgWithId:(id)arg1;
- (void)getChatBgWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)infoFromOldVersionWithID:(id)arg1;
- (id)infoWithID:(id)arg1;
- (id)init;
- (_Bool)isChatBgExist:(id)arg1;
@property(nonatomic) _Bool isGroup; // @synthesize isGroup=_isGroup;
- (void)notifyError:(id)arg1;
- (void)saveInfoModel:(id)arg1;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
- (void)syncAuthResultsToLocal:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQMessageReadConfirm : NSObject
{
    NSMutableDictionary *_readConfirmCache;
}

+ (id)sharedInstance;
- (void)dealloc;
- (id)getFilePath;
- (id)getReadConfirmCache;
- (long long)lastReadSeqForGroupCode:(id)arg1;
- (long long)lastReadTimeForUin:(id)arg1;
- (id)loadReadConfirm;
- (void)onAccountChange;
- (void)saveReadConfirm;
- (void)sendC2CMsgReadConfirm:(id)arg1;
- (void)sendC2CMsgReadConfirm:(id)arg1 reportUin:(id)arg2;
- (void)sendC2CMsgReadConfirm:(id)arg1 unReadConfirm:(double)arg2;
- (void)sendC2CMsgReadConfirm_CRM:(id)arg1 crmSig:(id)arg2;
- (void)sendC2CMsgReadConfirm_CRM:(id)arg1 reportUin:(id)arg2 crmSig:(id)arg3;
- (void)sendC2CMsgReadConfirm_CRM_Force:(id)arg1 crmSig:(id)arg2;
- (void)sendC2CMsgReadConfirm_CRM_Force:(id)arg1 reportUin:(id)arg2 crmSig:(id)arg3;
- (void)sendContactTmpMessageReadConfirm:(id)arg1;
- (void)sendGroupMsgReadConfirm:(id)arg1;
- (void)setGroupMsgReadSeqForQuickReply:(id)arg1 seq:(unsigned long long)arg2;
- (void)setLastReadSeqForGroup:(id)arg1 seq:(long long)arg2;
- (void)setLastReadTimeForUin:(id)arg1 time:(long long)arg2;
- (void)updateReportTimeByUin:(id)arg1 time:(long long)arg2;

@end


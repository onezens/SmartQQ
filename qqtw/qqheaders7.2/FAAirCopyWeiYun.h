//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAAirCopyBase.h"

@interface FAAirCopyWeiYun : FAAirCopyBase
{
}

- (void)airCopy2Discuss:(id)arg1;
- (void)airCopy2Group:(id)arg1;
- (void)airCopy2GroupInternal:(id)arg1 isPermanent:(_Bool)arg2;
- (void)airCopy2Offline:(id)arg1;
- (void)airCopy2WeiYun:(id)arg1;
- (void)airCopyToBizID:(unsigned int)arg1 taskInfo:(id)arg2;
- (void)cloudToFtnFileDidFailedWithDstID:(unsigned long long)arg1 cloudFileID:(id)arg2 error:(id)arg3;
- (void)cloudToFtnFileDidSuccessWithDstID:(unsigned long long)arg1 cloudFileID:(id)arg2 filePath:(id)arg3;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)onAirCopy2DiscussRequest:(id)arg1 withError:(id)arg2;
- (void)onAirCopy2GroupRequest:(id)arg1 withError:(id)arg2;
- (void)onAirCopy2OfflineRequest:(id)arg1 withError:(id)arg2;
- (void)onDiscussFeed:(const basic_string_075b6133 *)arg1 task:(id)arg2 retCode:(int)arg3;
- (void)onTaskTimeout:(id)arg1;
- (id)queryTaskWithDstID:(unsigned long long)arg1 fileID:(id)arg2;

@end


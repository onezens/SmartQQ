//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseEngine.h"

@class NSMutableDictionary;

@interface QZFeedDetailEngine : QZBaseEngine
{
    NSMutableDictionary *_attachInfoDict;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)deleteDetailCacheWithKey:(id)arg1;
- (id)getCommonRequestWithUin:(long long)arg1 feedModel:(id)arg2 from:(long long)arg3;
- (long long)getDetailCommentWithUin:(long long)arg1 feedModel:(id)arg2 from:(long long)arg3 more:(_Bool)arg4;
- (long long)getDetailFromQQWithQQUrl:(id)arg1 from:(long long)arg2;
- (long long)getDetailWithUin:(long long)arg1 feedModel:(id)arg2 from:(long long)arg3;
- (long long)getFeedCommentSequence:(id)arg1;
- (id)getLocalDetailFeedWithUin:(long long)arg1 Key:(id)arg2;
- (id)getLocalDetailFeedWithUin:(long long)arg1 feedModel:(id)arg2;
- (long long)handleGetCommentRequest:(struct JceObjectV2 *)arg1 uin:(long long)arg2 groupCode:(long long)arg3 feedModel:(id)arg4 from:(long long)arg5 more:(_Bool)arg6 fromDetail:(_Bool)arg7;
- (long long)handleGetDetailRequest:(struct JceObjectV2 *)arg1 uin:(long long)arg2 groupCode:(long long)arg3 feedModel:(id)arg4 from:(long long)arg5;
- (id)init;
- (_Bool)isCommentListLoadAll:(id)arg1;
- (_Bool)isShowCommentByHot:(id)arg1;
- (id)keyWithUin:(long long)arg1 groupCode:(long long)arg2 appID:(long long)arg3 cellID:(id)arg4 from:(long long)arg5;
- (void)postLocalDetailNotificationWithUin:(long long)arg1 feedModel:(id)arg2;
- (_Bool)saveDetailFeed:(id)arg1 withKey:(id)arg2;
- (long long)sendGetDetailRequest:(struct JceObjectV2 *)arg1;
- (id)setFeedCommentSequence:(long long)arg1 feedModel:(id)arg2;

@end

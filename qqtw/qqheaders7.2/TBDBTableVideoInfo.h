//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQQDBOperationBase.h"

@class NSString;

@interface TBDBTableVideoInfo : NSObject <IQQDBOperationBase>
{
}

- (void)batchDeleteVideoInfoWithUin:(id)arg1 inDb:(id)arg2;
- (void)batchDeleteVideoInfoWithVid:(id)arg1 inDb:(id)arg2;
- (void)createVideoInfoTable:(id)arg1;
- (void)deleteVideoInfoWithUin:(id)arg1 inDb:(id)arg2;
- (void)deleteVideoInfoWithVid:(id)arg1 inDb:(id)arg2;
- (id)getBatchVideoInfoWithUnionID:(id)arg1 inDb:(id)arg2;
- (id)getBatchVideoInfoWithVid:(id)arg1 inDb:(id)arg2;
- (unsigned long long)getTableSign;
- (void)updateTable:(id)arg1 inDb:(id)arg2;
- (void)updateVideoInfo:(id)arg1 withData:(id)arg2 withUid:(id)arg3 withCreateTime:(unsigned long long)arg4 inDb:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBBizNetworkLogicModel, TBErrorInfo;

@protocol TBBizNetworkLogicDelegate <NSObject>

@optional
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(TBBizNetworkLogicModel *)arg2 classModel:(id)arg3;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(TBBizNetworkLogicModel *)arg2 error:(TBErrorInfo *)arg3;
@end


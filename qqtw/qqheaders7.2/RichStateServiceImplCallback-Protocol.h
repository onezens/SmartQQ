//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError;

@protocol RichStateServiceImplCallback <NSObject>
- (void)onRequestDeleteRichHistoryCallback:(NSDictionary *)arg1;
- (void)onRequestDeleteRichSigCallback:(NSDictionary *)arg1;
- (void)onRequestGetHotRichStateCallback:(NSDictionary *)arg1;
- (void)onRequestGetRichHistoryListCallback:(NSDictionary *)arg1;
- (void)onRequestGetRichSigCallback:(NSDictionary *)arg1;
- (void)onRequestRichSyncShuoshuoCallback:(NSDictionary *)arg1;
- (void)onRequestSetRichSigCallback:(NSDictionary *)arg1;
- (void)onRequstGetLevelAccelerationCallBack:(long long)arg1 acceleration:(float)arg2;
- (void)onRequstGetLevelAccelerationError:(NSError *)arg1;
@end


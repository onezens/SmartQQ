//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol QROnlinePaymentDelegate <NSObject>
- (void)onlinePayCancle;
- (void)onlinePayFailure;
- (void)onlinePayPriceNotRight;
- (void)onlinePaySuccessWithBookId:(NSString *)arg1 chapters:(NSArray *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@protocol IMSFDelegate <NSObject>
- (void)OnMSFApnState:(NSDictionary *)arg1;
- (void)OnMSFBackgroundNetworkState:(NSDictionary *)arg1;
- (void)OnMSFIllegalGrayApp:(NSDictionary *)arg1;
- (void)OnMSFMsg:(NSDictionary *)arg1;
- (void)OnMSFNetworkState:(NSDictionary *)arg1;
- (void)OnMSFPacketState:(NSDictionary *)arg1;
- (void)OnMSFRecvDataFromBackend:(const char *)arg1 buf:(char *)arg2 bufLen:(int)arg3 seq:(int)arg4;
- (void)OnMSFSSOErrorStateResult:(NSDictionary *)arg1;
- (void)OnMSFSocketFlow:(NSArray *)arg1;
- (void)onHTTPStatus:(NSDictionary *)arg1;
- (void)onMSFServerTimeUpdated:(NSDictionary *)arg1;
@end


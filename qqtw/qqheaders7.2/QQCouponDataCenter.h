//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQCouponDataCenter : NSObject
{
    _Bool _couponsAreUpdating;
    _Bool _favourBusinessesAreUpdating;
}

+ (id)getInstance;
- (void)keepCouponWithBid:(unsigned int)arg1 sourceId:(unsigned int)arg2 cid:(unsigned int)arg3;
- (void)keepCouponWithBid:(unsigned int)arg1 sourceId:(unsigned int)arg2 cid:(unsigned int)arg3 city:(id)arg4 complete:(CDUnknownBlockType)arg5;
- (void)keepCouponWithBid:(unsigned int)arg1 sourceId:(unsigned int)arg2 cid:(unsigned int)arg3 complete:(CDUnknownBlockType)arg4;
- (void)removeCouponEntranceUpdateBadge;

@end

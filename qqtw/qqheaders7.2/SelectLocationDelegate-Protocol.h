//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SelectLocationDelegate <NSObject>
- (void)NotifySelectLocation:(struct CLLocationCoordinate2D)arg1 address:(NSString *)arg2;
- (void)NotifyUserSelectLocation:(struct CLLocationCoordinate2D)arg1 address:(NSString *)arg2;
@end

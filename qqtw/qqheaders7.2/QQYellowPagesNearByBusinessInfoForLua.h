//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQYPCoordinate2DForLua, QQYellowPagesBusinessRecord;

@interface QQYellowPagesNearByBusinessInfoForLua : NSObject
{
    QQYellowPagesBusinessRecord *_record;
    QQYPCoordinate2DForLua *_coordinate;
}

@property(retain, nonatomic) QQYPCoordinate2DForLua *coordinate; // @synthesize coordinate=_coordinate;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) QQYellowPagesBusinessRecord *record; // @synthesize record=_record;

@end


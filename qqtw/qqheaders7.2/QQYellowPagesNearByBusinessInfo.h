//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQYellowPagesBusinessRecord;

@interface QQYellowPagesNearByBusinessInfo : NSObject
{
    QQYellowPagesBusinessRecord *_record;
    struct CLLocationCoordinate2D _coordinate;
}

@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void)dealloc;
@property(retain, nonatomic) QQYellowPagesBusinessRecord *record; // @synthesize record=_record;

@end


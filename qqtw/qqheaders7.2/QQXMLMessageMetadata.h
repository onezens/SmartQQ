//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQXMLMessageMetadata : NSObject
{
    NSString *_publisherId;
    NSString *_publisherName;
    NSString *_subscribe_name;
    NSString *_subscribe_face;
    unsigned long long _publishTime;
    NSString *_more;
    NSString *_publishTip;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSString *more; // @dynamic more;
@property(nonatomic) unsigned long long publishTime; // @dynamic publishTime;
@property(retain, nonatomic) NSString *publishTip; // @dynamic publishTip;
@property(retain, nonatomic) NSString *publisherId; // @dynamic publisherId;
@property(retain, nonatomic) NSString *publisherName; // @dynamic publisherName;
@property(retain, nonatomic) NSString *subscribe_face; // @dynamic subscribe_face;
@property(retain, nonatomic) NSString *subscribe_name; // @dynamic subscribe_name;

@end


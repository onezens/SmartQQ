//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface ReadInjoy0xeeAppInPushInfo : NSObject
{
    unsigned int _msgBid;
    NSString *_msgId;
    unsigned long long _msgSeq;
    NSArray *_notifyInfoArray;
}

- (void).cxx_destruct;
- (id)description;
@property(nonatomic) unsigned int msgBid; // @synthesize msgBid=_msgBid;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(nonatomic) unsigned long long msgSeq; // @synthesize msgSeq=_msgSeq;
@property(retain, nonatomic) NSArray *notifyInfoArray; // @synthesize notifyInfoArray=_notifyInfoArray;

@end


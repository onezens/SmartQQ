//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface LongTextMsgModel : NSObject
{
    int packetCount;
    long long sessionId;
    NSMutableDictionary *msgItemDict;
}

- (void)appendMsgItem:(id)arg1 index:(int)arg2;
- (void)appendMsgItemWithType0x211:(id)arg1 index:(int)arg2;
- (void)dealloc;
- (id)getFullText;
- (id)init;
- (_Bool)isFullText;
@property(readonly, nonatomic) NSDictionary *msgItemDict; // @synthesize msgItemDict;
@property int packetCount; // @synthesize packetCount;
@property long long sessionId; // @synthesize sessionId;

@end


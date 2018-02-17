//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQPacketParameter.h"

@class NSArray, NSData, NSString;

@interface MsgMutilSendTextCheckParameter : NSObject <QQPacketParameter>
{
    NSData *_textContent;
    NSArray *_toUinList;
}

- (id)command;
- (void)dealloc;
- (id)initWithMsgContent:(id)arg1 andToUinList:(id)arg2;
- (id)serialize;
- (int)timeout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


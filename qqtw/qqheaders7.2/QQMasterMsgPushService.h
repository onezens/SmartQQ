//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQMasterMsgPushService : NSObject
{
}

+ (id)GetInstance;
- (void)notifyMsgPush:(id)arg1;
- (void)parseQQMasterRspMsgPush:(char *)arg1;
- (_Bool)parseRspMsgPush:(char *)arg1 dic:(id)arg2;

@end


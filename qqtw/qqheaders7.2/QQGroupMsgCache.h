//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSTimer, QQGroupChatViewController;

@interface QQGroupMsgCache : NSObject
{
    unsigned long long _maxTimestampRecordsCount;
    NSMutableArray *_timestampRecords;
    NSMutableArray *_cachedTips;
    NSTimer *_timer;
    _Bool _isCacheEnable;
    _Bool _isBusyState;
    QQGroupChatViewController *_groupChatViewController;
}

- (void)addNotification:(id)arg1;
- (void)addTimestamp:(double)arg1;
- (void)dealloc;
- (void)flush;
@property(nonatomic) QQGroupChatViewController *groupChatViewController; // @synthesize groupChatViewController=_groupChatViewController;
- (id)initWithGroupChatViewController:(id)arg1;
- (void)invalidate;
@property(nonatomic) _Bool isBusyState; // @synthesize isBusyState=_isBusyState;
@property(nonatomic) unsigned long long maxTimestampRecordsCount; // @synthesize maxTimestampRecordsCount=_maxTimestampRecordsCount;
- (void)pushNotifications:(id)arg1 sholdAnimation:(_Bool)arg2;

@end

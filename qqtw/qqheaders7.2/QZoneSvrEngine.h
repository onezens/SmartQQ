//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CIMQZoneSvrEngineDelegate.h"

@class NSMutableDictionary, NSString;

@interface QZoneSvrEngine : NSObject <CIMQZoneSvrEngineDelegate>
{
    struct QZonePacket *packet;
    struct QZoneUnPacket *unPacket;
    NSMutableDictionary *userInfoDic;
    int backSeq;
    int lastRequestTime_GetFriendFeed;
    int lastRequestTime_GetMyFeed;
    int lastRequestTime_GetMiniFeed;
}

+ (id)GetInstance;
- (void)CIMQZoneSvrEngine:(id)arg1 didRecievedMsg:(CDStruct_7895f40e)arg2;
- (void)GetKnrsList:(int)arg1 pn:(int)arg2 seq:(int *)arg3;
- (void)RecvQZoneData:(char *)arg1 length:(int)arg2 serviceCmd:(const char *)arg3 seq:(int)arg4;
- (void)SendFeedBack:(const char *)arg1 text:(const char *)arg2 fid:(const char *)arg3 yk:(unsigned int)arg4 ip:(const char *)arg5 info:(const char *)arg6 seq:(int *)arg7;
- (void)dealloc;
- (id)init;
- (void)setUin:(long long)arg1;
- (id)visitorWith:(struct Visitor *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


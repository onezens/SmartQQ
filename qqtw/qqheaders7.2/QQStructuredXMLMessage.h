//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQStructuredXMLMessage : NSObject
{
}

+ (_Bool)canShareStructuredPOIWithTargetType:(int)arg1;
+ (id)chatViewControllerForUin:(id)arg1;
+ (id)cutStringByMaxLength:(id)arg1 maxLength:(int)arg2;
+ (id)getMessageModelForForward:(struct CLLocationCoordinate2D)arg1 name:(id)arg2 address:(id)arg3 poiID:(id)arg4;
+ (int)messageTypeOfFriendType:(int)arg1;
+ (id)poiShareMessageWithCoordinate:(struct CLLocationCoordinate2D)arg1 name:(id)arg2 address:(id)arg3 poiID:(id)arg4;
+ (void)refreshAIO:(id)arg1 byAppendingMessages:(id)arg2;
+ (id)refreshAIOForUin:(id)arg1 aio:(id)arg2 byAppendingMessages:(id)arg3;
+ (id)sendPOIShareMessageTo:(id)arg1 uin:(id)arg2 type:(int)arg3 coordinate:(struct CLLocationCoordinate2D)arg4 name:(id)arg5 address:(id)arg6;
+ (id)sendPOIShareMessageTo:(id)arg1 uin:(id)arg2 type:(int)arg3 coordinate:(struct CLLocationCoordinate2D)arg4 name:(id)arg5 address:(id)arg6 poiID:(id)arg7;
+ (int)targetTypeOfChatViewController:(id)arg1;

@end


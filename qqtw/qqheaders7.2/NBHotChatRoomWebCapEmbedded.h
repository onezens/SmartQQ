//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NBWebCapEmbedded.h"

@class HotChatWebJoinRequest;

@interface NBHotChatRoomWebCapEmbedded : NBWebCapEmbedded
{
    HotChatWebJoinRequest *_hotChatJoinRequest;
}

- (void).cxx_destruct;
- (id)getDefaultViewControllers:(id)arg1;
- (id)getNearbyTabVC;
- (id)getRecommendNavi:(_Bool)arg1;
- (id)getSpecialViewControllers:(id)arg1;
@property(retain, nonatomic) HotChatWebJoinRequest *hotChatJoinRequest; // @synthesize hotChatJoinRequest=_hotChatJoinRequest;
- (id)pushHotChatVC:(id)arg1 directPush:(_Bool)arg2;
- (void)requestWebJoinHotChat:(id)arg1 directPush:(_Bool)arg2;
- (void)showGroupNumberWithModel:(id)arg1 isNewCreate:(_Bool)arg2 directPush:(_Bool)arg3;

@end


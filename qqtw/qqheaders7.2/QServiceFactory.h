//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IServiceFactory.h"

@class NSString;

@interface QServiceFactory : NSObject <IServiceFactory>
{
}

+ (id)sharedFactory;
- (id)GroupDBServie;
- (id)createAccountService;
- (id)createAlbumService;
- (id)createContactsService;
- (id)createFriendListService;
- (id)createIMService;
- (id)createMSFConnectService;
- (id)createMessageListService;
- (id)createNetworkFlowStatService;
- (id)createPacketDispatchService;
- (id)createRichStatusSignatureService;
- (id)createSearchConditionService;
- (id)createSynInfoService;
- (id)createUIForwardService;
- (id)createUrlImageService;
- (id)createVideoChatService;
- (void)destroyAccountService;
- (void)destroyAlbumService;
- (void)destroyAlertService;
- (void)destroyContactsService;
- (void)destroyFriendListService;
- (void)destroyIMService;
- (void)destroyMSFConnectService;
- (void)destroyMessageListService;
- (void)destroyMessageService;
- (void)destroyMusicPlayService;
- (void)destroyNetworkFlowStatService;
- (void)destroyPacketDispatchService;
- (void)destroyRichStatusSignatureService;
- (void)destroySearchConditionService;
- (void)destroySynInfoService;
- (void)destroyUIForwardService;
- (void)destroyUrlImageService;
- (void)destroyVideoChatService;
- (id)getAccountService;
- (id)getAlbumService;
- (id)getAlertService;
- (id)getClubInfoService;
- (id)getContactsService;
- (id)getCoreMotionService;
- (id)getFriendListService;
- (id)getFriendsVerifyMsgService;
- (id)getGroupAudioChatService;
- (id)getGroupVerifyMsgService;
- (id)getIMService;
- (id)getLTMultiAVService;
- (id)getMSFConnectService;
- (id)getMarketingAccountService;
- (id)getMessageListService;
- (id)getMessageService;
- (id)getMsgSpliteMergeService;
- (id)getMusicPlayService;
- (id)getNetworkFlowStatService;
- (id)getP2PAVService;
- (id)getPacketDispatchService;
- (id)getQQAVChatService;
- (id)getRichStatusSignatureService;
- (id)getSearchConditionService;
- (id)getSynInfoService;
- (id)getTeleHallService;
- (id)getTransportationService;
- (id)getUIForwardService;
- (id)getUrlImageService;
- (id)getUserSummaryService;
- (id)getVideoChatService;
- (_Bool)isRichStatusServiceAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


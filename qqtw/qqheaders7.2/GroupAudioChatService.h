//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVHttpEngineDelegate.h"
#import "CallkitDelegate.h"
#import "IEngineDispatchDelegate.h"
#import "IGroupAudioChatService.h"
#import "IQQDBOperationBase.h"
#import "QUIAlertPlusViewDelegate.h"
#import "QUIAlertViewDelegate.h"
#import "UIAccelerometerDelegate.h"

@class GroupAVMultiCheckViewController, GroupAudioRecvCallView, JoinConfModel, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, QQGroupVideoStartupViewController, QQMulAVChatBaseViewController, QQP2PShareAVChatViewController, QUIAlertView, RecvThirdCallAlert;

@interface GroupAudioChatService : NSObject <CallkitDelegate, QUIAlertPlusViewDelegate, QUIAlertViewDelegate, IGroupAudioChatService, IEngineDispatchDelegate, UIAccelerometerDelegate, AVHttpEngineDelegate, IQQDBOperationBase>
{
    QQMulAVChatBaseViewController *_newController;
    QQGroupVideoStartupViewController *_startupController;
    GroupAVMultiCheckViewController *_checkController;
    QQP2PShareAVChatViewController *_buddyController;
    GroupAudioRecvCallView *_recvCallView;
    RecvThirdCallAlert *_thirdCallAlert;
    NSTimer *_anotherCallAlertTimer;
    _Bool _IsInOneChatting;
    _Bool _IsInOneBuddyShare;
    int _entranceType;
    int _chattingBusinessType;
    int _chattingBusinessSubType;
    int _chattingRelationType;
    unsigned long long _chattingRelationID;
    int _PrepareBusinessType;
    int _PrepareBusinessSubType;
    int _PrepareChatingRelationType;
    unsigned long long _PrepareChatingRelationID;
    int _PreparePstnConfId;
    int _checkingRelationType;
    int _checkingBusinessType;
    unsigned long long _checkingRelationID;
    NSMutableDictionary *_audioChatStateDict;
    NSMutableArray *_offlineInviteArray;
    NSMutableDictionary *_audioChatStateDictBeforeLogin;
    NSMutableDictionary *_offlineInviteDictBeforeLogin;
    NSMutableDictionary *_selfRequestDict;
    NSTimer *_onLineNoticeTimer;
    NSTimer *_offlineInviteTimer;
    id _teleAlertView;
    QUIAlertView *_networdAlertView;
    NSMutableArray *_countryCodeList;
    NSMutableDictionary *_tinyID2OpenIDDict;
    _Bool _isSwitchFromP2P;
    unsigned long long _friUin;
    _Bool _openMic;
    _Bool _openSpeaker;
    _Bool _openCamera;
    _Bool _openFrontCamera;
    _Bool _peerPSGAbility;
    _Bool _isSwitchFromP2P_AV;
    _Bool _isSwitchFromP2P_Share;
    int _lastTime;
    _Bool _isPeerSwitch;
    _Bool _IsSuspend;
    _Bool _isAddingMem;
    unsigned long long _addMemberSource;
    NSTimer *_RecvCallTimer;
    NSTimer *_RecvBuddyShareCallTimer;
    _Bool _isOnBackGround;
    _Bool _isUserAudioPermission;
    NSMutableArray *_qqMessageQueue;
    id _lastMessage;
    _Bool _isCreatDiscuss;
    NSTimer *_ConnServerTimer;
    int _curNetstatus;
    unsigned int _lastKickoutTime;
    NSMutableDictionary *_invitePstnDict;
    NSMutableDictionary *_pstnDictRetain;
    NSMutableArray *_pstnTipsArray;
    NSTimer *_pstnTipsTimer;
    _Bool _needAddPstnUsers;
    int _inviteOriginal;
    _Bool _isBeReported;
    _Bool _isBeKicked;
    int _sessionType;
    int _inRoomSessionType;
    NSMutableDictionary *_randomAdditionDict;
    NSArray *_randomRoomList;
    int _postedRoomIndex;
    NSDate *_firstAttemptTime;
    double _randomPostTimeout;
    int _randomChatWebPostStatus;
    NSMutableDictionary *_getHeadUrlFailedRetryTimeDict;
    int _selfGender;
    NSDictionary *_consortiumInfo;
    _Bool _isNeedClickAcceptGroupAudio;
    _Bool _groupVideoChatting;
    int _pstnStrategy;
    JoinConfModel *_joinConfModel;
    int _quitReason;
    _Bool _isOfflineGroupVideoInvietePush;
    NSMutableArray *_pushSendflowerSeqs;
    struct dispatch_queue_s *_queueGroupAudioService;
    NSMutableDictionary *_msgCache;
    _Bool _isOpenSDKLiveStreaming;
    _Bool _isInitGiftWebView;
    _Bool _isRandomChatSpeakOn;
    _Bool _isCallFromOfficeCenter;
    _Bool _isCallFromTroopAioOfficecall;
    _Bool _isRecvArrangementCallFromOfficeCenter;
    _Bool _isRecvArrangementCallFromTroopAioOfficeCenter;
    _Bool _hasEnterGroupVideoStarupView;
    _Bool _isFirstStarup;
    QQMulAVChatBaseViewController *_preController;
    NSArray *_inviteGroupVideoMembers;
    NSString *_dealInviteId;
    NSMutableArray *_cancleInviteIdArray;
}

+ (id)GetInstance;
- (int)AcceptAfterQuit;
- (void)AcceptBuddyShare:(int)arg1 withRelationID:(unsigned long long)arg2;
- (int)AcceptGroupAudioChat:(int)arg1 withRelationID:(unsigned long long)arg2 withAVType:(int)arg3 withAVSubType:(int)arg4;
- (void)ActionAcceptBuddyShare;
- (void)ActionAcceptBuddyShareLogic;
- (int)ActionAcceptGroupAudioChat;
- (int)ActionAcceptGroupAudioChatLogic;
- (void)ActionConnectServerTimeout;
- (void)ActionKickedByOtherTerm;
- (void)ActionQuitBuddyShare:(id)arg1;
- (void)ActionQuitBuddyShare:(id)arg1 withReason:(id)arg2;
- (int)ActionQuitCheckGroupAudioChat:(id)arg1;
- (int)ActionQuitGroupAudioChat:(id)arg1;
- (int)ActionRequestGroupAudioChat;
- (void)AddDiscussGroupMem:(unsigned long long)arg1 ipNoAnswer:(id)arg2 pstnMember:(id)arg3 source:(unsigned long long)arg4;
- (void)AddDiscussGroupMemDone:(unsigned long long)arg1 withResult:(id)arg2;
- (void)AddHRConfMember:(unsigned long long)arg1 memUin:(unsigned long long)arg2;
- (int)CheckGroupAudioChat:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (int)CheckNetForAccept;
- (int)CheckNetForRequest;
- (int)CheckRecvCall:(int)arg1 businessType:(int)arg2 subType:(int)arg3 relationID:(unsigned long long)arg4;
- (void)CloseWhenNotified;
- (void)ConnectRoomTimeout;
- (void)ConnectServerTimeout;
- (int)DestroyGroupAudioChat:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (void)DoConnectRoomTimeout;
- (void)DoStopConRoomTimer;
- (id)GetConferenceNickName:(unsigned long long)arg1 memUin:(unsigned long long)arg2;
- (int)GetDynamicVolumn;
- (int)GetNetLevel;
- (int)GetNetState;
- (int)GetPstnStrategy:(int)arg1 businessType:(int)arg2 RelationID:(unsigned long long)arg3 friendsID:(id)arg4;
- (void)GetRoomInfo:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (int)GetVolume;
- (_Bool)GroupAudioBackGroudChatting;
- (int)IgnoreGroupAudioChat:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 byOtherTerm:(_Bool)arg4;
- (int)IgnoreGroupAudioChatByDissmissGroupAudioRecvCallView;
- (_Bool)InOneBuddyShare;
- (_Bool)InOneGroup;
- (void)InitGroupAudioChatService;
- (void)InitGroupAudioNotification;
- (void)InitLoginData;
- (void)InitTable;
- (int)InviteGroupAudioChat:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 friendsID:(id)arg4;
- (int)InviteGroupAudioChatWithTypes:(id)arg1 relationType:(int)arg2 businessType:(int)arg3 relationID:(unsigned long long)arg4 transPstn:(int)arg5 isSelfPstn:(_Bool)arg6 supplement:(_Bool)arg7;
- (int)InviteGroupAudioPSTNChat:(id)arg1;
- (_Bool)IsBuddyShareSuspend;
- (_Bool)IsBuddyShareVideoChat;
- (_Bool)IsBuddyShareWith:(unsigned long long)arg1;
- (_Bool)IsRecvingBuddyShare;
- (void)JoinConference:(int)arg1 subject:(id)arg2 bySig:(id)arg3 discUin:(id)arg4 roleName:(id)arg5 busiType:(id)arg6 isSelfInterviewer:(_Bool)arg7 type:(_Bool)arg8;
- (void)JoinConferenceFailed:(id)arg1;
- (void)KickedByOtherTerm;
- (void)MarkConnected:(unsigned long long)arg1 relationType:(int)arg2 businessType:(int)arg3;
- (void)MarkMute:(unsigned long long)arg1 relationType:(int)arg2 businessType:(int)arg3 mute:(_Bool)arg4;
- (int)MultiCheckGroupAudioChat:(unsigned long long)arg1 roomInfoArray:(id)arg2;
- (void)OnDiscussGroupNotification:(id)arg1;
- (void)OnDiscussGroupQuit:(id)arg1;
- (void)OnExitGroupResult:(id)arg1;
- (void)OnGetDiscussflyTicket:(id)arg1;
- (void)OnMSFNetworkApnStateNotification:(id)arg1;
- (void)OnMSFNetworkStateNotification:(id)arg1;
- (void)OnRecvLoginSuc;
- (int)OnStopRing;
- (void)OpenSelfCamera;
- (void)QuitBuddyShare:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 closeReasion:(int)arg4;
- (void)QuitBuddyShareEngine:(int)arg1 businessType:(int)arg2 withRelationID:(unsigned long long)arg3 withReason:(int)arg4;
- (void)QuitBuddyShareInterface;
- (int)QuitCheckGroupAudioChat:(_Bool)arg1;
- (void)QuitConference:(id)arg1;
- (int)QuitGroupAudioChat:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 closeReasion:(int)arg4;
- (int)QuitMultiCheckAnimated:(_Bool)arg1;
- (int)RandomEnterRoomFailed;
- (int)RecvGroupAudioChat:(int)arg1 businessType:(int)arg2 subType:(int)arg3 relationID:(unsigned long long)arg4 inviter:(unsigned long long)arg5 invitees:(id)arg6 isOnLine:(_Bool)arg7 isFromP2P:(int)arg8 clientSeq:(int)arg9 sendTime:(int)arg10;
- (_Bool)RecvInviteSwitchedFromP2P:(unsigned long long)arg1 withInviter:(unsigned long long)arg2 withP2PType:(int)arg3;
- (void)RecvQQMessage:(id)arg1;
- (void)RejectBuddyShare:(int)arg1 withRelationID:(unsigned long long)arg2;
- (int)RequestAfterQuit;
- (int)RequestConsortiumAfterQuit;
- (int)RequestGroupAudioChat:(int)arg1 withRelationID:(unsigned long long)arg2 withAVType:(int)arg3 withAVSubType:(int)arg4 pstnConfId:(int)arg5;
- (void)RequestMemberNickNames:(id)arg1 memUin:(id)arg2;
- (int)RequestRandomAfterQuit;
- (int)ReturnGroupAudioChat;
- (void)SendTransferMsg:(unsigned long long)arg1 type:(int)arg2 data:(char *)arg3 dataLen:(int)arg4;
- (int)StartConsortiumAVChat:(int)arg1 withRelationID:(unsigned long long)arg2 withAVType:(int)arg3 withAVSubType:(int)arg4 withEntrance:(int)arg5 info:(id)arg6;
- (int)StartMultiAVChat:(int)arg1 withRelationID:(unsigned long long)arg2 withAVType:(int)arg3 withAVSubType:(int)arg4 withEntrance:(int)arg5;
- (int)StartMultiAVChat:(int)arg1 withRelationID:(unsigned long long)arg2 withAVType:(int)arg3 withAVSubType:(int)arg4 withEntrance:(int)arg5 pstnConfId:(int)arg6;
- (int)StartMultiAVChatWithStrategy:(int)arg1 withRelationType:(int)arg2 withRelationID:(unsigned long long)arg3 withAVType:(int)arg4 withAVSubType:(int)arg5 withEntrance:(int)arg6 withMembers:(id)arg7;
- (int)StartMultiAVChatWithStrategy:(int)arg1 withRelationType:(int)arg2 withRelationID:(unsigned long long)arg3 withAVType:(int)arg4 withAVSubType:(int)arg5 withEntrance:(int)arg6 withMembers:(id)arg7 pstnConfId:(int)arg8;
- (int)StartRandomMultiAVChat:(int)arg1 withAVType:(int)arg2 withAVSubType:(int)arg3 withEntrance:(int)arg4 additionDict:(id)arg5;
- (void)StopConRoomTimer;
- (int)SuspendGroupAudioChat:(_Bool)arg1 needShowNoticeBar:(_Bool)arg2;
- (void)UnitGroupAudioChatService;
- (void)UnitGroupAudioNotification;
- (void)UpdateSelfChatState;
- (void)acceptByNoClickWhenGetThirdCall;
- (void)addHRConfMsg:(id)arg1 memUin:(id)arg2 name:(id)arg3 content:(id)arg4 type:(int)arg5;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedKeyWord:(id)arg2;
- (id)annoyInfoAssemblingWithsURL:(id)arg1 sName:(id)arg2 rURL:(id)arg3 rName:(id)arg4;
- (void)appendQuitGroupAudioChatMsg;
@property(retain, nonatomic) NSMutableArray *cancleInviteIdArray; // @synthesize cancleInviteIdArray=_cancleInviteIdArray;
- (void)cencealFloatChattingWindow;
- (void)changeSpeakerMode:(id)arg1;
- (id)checkChatStateModel:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (int)checkConflict;
- (_Bool)checkConnect;
- (int)checkTelephone;
- (_Bool)containsMessage:(id)arg1;
- (void)createConfDiscuss;
- (void)createDissGroup:(id)arg1 withFriendUin:(id)arg2;
- (void)createDissGroupCallBack:(int)arg1 withDiscussUin:(id)arg2 withPhones:(id)arg3;
- (void)createRoomFail:(unsigned int)arg1 relationType:(int)arg2 businessType:(int)arg3 relationID:(unsigned long long)arg4 retCode:(int)arg5 content:(id)arg6;
- (_Bool)createTable:(id)arg1;
@property(retain, nonatomic) NSString *dealInviteId; // @synthesize dealInviteId=_dealInviteId;
- (void)dealloc;
- (void)deleteAllChatListDict;
- (_Bool)deleteAllMessage;
- (_Bool)deleteMessage:(unsigned long long)arg1 withRelationType:(int)arg2;
- (void)deleteRecord:(id)arg1;
- (_Bool)deleteRecord:(id)arg1 inDb:(id)arg2;
- (id)dequeuePSTNTips;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)didRecievedOfflineMsg:(unsigned long long)arg1:(int)arg2:(char *)arg3:(int)arg4;
- (void)didRecievedRandomPush:(unsigned long long)arg1 memberNum:(unsigned int)arg2 data:(id)arg3;
- (void)dismissBuddyShare;
- (void)dismissRecvCallView;
- (void)dismissStarupViewController;
- (void)dismissThirdCallAlertView;
- (void)embedCmdNotifyFromSDK:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 andWithCmdNo:(int)arg4;
- (void)enqueuePSTNTips:(id)arg1;
@property(nonatomic) int entranceType; // @synthesize entranceType=_entranceType;
- (void)forceSuspendAVChat;
- (int)getAVUnreadCount;
- (int)getAVUnreadCount:(unsigned long long)arg1 withRelationType:(int)arg2;
- (_Bool)getAudioHowlingDisable;
- (id)getAvailableChatStateModel:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (id)getCallkitDisplayName:(unsigned long long)arg1 nickName:(id)arg2 relationType:(int)arg3 businessType:(int)arg4;
- (int)getChatListDictChatState:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (id)getChatListDictChattingMem:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (int)getChatListDictChattingNum:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (id)getChatListDictChattingSecondMem:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (id)getChatListDictList:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (int)getChattingRelationType;
- (int)getChattingTypeAudioOrVideo;
- (id)getConferenceModel;
- (id)getCountryCodeWithMobilePhone:(id)arg1;
- (id)getFixedString:(id)arg1 withCount:(double)arg2;
- (id)getFixedString:(id)arg1 withPx:(double)arg2 withFont:(id)arg3;
- (unsigned long long)getFriUinFromP2P;
- (id)getLatestRecordByUin:(long long)arg1 inDb:(id)arg2;
- (long long)getMaxId:(id)arg1;
- (id)getNoCountryPhoneWithMobilePhone:(id)arg1;
- (id)getOpenIDWithTinyID:(id)arg1;
- (int)getPstnCountInChatting;
- (int)getPstnLevel;
- (int)getPstnStrategy;
- (id)getPushDisplayName:(unsigned long long)arg1 nickName:(id)arg2 relationType:(int)arg3 businessType:(int)arg4 inviter:(unsigned long long)arg5;
- (void)getRandomHeadurlAndNickName:(int)arg1 peerUin:(id)arg2;
- (void)getRandomHeadurlAndNickNameAfterDelay:(id)arg1;
- (void)getRandomRelationId;
- (void)getRandomRelationIdTimeOut;
- (void)getRandomRoomMaster;
- (id)getRelationID;
- (double)getSelfRequestDict:(unsigned long long)arg1;
- (unsigned long long)getTableSign;
- (void)goToManageView;
- (void)goToSendFlowerView:(unsigned long long)arg1 andMemList:(id)arg2 fromDetail:(_Bool)arg3;
- (void)handleDismissBuddyShare:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 byOtherTerm:(_Bool)arg4 byOtherTermAccept:(_Bool)arg5;
- (void)handleDismissCallView:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 byOtherTerm:(_Bool)arg4 byOtherTermAccept:(_Bool)arg5;
@property(nonatomic) _Bool hasEnterGroupVideoStarupView; // @synthesize hasEnterGroupVideoStarupView=_hasEnterGroupVideoStarupView;
- (id)init;
- (_Bool)insertMessage:(unsigned long long)arg1 withRelationType:(int)arg2;
- (void)insertRecord:(id)arg1;
- (_Bool)insertRecord:(id)arg1 inDb:(id)arg2;
- (void)internalJoinConference;
@property(retain, nonatomic) NSArray *inviteGroupVideoMembers; // @synthesize inviteGroupVideoMembers=_inviteGroupVideoMembers;
- (_Bool)isAddingMem:(unsigned long long)arg1;
@property(nonatomic) _Bool isCallFromOfficeCenter; // @synthesize isCallFromOfficeCenter=_isCallFromOfficeCenter;
@property(nonatomic) _Bool isCallFromTroopAioOfficecall; // @synthesize isCallFromTroopAioOfficecall=_isCallFromTroopAioOfficecall;
@property(nonatomic) _Bool isFirstStarup; // @synthesize isFirstStarup=_isFirstStarup;
- (_Bool)isFirstUseAVIn3G:(int)arg1;
- (_Bool)isFloatAudioChatting;
- (_Bool)isFloatVideoChatting;
- (_Bool)isFullScreenChatting;
- (_Bool)isGroupAudioRecvCallViewShow;
- (_Bool)isGroupThirdCallAlertViewShow;
- (_Bool)isHRConfDiscuss:(unsigned long long)arg1;
- (_Bool)isHRInterviewer:(unsigned long long)arg1;
@property(nonatomic) _Bool isInitGiftWebView; // @synthesize isInitGiftWebView=_isInitGiftWebView;
@property(nonatomic) _Bool isNeedClickAcceptGroupAudio; // @synthesize isNeedClickAcceptGroupAudio=_isNeedClickAcceptGroupAudio;
- (_Bool)isOnBackGround;
- (_Bool)isOnlineTimerStarted;
- (_Bool)isOpenCamera;
- (_Bool)isOpenFrontCamera;
- (_Bool)isOpenMic;
@property(nonatomic) _Bool isOpenSDKLiveStreaming; // @synthesize isOpenSDKLiveStreaming=_isOpenSDKLiveStreaming;
- (_Bool)isOpenSpeaker;
- (_Bool)isPSTNTipsQueueEmpty;
- (_Bool)isPeerSwitchFromP2P;
- (_Bool)isQueueEmpty;
@property(nonatomic) _Bool isRandomChatSpeakOn; // @synthesize isRandomChatSpeakOn=_isRandomChatSpeakOn;
@property(nonatomic) _Bool isRecvArrangementCallFromOfficeCenter; // @synthesize isRecvArrangementCallFromOfficeCenter=_isRecvArrangementCallFromOfficeCenter;
@property(nonatomic) _Bool isRecvArrangementCallFromTroopAioOfficeCenter; // @synthesize isRecvArrangementCallFromTroopAioOfficeCenter=_isRecvArrangementCallFromTroopAioOfficeCenter;
- (_Bool)isRecvRequestShowing;
- (_Bool)isSelfInDisGroup:(id)arg1;
- (_Bool)isSwitchFromP2P;
- (_Bool)isTelePhoneCalling;
@property(nonatomic) _Bool isUserAudioPermission; // @synthesize isUserAudioPermission=_isUserAudioPermission;
- (_Bool)iscreateDissGroup;
- (void)joinConfDiscussByLongSig:(id)arg1;
- (void)joinConfDiscussByShortSig:(id)arg1;
- (void)jumpToDiscussGroupAIO:(unsigned long long)arg1;
- (void)kickOthersByRandomMaster:(id)arg1;
- (void)loadCountryCode;
- (id)modelWithResultSet:(id)arg1;
- (void)navigateToAIOAndShowKeyBoard:(_Bool)arg1 toUin:(id)arg2;
- (_Bool)needRemoveDuplicate:(id)arg1;
- (void)noticeBarMoveEnd:(struct CGPoint)arg1;
- (void)notifyError:(id)arg1;
- (void)onCallkitAccept:(id)arg1;
- (void)onCallkitActivate:(id)arg1;
- (void)onCallkitDeactivate:(id)arg1;
- (void)onCallkitEnd:(id)arg1;
- (void)onCallkitHold:(id)arg1 hold:(_Bool)arg2;
- (void)onCallkitMute:(id)arg1 mute:(_Bool)arg2;
- (void)onCallkitSpeaker:(id)arg1 speaker:(_Bool)arg2;
- (void)onCallkitStart:(id)arg1;
- (void)onDBChanged:(id)arg1;
- (void)onForceOffLine;
- (void)onGroupAudioAddPstnUsers:(id)arg1;
- (void)onGroupAudioBecomeActive;
- (void)onGroupAudioEnterBackground;
- (void)onGroupAudioEnterFrontground;
- (void)onGroupAudioEnterResignedActive;
- (void)onGroupAudioInvitePstn:(id)arg1;
- (void)onGroupMemberKickoutPushTrans:(id)arg1;
- (void)onGroupVerifyMsgNotification:(id)arg1;
- (void)onNotifyHttpPostFail:(id)arg1 withInfo:(id)arg2;
- (void)onNotifyHttpPostSuc:(id)arg1 withInfo:(id)arg2;
- (void)onRecvAvReportPush:(id)arg1;
- (void)onTelephoneConnected;
- (void)onTelephoneEnded;
- (void)onTelephoneStated;
- (void)onUpdateDiscussGroupName:(id)arg1;
- (void)onVideoChatNotification;
- (void)parseMsgType0x210SubMsgType0xb1:(const void *)arg1 DataLin:(int)arg2 subMsgType:(unsigned int)arg3 isOffline:(_Bool)arg4;
- (void)parseMsgType0x210SubMsgType0xb5:(const void *)arg1 DataLin:(int)arg2 subMsgType:(unsigned int)arg3 seq:(unsigned int)arg4;
- (void)popKickOffAlertAfterEnterFront;
- (void)postChangeNotification:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (void)postQQNotificationName:(id)arg1;
- (void)postQQNotificationName:(id)arg1 object:(id)arg2;
- (void)postQQNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
@property(retain, nonatomic) QQMulAVChatBaseViewController *preController; // @synthesize preController=_preController;
- (int)pushRandomChatUI;
- (void)quitGroupAudioChatByTimeOut;
- (void)randomChatMatching;
- (void)refreshChattingNumDiscuss:(id)arg1;
- (void)refreshChattingNumDiscussInner:(id)arg1;
- (void)refreshChattingNumGroup2:(id)arg1;
- (void)refreshChattingNumGroup2Inner:(id)arg1;
- (void)refreshChattingNumGroup:(id)arg1;
- (void)refreshChattingNumGroupInner:(id)arg1;
- (void)refreshConfSubject;
- (void)remainFloatChattingWindow;
- (void)remainGroupChattingWindow;
- (void)removeALLPSTNTips;
- (void)removeManageRoomViewContollerOrMemselector;
- (void)removeMemberSelector;
- (void)reportRandomRoomUsers:(int)arg1 groupId:(unsigned long long)arg2 members:(id)arg3;
- (int)reqCancelInviteGroupMemberToVideoChat:(unsigned long long)arg1 member:(unsigned long long)arg2 inviteId:(id)arg3;
- (int)reqDealInviteGroupMemberToVideoChat:(unsigned long long)arg1 member:(unsigned long long)arg2 inviteId:(id)arg3 wihtDealType:(int)arg4;
- (int)reqGroupVideoInviteFrequency:(unsigned long long)arg1;
- (int)reqInviteGroupMemberToVideoChat:(unsigned long long)arg1 members:(id)arg2 isFirstStartUp:(_Bool)arg3;
- (int)requestRandomMultiAVChat;
- (void)resetPstnDict:(id)arg1 groupUin:(id)arg2;
- (void)responseJoinConfDiscuss:(id)arg1;
- (_Bool)sendWupBuffer:(char *)arg1 cmd:(char *)arg2 seq:(int *)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5;
- (void)setMicStae:(_Bool)arg1 speakerState:(_Bool)arg2 cameraState:(_Bool)arg3 frontCamera:(_Bool)arg4;
- (void)setNetIP:(id)arg1 AndPort:(int)arg2;
- (void)setOpenCamera:(_Bool)arg1;
- (void)setOpenFrontCamera:(_Bool)arg1;
- (void)setOpenID:(id)arg1 withTinyID:(id)arg2;
- (void)setOpenMic:(_Bool)arg1;
- (void)setPeerPSGAbility:(_Bool)arg1;
- (void)showAnotherRecvCallView:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 inviter:(unsigned long long)arg4 invitees:(id)arg5;
- (void)showGroupVideoStarupView:(unsigned long long)arg1;
- (void)showPSTNTips;
- (void)showRecvBuddyShareCallViewTimeOut;
- (void)showRecvBuddyShareView:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 inviter:(unsigned long long)arg4 invitees:(id)arg5;
- (void)showRecvCallView:(int)arg1 businessType:(int)arg2 subType:(int)arg3 relationID:(unsigned long long)arg4 inviter:(unsigned long long)arg5 invitees:(id)arg6;
- (void)showRecvCallViewTimeOut;
- (void)showShutUpAlert:(id)arg1;
- (void)showThirdAlertViewTimeOut;
- (void)startGroupAVFromP2P:(id)arg1 withFriUin:(id)arg2 withPhones:(id)arg3;
- (void)startOnlineTimer;
- (void)startShowPSTNTips;
- (void)stopOfflineTimer;
- (void)stopOnlineTimer;
- (void)storeBuddyShareState;
- (void)switchFromP2POver;
- (void)switchToGroupAV:(id)arg1 withPhones:(id)arg2;
- (_Bool)updateChatListDict:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 audioState:(int)arg4;
- (_Bool)updateChatListDict:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 chatCount:(int)arg4 friUin:(id)arg5;
- (_Bool)updateChatListDict:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 chatCount:(int)arg4 friUinList:(id)arg5;
- (_Bool)updateChatListDict:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 secondfriUin:(id)arg4;
- (void)updateChatStates:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (void)updateIsAddingMemState:(_Bool)arg1;
- (int)updateNetFlow:(unsigned long long)arg1 Size:(unsigned long long)arg2;
- (void)updateOpenIDList:(id)arg1;
- (void)updatePstnDict:(id)arg1 groupUin:(id)arg2;
- (_Bool)updateSelfRequestDict:(unsigned long long)arg1;
- (void)updateTinyIDList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

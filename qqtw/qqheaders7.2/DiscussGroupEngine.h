//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"
#import "IQQMessageProcessor.h"

@class DiscussGroupListTable, DiscussGroupMemberTable, NSArray, NSMutableArray, NSMutableDictionary, NSString, QQLockDictionary;

@interface DiscussGroupEngine : NSObject <IEngineDispatchDelegate, IQQMessageProcessor>
{
    long long _uin;
    DiscussGroupListTable *_listTable;
    DiscussGroupMemberTable *_memberTable;
    NSMutableArray *_discussGroupList;
    NSMutableDictionary *_discussMemberDict;
    NSMutableDictionary *_cacaDiscussNotifyDict;
    NSMutableDictionary *_cacaDiscussMsgDict;
    id <IDiscussGroupManageDelegate> _groupManageDelegate;
    id <ICacaDiscussGroupUpdateResult> _remindCacaDiscussDelegate;
    NSMutableArray *_requestDiscussQueue;
    _Bool _bNetGetCrntAccountOfflineMsg;
    _Bool _bHaveQuitSuccTips;
    long long _currentMonitorDisGroupCode;
    NSMutableDictionary *_dictEngineBlock;
    int _xo;
    NSMutableDictionary *_batchRequestDict;
    QQLockDictionary *_memberListInCacheRecord;
    _Bool _shouldReqAllGroupList;
    NSMutableDictionary *_dicNeedShareDisGroupCode;
    NSArray *_needUpdateInfoArray;
    NSArray *_ignoreUpdateInfoDisUins;
}

+ (void)checkUpdateDiscussHead;
+ (id)getInstance;
- (unsigned int)_getMaxUploadedDiscussCountInRegisterProxy;
- (_Bool)addDiscussBySig:(id)arg1 from:(int)arg2 resendSeq:(int)arg3;
- (int)addDiscussMember:(long long)arg1 addMembers:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)addGroupInfo:(id)arg1 save:(_Bool)arg2;
- (void)addGroupInfoFromList:(id)arg1 save:(_Bool)arg2;
- (void)addRequest:(id)arg1 seqId:(int)arg2 discussUin:(long long)arg3 requestData:(id)arg4;
- (void)addRequsetItem:(id)arg1;
- (void)batchDeleteDiscussData:(id)arg1;
- (void)batchRemoveDisGrpInfo:(id)arg1;
- (void)batchRemoveMemberInfo:(id)arg1;
- (void)changeAccount;
- (_Bool)changeDiscussName:(long long)arg1 newDiscussName:(id)arg2;
- (void)changeMaskFlag:(long long)arg1 memberUin:(long long)arg2 mask:(_Bool)arg3;
- (void)changeOrderMemAry:(id)arg1 disGroup:(long long)arg2;
- (long long)checkCurrentMonitoerDisGroupCode;
- (void)clearMemoryData;
- (void)createDisGrpByUin:(long long)arg1 num:(id)arg2;
- (void)createDiscussFolder;
- (int)createDiscussGroup:(id)arg1 memberArray:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) long long currentMonitorDisGroupCode; // @synthesize currentMonitorDisGroupCode=_currentMonitorDisGroupCode;
- (_Bool)delDiscussLocalMember:(long long)arg1 delUin:(long long)arg2;
- (_Bool)delDiscussMember:(long long)arg1 delMembers:(id)arg2;
- (void)deleteCurrentAccount;
- (void)deleteDiscussData:(long long)arg1;
- (void)deleteDiscussMemberData:(long long)arg1;
@property(retain, nonatomic) NSMutableDictionary *dicNeedShareDisGroupCode; // @synthesize dicNeedShareDisGroupCode=_dicNeedShareDisGroupCode;
@property(retain, nonatomic) NSMutableDictionary *dictEngineBlock; // @synthesize dictEngineBlock=_dictEngineBlock;
- (void)didCacheMemberList:(long long)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
@property(retain) NSMutableArray *discussGroupList; // @synthesize discussGroupList=_discussGroupList;
@property(retain, nonatomic) NSMutableDictionary *discussMemberDict; // @synthesize discussMemberDict=_discussMemberDict;
- (id)findDiscussListByMember:(unsigned long long)arg1;
- (id)findRequsetItemByItem:(id)arg1;
- (id)flyticketGetShareDisGroupCode;
- (void)flyticketSetShareDisGroupCode:(id)arg1;
- (_Bool)forceToUpdateDiscussInfo:(long long)arg1 force:(_Bool)arg2;
- (_Bool)forceToUpdateDiscussInfo:(long long)arg1 force:(_Bool)arg2 reason:(long long)arg3;
- (id)getBatchMemRemarkName:(long long)arg1 memberArray:(id)arg2 needReq:(_Bool)arg3;
- (id)getChangingDiscussName:(long long)arg1;
- (CDUnknownBlockType)getDisGroupActionBlockFromDictBlock:(id)arg1;
- (int)getDiscussGroupMaxMemberNum;
- (id)getDiscussMember:(long long)arg1 memberUin:(long long)arg2;
- (id)getDiscussMemberList:(long long)arg1;
- (id)getDiscussMemberListInCache:(long long)arg1;
- (id)getErrorStr:(int)arg1 type:(int)arg2;
- (id)getFavoriteGroupInfo:(long long)arg1;
- (id)getFavoriteGroupInfoList;
- (id)getGroupInfo:(long long)arg1;
- (id)getGroupInfoList;
- (id)getLocalDiscussMemberList:(long long)arg1;
- (id)getLocalDiscussMemberList:(long long)arg1 asyncDB:(_Bool *)arg2;
- (void)getLocalDiscussMemberListAsync:(long long)arg1;
- (id)getMemNickName:(id)arg1 memUin:(id)arg2 options:(long long)arg3;
- (id)getMemNickName:(id)arg1 memUin:(id)arg2 options:(long long)arg3 noMemberInteremarkBlock:(CDUnknownBlockType)arg4 noStrangerNickBlock:(CDUnknownBlockType)arg5;
- (id)getMemNickName:(id)arg1 needReq:(_Bool)arg2;
- (id)getMemRealNickName:(long long)arg1 memberArray:(id)arg2;
- (id)getOriginalDiscussMemberList:(long long)arg1;
- (_Bool)getQuitSuccTipsFlag;
- (id)getRequest:(id)arg1 discussUin:(long long)arg2;
- (id)getRequest:(id)arg1 seqId:(int)arg2;
- (id)getRequestByCmd:(id)arg1;
- (id)getUploadedDiscussGroupListForRegisterProxy;
- (void)handleUpdateDiscussGroupInfosResp:(id)arg1 requestItem:(id)arg2;
- (void)handleWithBlockResp:(long long)arg1 disGroupCode:(long long)arg2;
- (void)handleWithBlockResp:(long long)arg1 disGroupCode:(long long)arg2 addMemResult:(long long)arg3;
- (_Bool)haveDiscussMemberListInCache:(long long)arg1;
@property(retain, nonatomic) NSArray *ignoreUpdateInfoDisUins; // @synthesize ignoreUpdateInfoDisUins=_ignoreUpdateInfoDisUins;
- (id)init;
- (_Bool)insertDiscussLocalMember:(long long)arg1 insertUin:(long long)arg2;
- (_Bool)insertDiscussMemberArray:(long long)arg1 insertMemberArray:(id)arg2;
- (void)insertGroupInfo:(id)arg1 atIndex:(unsigned long long)arg2 save:(_Bool)arg3;
- (_Bool)isAppropriateNick:(id)arg1 forUin:(id)arg2;
- (_Bool)isConnected;
- (_Bool)isHRConfDiscuss:(unsigned long long)arg1;
- (_Bool)isHasMsg:(long long)arg1;
- (_Bool)isValidGroup:(long long)arg1;
- (_Bool)joinDiscuss:(id)arg1 from:(id)arg2;
- (void)judgeUpdateDiscussInfo:(long long)arg1 infoSeq:(int)arg2;
- (void)judgeUpdateDiscussInfo:(long long)arg1 infoSeq:(int)arg2 reason:(long long)arg3;
- (void)loadDiscussGroupList;
- (id)loadDiscussMemberList:(long long)arg1;
- (void)loadDiscussMsgDict;
- (void)loginSuccess:(id)arg1;
@property(retain, nonatomic) NSArray *needUpdateInfoArray; // @synthesize needUpdateInfoArray=_needUpdateInfoArray;
- (void)notifyError:(id)arg1;
- (void)notifyMsgToNewGroup:(long long)arg1;
- (id)processMsgEncapsulation:(id)arg1;
- (_Bool)quitDiscuss:(long long)arg1;
- (_Bool)quitDiscuss:(long long)arg1 isShowTips:(_Bool)arg2;
@property(nonatomic) id <ICacaDiscussGroupUpdateResult> remindCacaDiscussDelegate; // @synthesize remindCacaDiscussDelegate=_remindCacaDiscussDelegate;
- (void)removeAllGroupInfoList;
- (_Bool)removeCMDRequestItem:(const char *)arg1 discussGroupUIN:(long long)arg2 seqId:(int)arg3;
- (void)removeDisGroups:(id)arg1 save:(_Bool)arg2;
- (void)removeDiscussGroupInfoByUIN:(long long)arg1;
- (void)removeGroupInfo:(id)arg1 save:(_Bool)arg2;
- (void)removeMemberInfo:(long long)arg1;
- (void)removeRequest:(id)arg1 seqId:(int)arg2;
- (void)removeRequestItem:(id)arg1;
- (void)removeRequestItemByItem:(id)arg1;
- (void)replaceDiscussGroupInfo:(id)arg1;
- (void)replaceDiscussGroupInfos:(id)arg1;
- (_Bool)requestAddDiscussMember:(long long)arg1 addMemArray:(id)arg2 resendSeq:(int)arg3;
- (_Bool)requestChangeDiscussName:(long long)arg1 newDiscussName:(id)arg2 resendSeq:(int)arg3;
- (_Bool)requestCreateDiscuss:(id)arg1 memArray:(id)arg2 resendSeq:(int)arg3;
- (_Bool)requestDelDiscussMember:(long long)arg1 delMemArray:(id)arg2 resendSeq:(int)arg3;
- (void)requestDiscussListAfterLoginIfNeeded;
- (_Bool)requestGetDisccussInfoBySig:(id)arg1 resendSeq:(int)arg2;
- (int)requestGetDisccussMemberRemark:(long long)arg1 memArray:(id)arg2;
- (void)requestGetDiscussListV2;
- (void)requestGetDiscussListWithIgnoreUpdateInfoDiscussUins:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)requestQuitDiscuss:(long long)arg1 resendSeq:(int)arg2;
- (int)requestSetDiscussFavorite:(long long)arg1;
- (int)requestSetDiscussFavorite:(long long)arg1 flag:(_Bool)arg2;
- (int)requestSetDiscussFlag:(long long)arg1 state:(BOOL)arg2;
- (int)requestSetDiscussPlain:(long long)arg1;
- (void)resetCurrentMonitorDisGroupCode;
- (void)resetQuitSuccTipsFlag;
- (void)responseAddDisccussBySig:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseAddDiscussMember:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseChangeDiscussName:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseCreateDiscuss:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseDelDicussMember:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseGetDisccussMemberRemark:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseGetDiscussInfo:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseQuitDiscuss:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseSetDiscussFavorite:(_Bool)arg1 Data:(char *)arg2 DataLen:(int)arg3 Seq:(int)arg4;
- (void)responseSetDiscussFavorite:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseSetDiscussFlag:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseSetDiscussPlain:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)saveDiscussGroupList;
- (void)saveDiscussMemberList:(long long)arg1;
- (void)saveDiscussMsgDict;
- (void)saveNotifyMsg:(id)arg1 forDiscussGroup:(long long)arg2;
- (id)searchMemberUin:(id)arg1 DiscussGroupUin:(long long)arg2;
- (void)setDisGroupActionBlockToDictBlock:(CDUnknownBlockType)arg1 withKey:(id)arg2;
- (_Bool)setDiscussFavoriteState:(long long)arg1 state:(_Bool)arg2;
- (void)setDiscussGroupManageDelegate:(id)arg1;
- (void)setDiscussMemberListArray:(id)arg1 discussGroupUIN:(long long)arg2;
- (_Bool)setMaskMsg:(long long)arg1 state:(BOOL)arg2;
@property(nonatomic) _Bool shouldReqAllGroupList; // @synthesize shouldReqAllGroupList=_shouldReqAllGroupList;
- (_Bool)tryReuseExistDiscussGroupWithMembers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateBatchDiscussInfo:(id)arg1;
- (void)updateBatchDiscussInfo:(id)arg1 reason:(long long)arg2;
- (void)updateBatchDiscussInfo:(id)arg1 redialTimes:(unsigned long long)arg2 traceUUID:(id)arg3 reason:(long long)arg4;
- (void)updateBatchDiscussInfoSafely:(id)arg1;
- (void)updateCurrentMonitorDisGroupCode:(long long)arg1;
- (_Bool)updateDiscussInfo:(long long)arg1;
- (_Bool)updateDiscussInfo:(long long)arg1 reason:(long long)arg2;
- (void)updateDiscussInfoAfterLogin;
- (_Bool)updateDiscussInfoBySig:(id)arg1;
- (void)updateDiscussListV2;
- (_Bool)updateDiscussMemberRemark:(long long)arg1 memberArrays:(id)arg2;
- (void)updatediscussGroupInfos:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


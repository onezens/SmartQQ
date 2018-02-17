//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, QQLockDictionary;

@interface GroupAudioChatModel : NSObject
{
    id <GAChatStateChangeProtocal> _delegate;
    int _relationType;
    int _businessType;
    unsigned long long _groupUin;
    NSMutableArray *_memUinArray;
    NSMutableArray *_memSpeakCache;
    _Bool _isSelfIn;
    _Bool _isFriendIn;
    _Bool _isRoomConnected;
    _Bool _isSelfCreate;
    int _groupChatType;
    unsigned long long _selfUin;
    NSMutableArray *_requestViewInfo;
    int _chatState;
    NSString *_roomid;
    QQLockDictionary *_memUinDict;
}

- (void)addObjectByProxy:(id)arg1;
@property(nonatomic) int businessType; // @synthesize businessType=_businessType;
@property(nonatomic) int chatState; // @synthesize chatState=_chatState;
- (void)dealloc;
@property(nonatomic) id <GAChatStateChangeProtocal> delegate; // @synthesize delegate=_delegate;
- (int)findMemberIndex:(unsigned long long)arg1;
- (_Bool)findSpeakCache:(unsigned long long)arg1;
- (int)getAVStateAtIndex:(int)arg1;
- (int)getAccountTypeAtIndex:(int)arg1;
- (int)getMainVideoCount;
- (_Bool)getMicOffStateAtIndex:(int)arg1;
- (id)getNoAnswerMembers:(id)arg1;
- (_Bool)getNoisyStateAtIndex:(int)arg1;
- (int)getPstnCount;
- (id)getPstnMembers:(id)arg1;
- (int)getPstnStatusAtIndex:(int)arg1;
- (int)getShareStateAtIndex:(int)arg1;
- (_Bool)getSpeakStateAtIndex:(int)arg1;
- (int)getVideoTypeAtIndex:(int)arg1;
@property(nonatomic) int groupChatType; // @synthesize groupChatType=_groupChatType;
@property(nonatomic) unsigned long long groupUin; // @synthesize groupUin=_groupUin;
- (long long)indexForUin:(unsigned long long)arg1;
- (void)initNotification;
- (id)initWithRelationType:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (void)insertObjectByProxy:(id)arg1 atIndex:(unsigned long long)arg2;
@property(nonatomic) _Bool isFriendIn; // @synthesize isFriendIn=_isFriendIn;
@property(nonatomic) _Bool isRoomConnected; // @synthesize isRoomConnected=_isRoomConnected;
@property(nonatomic) _Bool isSelfIn; // @synthesize isSelfIn=_isSelfIn;
@property(retain, nonatomic) NSMutableArray *memUinArray; // @synthesize memUinArray=_memUinArray;
@property(retain, nonatomic) QQLockDictionary *memUinDict; // @synthesize memUinDict=_memUinDict;
- (void)memberAudioIn:(id)arg1;
- (void)memberAudioOut:(id)arg1;
- (void)memberBanAudio:(id)arg1;
- (void)memberCancelBanAudio:(id)arg1;
- (id)memberForUin:(unsigned long long)arg1;
- (void)memberGetIn:(id)arg1;
- (void)memberGetOut:(id)arg1;
- (void)memberPPTIn:(id)arg1;
- (void)memberPPTOut:(id)arg1;
- (void)memberScreenIn:(id)arg1;
- (void)memberScreenOut:(id)arg1;
- (void)memberStartSpeaking:(id)arg1;
- (void)memberStopSpeaking:(id)arg1;
- (void)memberSuspectNoisy:(id)arg1;
- (void)memberVideoIn:(id)arg1;
- (void)memberVideoOut:(id)arg1;
- (void)onGroupAudioChatNotification:(id)arg1;
- (void)onGroupVideoNotificationEmbedScPush:(id)arg1;
- (void)onGroupVideoSrcTypeChange:(id)arg1;
- (void)onMicOffBySelf:(id)arg1;
- (void)onPPTUploadSate:(id)arg1;
@property(nonatomic) int relationType; // @synthesize relationType=_relationType;
- (void)removeLastObjectByProxy;
- (void)removeObjectAtIndexByProxy:(unsigned long long)arg1;
- (void)replaceObjectAtIndexByProxy:(unsigned long long)arg1 withObject:(id)arg2;
- (void)roomConnected;
@property(copy, nonatomic) NSString *roomid; // @synthesize roomid=_roomid;
@property(nonatomic) unsigned long long selfUin; // @synthesize selfUin=_selfUin;
- (void)setAVState:(int)arg1 withIndex:(int)arg2;
- (void)setAccountType:(int)arg1 atIndex:(int)arg2;
- (void)setMicOffBySelf:(_Bool)arg1 withIndex:(int)arg2;
- (void)setMicOffState:(_Bool)arg1 withIndex:(int)arg2;
- (void)setNoisyState:(id)arg1 atIndex:(int)arg2;
- (void)setPstnStatus:(int)arg1 atIndex:(int)arg2;
- (void)setQuitState:(_Bool)arg1 atIndex:(int)arg2;
- (void)setShareState:(int)arg1 withIndex:(int)arg2;
- (void)setSpeakState:(_Bool)arg1 withIndex:(int)arg2;
- (void)setTerminalType:(int)arg1 atIndex:(int)arg2;
- (_Bool)setVideoType:(int)arg1 withIndex:(int)arg2;
- (void)unInitNotification;

@end


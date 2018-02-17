//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface GroupAudioChatMemberModel : NSObject <NSCopying>
{
    unsigned long long _uin;
    int _AVState;
    _Bool _speakState;
    int _shareState;
    int _videoType;
    int _terminalType;
    _Bool _isQuit;
    int _quitReason;
    int _accountType;
    int _pstnStatus;
    _Bool _isRoomCreator;
    _Bool _isMicOff;
    _Bool _isMicOffBySelf;
    _Bool _isSuspectNoisy;
    unsigned long long _lastNoiseTime;
    unsigned long long _noiseValidDura;
    int _rank;
    unsigned int _onlineLevel;
    unsigned int _medal;
    unsigned int _showOnlineLevel;
    NSString *_iconUrl;
}

@property(nonatomic) int AVState; // @synthesize AVState=_AVState;
@property(nonatomic) int accountType; // @synthesize accountType=_accountType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (id)initWithMemChatInfo:(unsigned long long)arg1;
@property(nonatomic) _Bool isMicOff; // @synthesize isMicOff=_isMicOff;
@property(nonatomic) _Bool isMicOffBySelf; // @synthesize isMicOffBySelf=_isMicOffBySelf;
@property(nonatomic) _Bool isQuit; // @synthesize isQuit=_isQuit;
@property(nonatomic) _Bool isRoomCreator; // @synthesize isRoomCreator=_isRoomCreator;
@property(nonatomic) _Bool isSuspectNoisy; // @synthesize isSuspectNoisy=_isSuspectNoisy;
@property(nonatomic) unsigned long long lastNoiseTime; // @synthesize lastNoiseTime=_lastNoiseTime;
@property(nonatomic) unsigned int medal; // @synthesize medal=_medal;
@property(nonatomic) unsigned long long noiseValidDura; // @synthesize noiseValidDura=_noiseValidDura;
@property(nonatomic) unsigned int onlineLevel; // @synthesize onlineLevel=_onlineLevel;
@property(nonatomic) int pstnStatus; // @synthesize pstnStatus=_pstnStatus;
@property(readonly, nonatomic) unsigned long long qUin;
@property(nonatomic) int quitReason; // @synthesize quitReason=_quitReason;
@property(nonatomic) int rank; // @synthesize rank=_rank;
@property(nonatomic) int shareState; // @synthesize shareState=_shareState;
@property(nonatomic) unsigned int showOnlineLevel; // @synthesize showOnlineLevel=_showOnlineLevel;
@property(nonatomic) _Bool speakState; // @synthesize speakState=_speakState;
@property(nonatomic) int terminalType; // @synthesize terminalType=_terminalType;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
@property(nonatomic) int videoType; // @synthesize videoType=_videoType;

@end

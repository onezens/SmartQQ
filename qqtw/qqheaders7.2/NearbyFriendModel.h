//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class CharmInfoModel, NSArray, NSString, NearbyCommonLabel, RichStateModel;

@interface NearbyFriendModel : QQModel
{
    BOOL _cSex;
    BOOL _cAge;
    _Bool _hasMorePic;
    _Bool _isCustomVotePayed;
    BOOL _authFlag;
    _Bool _godFlag;
    int _iVoteIncrement;
    int _iVoteNum;
    int _bVoteCount;
    int _bAvailableCnt;
    int _bTodayVotedCnt;
    int _bCloseNeighborVote;
    int _uSource;
    unsigned int _iZanTodayCount;
    unsigned int _iZanTodayRank;
    unsigned int _iZanTotalCount;
    int _iCustomVoteId;
    int _vipType;
    int _professionID;
    int _faceNum;
    int _liveFlag;
    int _hasAvatarAnimation;
    unsigned int _realVideoFlag;
    long long _type;
    long long _uin;
    long long _tinyID;
    NSString *_timeStr;
    NSString *_timeAccessibilityStr;
    NSString *_strDescription;
    NSString *_strNick;
    unsigned long long _iFavorite;
    RichStateModel *_richStateModel;
    CharmInfoModel *_charmInfoModel;
    NSString *_constellation;
    NSArray *_vInterestTagInfo;
    NearbyCommonLabel *_commonLabel;
    NSString *_personalImprint;
    NSString *_actionData;
    NSString *_avatarBgGif;
    NSString *_nowBoardcastGif;
    NSString *_nowBoardcastWording;
    NSString *_thridLineIcon;
    NSString *_thridLineInfo;
}

+ (id)convertToFriendModel:(id)arg1 type:(long long)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *actionData; // @synthesize actionData=_actionData;
@property BOOL authFlag; // @synthesize authFlag=_authFlag;
@property(copy, nonatomic) NSString *avatarBgGif; // @synthesize avatarBgGif=_avatarBgGif;
@property(nonatomic) int bAvailableCnt; // @synthesize bAvailableCnt=_bAvailableCnt;
@property(nonatomic) int bCloseNeighborVote; // @synthesize bCloseNeighborVote=_bCloseNeighborVote;
@property(nonatomic) int bTodayVotedCnt; // @synthesize bTodayVotedCnt=_bTodayVotedCnt;
@property(nonatomic) int bVoteCount; // @synthesize bVoteCount=_bVoteCount;
@property(nonatomic) BOOL cAge; // @synthesize cAge=_cAge;
@property(nonatomic) BOOL cSex; // @synthesize cSex=_cSex;
@property(retain, nonatomic) CharmInfoModel *charmInfoModel; // @synthesize charmInfoModel=_charmInfoModel;
@property(retain, nonatomic) NearbyCommonLabel *commonLabel; // @synthesize commonLabel=_commonLabel;
@property(copy, nonatomic) NSString *constellation; // @synthesize constellation=_constellation;
@property(nonatomic) int faceNum; // @synthesize faceNum=_faceNum;
@property(nonatomic) _Bool godFlag; // @synthesize godFlag=_godFlag;
@property(nonatomic) int hasAvatarAnimation; // @synthesize hasAvatarAnimation=_hasAvatarAnimation;
@property(nonatomic) _Bool hasMorePic; // @synthesize hasMorePic=_hasMorePic;
@property(nonatomic) int iCustomVoteId; // @synthesize iCustomVoteId=_iCustomVoteId;
@property(nonatomic) unsigned long long iFavorite; // @synthesize iFavorite=_iFavorite;
@property(nonatomic) int iVoteIncrement; // @synthesize iVoteIncrement=_iVoteIncrement;
@property(nonatomic) int iVoteNum; // @synthesize iVoteNum=_iVoteNum;
@property(nonatomic) unsigned int iZanTodayCount; // @synthesize iZanTodayCount=_iZanTodayCount;
@property(nonatomic) unsigned int iZanTodayRank; // @synthesize iZanTodayRank=_iZanTodayRank;
@property(nonatomic) unsigned int iZanTotalCount; // @synthesize iZanTotalCount=_iZanTotalCount;
@property(nonatomic) _Bool isCustomVotePayed; // @synthesize isCustomVotePayed=_isCustomVotePayed;
@property(nonatomic) int liveFlag; // @synthesize liveFlag=_liveFlag;
@property(copy, nonatomic) NSString *nowBoardcastGif; // @synthesize nowBoardcastGif=_nowBoardcastGif;
@property(copy, nonatomic) NSString *nowBoardcastWording; // @synthesize nowBoardcastWording=_nowBoardcastWording;
@property(copy, nonatomic) NSString *personalImprint; // @synthesize personalImprint=_personalImprint;
@property(nonatomic) int professionID; // @synthesize professionID=_professionID;
@property(nonatomic) unsigned int realVideoFlag; // @synthesize realVideoFlag=_realVideoFlag;
@property(retain, nonatomic) RichStateModel *richStateModel; // @synthesize richStateModel=_richStateModel;
@property(copy, nonatomic) NSString *strDescription; // @synthesize strDescription=_strDescription;
@property(copy, nonatomic) NSString *strNick; // @synthesize strNick=_strNick;
@property(copy, nonatomic) NSString *thridLineIcon; // @synthesize thridLineIcon=_thridLineIcon;
@property(copy, nonatomic) NSString *thridLineInfo; // @synthesize thridLineInfo=_thridLineInfo;
@property(copy, nonatomic) NSString *timeAccessibilityStr; // @synthesize timeAccessibilityStr=_timeAccessibilityStr;
@property(copy, nonatomic) NSString *timeStr; // @synthesize timeStr=_timeStr;
@property(nonatomic) long long tinyID; // @synthesize tinyID=_tinyID;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) int uSource; // @synthesize uSource=_uSource;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSArray *vInterestTagInfo; // @synthesize vInterestTagInfo=_vInterestTagInfo;
@property int vipType; // @synthesize vipType=_vipType;

@end


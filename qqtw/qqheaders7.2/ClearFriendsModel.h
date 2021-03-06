//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSMutableDictionary;

@interface ClearFriendsModel : QQModel
{
    long long _uin;
    int _unCommonSeq;
    int _recommendSeq;
    _Bool _showGuideFlag;
    NSMutableDictionary *_mySNFriends;
    NSMutableDictionary *_snRecommendFrds;
    unsigned long long _recommendCount;
    int _shieldMine;
    int _shieldHis;
    _Bool _isReaded;
    _Bool _isStatusReported;
    _Bool _shouldSendRequest;
    int _xo;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) _Bool isReaded; // @synthesize isReaded=_isReaded;
@property(nonatomic) _Bool isStatusReported; // @synthesize isStatusReported=_isStatusReported;
@property(retain, nonatomic) NSMutableDictionary *mySNFriends; // @synthesize mySNFriends=_mySNFriends;
@property(nonatomic) int shieldHis; // @synthesize shieldHis=_shieldHis;
@property(nonatomic) int shieldMine; // @synthesize shieldMine=_shieldMine;
@property(nonatomic) _Bool shouldSendRequest; // @synthesize shouldSendRequest=_shouldSendRequest;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
@property(nonatomic) int unCommonSeq; // @synthesize unCommonSeq=_unCommonSeq;

@end


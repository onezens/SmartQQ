//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupPropertyModel.h"

@class NSData, NSString;

@interface NearbySelfInfoModel : QQGroupPropertyModel
{
    _Bool _needShowRankList;
    _Bool _isBoyGirlGod;
    int _sex;
    int _age;
    int _voteNum;
    int _voteIncrement;
    int _charm;
    int _charm_level;
    int _nearRanking;
    int _realVideoFlag;
    NSData *_strBirthDay;
    NSString *_strNick;
    NSString *_thirdLineInfo;
    NSString *_thirdLineIcon;
    long long _heartCount;
}

@property(nonatomic) int age; // @synthesize age=_age;
@property(nonatomic) int charm; // @synthesize charm=_charm;
@property(nonatomic) int charm_level; // @synthesize charm_level=_charm_level;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
@property(nonatomic) long long heartCount; // @synthesize heartCount=_heartCount;
@property(nonatomic) _Bool isBoyGirlGod; // @synthesize isBoyGirlGod=_isBoyGirlGod;
@property(nonatomic) int nearRanking; // @synthesize nearRanking=_nearRanking;
@property(nonatomic) _Bool needShowRankList; // @synthesize needShowRankList=_needShowRankList;
@property(nonatomic) int realVideoFlag; // @synthesize realVideoFlag=_realVideoFlag;
@property(nonatomic) int sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSData *strBirthDay; // @synthesize strBirthDay=_strBirthDay;
@property(copy, nonatomic) NSString *strNick; // @synthesize strNick=_strNick;
@property(copy, nonatomic) NSString *thirdLineIcon; // @synthesize thirdLineIcon=_thirdLineIcon;
@property(copy, nonatomic) NSString *thirdLineInfo; // @synthesize thirdLineInfo=_thirdLineInfo;
@property(nonatomic) int voteIncrement; // @synthesize voteIncrement=_voteIncrement;
@property(nonatomic) int voteNum; // @synthesize voteNum=_voteNum;

@end


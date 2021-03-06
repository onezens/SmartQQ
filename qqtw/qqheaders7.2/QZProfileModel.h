//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneModel.h"

@class NSString, QZBgVoice, QZCountType, QZHomePageIntimacy, QZHomePageRelationType, QZHomePageVisit, QzoneCommCombineVipInfo, QzoneCustomVipInfo;

@interface QZProfileModel : QZoneModel
{
    _Bool _showMenuPanle;
    long long _nameplateType;
    QzoneCommCombineVipInfo *_combineVipInfo;
    QzoneCustomVipInfo *_customVipInfo;
    long long _userType;
    long long _brandFlag;
    NSString *_spaceDesc;
    NSString *_shareBgUrl;
    QZBgVoice *_bgVoice;
}

+ (id)instanceWithQZJceResponse:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) QZBgVoice *bgVoice; // @synthesize bgVoice=_bgVoice;
@property(nonatomic) long long brandFlag; // @synthesize brandFlag=_brandFlag;
@property(retain, nonatomic) QzoneCommCombineVipInfo *combineVipInfo; // @synthesize combineVipInfo=_combineVipInfo;
- (id)convertCombineVipInfo:(id)arg1;
@property(retain, nonatomic) QzoneCustomVipInfo *customVipInfo; // @synthesize customVipInfo=_customVipInfo;
- (id)extractQzmallInfoFramData:(id)arg1;
- (id)initWithQZJceResponseQZProfileModel:(id)arg1;
- (_Bool)isCommonSpace;
- (_Bool)isOld52Space;
- (_Bool)isReverseBlack;
- (_Bool)isSchoolSpaceFamousSpace;
- (_Bool)isStarSpaceFamousSpace;
- (_Bool)isVideo57Space;
- (_Bool)isVipEqualTo:(id)arg1;
@property(nonatomic) long long nameplateType; // @synthesize nameplateType=_nameplateType;
@property(retain, nonatomic) NSString *shareBgUrl; // @synthesize shareBgUrl=_shareBgUrl;
@property(nonatomic) _Bool showMenuPanle; // @synthesize showMenuPanle=_showMenuPanle;
@property(retain, nonatomic) NSString *spaceDesc; // @synthesize spaceDesc=_spaceDesc;
@property(nonatomic) long long userType; // @synthesize userType=_userType;

// Remaining properties
@property(nonatomic) unsigned char age; // @dynamic age;
@property(retain, nonatomic) NSString *astro; // @dynamic astro;
@property(nonatomic) long long birthday; // @dynamic birthday;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(retain, nonatomic) QZCountType *countType; // @dynamic countType;
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(nonatomic) long long fansNum; // @dynamic fansNum;
@property(nonatomic) long long followNum; // @dynamic followNum;
@property(nonatomic) unsigned char gender; // @dynamic gender;
@property(retain, nonatomic) QZHomePageIntimacy *intimacy; // @dynamic intimacy;
@property(nonatomic) _Bool isAnnualVip; // @dynamic isAnnualVip;
@property(nonatomic) _Bool isCampusUser; // @dynamic isCampusUser;
@property(nonatomic) _Bool isFamousQzone; // @dynamic isFamousQzone;
@property(nonatomic) _Bool isSweetUser; // @dynamic isSweetUser;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) NSString *province; // @dynamic province;
@property(retain, nonatomic) NSString *qzonename; // @dynamic qzonename;
@property(retain, nonatomic) QZHomePageRelationType *relationType; // @dynamic relationType;
@property(nonatomic) long long sqqlevel; // @dynamic sqqlevel;
@property(retain, nonatomic) NSString *strvipoverday; // @dynamic strvipoverday;
@property(nonatomic) long long uin; // @dynamic uin;
@property(nonatomic) unsigned char vip; // @dynamic vip;
@property(nonatomic) long long vipRatio; // @dynamic vipRatio;
@property(nonatomic) long long vipScore; // @dynamic vipScore;
@property(nonatomic) long long vipSpeed; // @dynamic vipSpeed;
@property(nonatomic) long long vipType; // @dynamic vipType;
@property(retain, nonatomic) NSString *vipUrl; // @dynamic vipUrl;
@property(nonatomic) long long viplevel; // @dynamic viplevel;
@property(retain, nonatomic) QZHomePageVisit *visit; // @dynamic visit;

@end


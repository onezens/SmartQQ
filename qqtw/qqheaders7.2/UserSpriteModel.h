//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSString;

@interface UserSpriteModel : QQModel <NSCopying>
{
    _Bool _isFriend;
    short _state;
    short _vipState;
    short _vipLevel;
    short _roleID;
    short _lastRoleID;
    unsigned int _serverTS;
    unsigned int _localTS;
    int _sex;
    int _switchFlag;
    long long _uin;
    NSArray *_dressIDList;
    NSArray *_lastDressList;
    unsigned long long _requestTS;
    long long _personalTS;
    long long _personalLocalTS;
    NSString *_personalText;
    NSDictionary *_dressDetailList;
    NSDictionary *_roleDetail;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
@property(retain, nonatomic) NSDictionary *dressDetailList; // @synthesize dressDetailList=_dressDetailList;
@property(retain, nonatomic) NSArray *dressIDList; // @synthesize dressIDList=_dressIDList;
- (id)getDressList;
- (void)getModelWithModel:(id)arg1;
- (_Bool)isAIRole;
- (_Bool)isEqualSpriteModel:(id)arg1;
@property(nonatomic) _Bool isFriend; // @synthesize isFriend=_isFriend;
- (_Bool)isInAIWhiteList;
- (_Bool)isInCMFaceWhiteList;
- (_Bool)isInGameWhiteList;
@property(retain, nonatomic) NSArray *lastDressList; // @synthesize lastDressList=_lastDressList;
@property(nonatomic) short lastRoleID; // @synthesize lastRoleID=_lastRoleID;
@property(nonatomic) unsigned int localTS; // @synthesize localTS=_localTS;
@property(nonatomic) long long personalLocalTS; // @synthesize personalLocalTS=_personalLocalTS;
@property(nonatomic) long long personalTS; // @synthesize personalTS=_personalTS;
@property(retain, nonatomic) NSString *personalText; // @synthesize personalText=_personalText;
@property(nonatomic) unsigned long long requestTS; // @synthesize requestTS=_requestTS;
@property(retain, nonatomic) NSDictionary *roleDetail; // @synthesize roleDetail=_roleDetail;
@property(nonatomic) short roleID; // @synthesize roleID=_roleID;
@property(nonatomic) unsigned int serverTS; // @synthesize serverTS=_serverTS;
@property(nonatomic) int sex; // @synthesize sex=_sex;
@property(nonatomic) short state; // @synthesize state=_state;
@property(nonatomic) int switchFlag; // @synthesize switchFlag=_switchFlag;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
@property(nonatomic) short vipLevel; // @synthesize vipLevel=_vipLevel;
@property(nonatomic) short vipState; // @synthesize vipState=_vipState;
- (int)spriteAIState;

@end


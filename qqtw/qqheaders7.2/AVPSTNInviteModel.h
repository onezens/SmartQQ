//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AVPSTNInviteModel : NSObject
{
    int _accountType;
    unsigned long long _uin;
    NSString *_telNation;
    NSString *_telPrefix;
    NSString *_mobileAccount;
    int _result;
    int _inviteType;
}

@property(nonatomic) int accountType; // @synthesize accountType=_accountType;
- (void)dealloc;
@property(nonatomic) int inviteType; // @synthesize inviteType=_inviteType;
@property(retain, nonatomic) NSString *mobileAccount; // @synthesize mobileAccount=_mobileAccount;
@property(readonly, nonatomic) NSString *phoneNumber;
@property(nonatomic) int result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *telNation; // @synthesize telNation=_telNation;
@property(retain, nonatomic) NSString *telPrefix; // @synthesize telPrefix=_telPrefix;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AccountsData, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface SSoAccountMgr : NSObject
{
    AccountsData *_accountsData;
    NSString *_accountsFile;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_qqAccount;
}

+ (id)deCryptDES:(id)arg1 key:(id)arg2;
+ (id)enCryptDES:(id)arg1 key:(id)arg2;
+ (id)sharedMgr;
- (void).cxx_destruct;
- (unsigned long long)NSStringtoNSNumber:(id)arg1;
@property(retain, nonatomic) AccountsData *_accountsData; // @synthesize _accountsData;
@property(retain, nonatomic) NSString *_accountsFile; // @synthesize _accountsFile;
- (unsigned long long)accountsNum;
- (_Bool)containQQAccount:(unsigned long long)arg1;
- (void)deleteAccount:(id)arg1 Uid:(unsigned long long)arg2 WriteToFile:(_Bool)arg3;
- (void)deleteQQAccount:(unsigned long long)arg1;
- (id)getAccountByUin:(unsigned long long)arg1;
- (id)getAccountNick:(unsigned long long)arg1;
- (id)getAccountPwd:(unsigned long long)arg1;
- (id)getAccountsData;
- (_Bool)getCurAutoLogon;
- (unsigned long long)getCurrentId;
- (id)getLoginAccountArray;
- (void)getLoginAccountArray:(id)arg1;
- (id)getLoginUinArray;
- (void)getLoginUinArray:(id)arg1;
- (id)getQQAccount;
- (unsigned long long)getUinByAccount:(id)arg1;
- (id)initWithDataFile:(id)arg1;
- (_Bool)isSavePwd:(unsigned long long)arg1;
- (void)mergeAccountData:(id)arg1;
- (int)parseType:(id)arg1 Uid:(unsigned long long)arg2;
@property(retain, nonatomic) NSMutableArray *qqAccount; // @synthesize qqAccount=_qqAccount;
- (void)save;
- (void)saveAccount:(id)arg1 Uid:(unsigned long long)arg2 Password:(id)arg3 SavePwd:(_Bool)arg4 Nick:(id)arg5;
- (void)saveAccountsData:(id)arg1;
- (void)setCurAutoLogon:(_Bool)arg1;
- (void)setCurrentId:(unsigned long long)arg1;

@end


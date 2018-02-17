//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WPASignatureManager : NSObject
{
    NSString *_uin;
    NSString *_filePath;
    NSMutableArray *_sigArray;
    NSMutableDictionary *_requestArray;
    NSString *_crmFilePath;
    NSMutableArray *_crmSigArray;
    NSMutableDictionary *_sigTDic;
    int _xo;
}

+ (id)GetInstance;
+ (void)RemoveInstance;
- (void).cxx_destruct;
- (void)CleanData;
- (void)DeleteCRMWPASig:(long long)arg1;
- (void)DeleteWPASig:(long long)arg1;
- (_Bool)FindUinInWPAArray:(long long)arg1;
- (void)GetCRMWPAMessageDigByUin:(long long)arg1 sig:(id)arg2 service:(int *)arg3;
- (void)GetWPAMessageDigByUin:(long long)arg1 sig:(id)arg2 service:(int *)arg3;
- (void)InitDataForWPASigDataAcess;
- (void)ReleseForWPASigMessageIneractive;
- (void)SaveCRMWPAMsgSigAndServiceType:(id)arg1 SigBuf:(id)arg2 ServiceType:(id)arg3;
- (void)SaveSigArray;
- (void)SaveWPAMsgSigAndServiceType:(id)arg1 SigBuf:(id)arg2 ServiceType:(id)arg3;
@property(retain, nonatomic) NSString *crmFilePath; // @synthesize crmFilePath=_crmFilePath;
@property(retain, nonatomic) NSMutableArray *crmSigArray; // @synthesize crmSigArray=_crmSigArray;
- (void)dealloc;
- (id)init;
- (void)onAccountChange:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *filePath; // @dynamic filePath;
@property(retain, nonatomic) NSMutableDictionary *requestArray; // @dynamic requestArray;
@property(retain, nonatomic) NSMutableArray *sigArray; // @dynamic sigArray;
@property(retain, nonatomic) NSMutableDictionary *sigTDic; // @dynamic sigTDic;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_TPBaseEngine.h"

#import "UIAlertViewDelegate.h"

@class CFT_TenpayCertificate, NSMutableDictionary, NSString;

@interface CFT_TPPayCodeManager : CFT_TPBaseEngine <UIAlertViewDelegate>
{
    CFT_TenpayCertificate *_tpCert;
    _Bool _isCodeGenerageReq;
    int _autoRefreshCount;
    id <TPPayCodeManagerDelegate> _delegate;
    NSMutableDictionary *_payCodeInfo;
    NSString *_curUin;
}

+ (void)destroyIfIdle;
@property(nonatomic) int autoRefreshCount; // @synthesize autoRefreshCount=_autoRefreshCount;
- (id)certSign:(id)arg1;
- (void)checkTokenAutoRefresh;
- (void)clearData;
- (void)clearPayCodeInfo;
- (void)clearToken;
- (void)code_check;
- (void)code_generate;
- (void)code_open;
@property(retain, nonatomic) NSString *curUin; // @synthesize curUin=_curUin;
- (void)dealloc;
@property(nonatomic) id <TPPayCodeManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getCSR;
- (id)getCertId;
- (id)getCurPayCodeInfo;
- (unsigned long long)getDefaultPayTypeIndex;
- (id)getDefaultSerial;
- (int)getLastError;
- (id)getOtherSecenLastBindSerial;
- (id)getPayTypeInfo;
- (id)getPayTypes;
- (id)getToken;
- (id)getTokenMD5;
- (id)getTokenPrefix;
- (int)getTokenRemainNum;
- (_Bool)importCert:(id)arg1;
- (id)init;
- (_Bool)isCertExist;
- (id)loadPayCodeInfo;
- (_Bool)needAutoRefresh;
@property(retain, nonatomic) NSMutableDictionary *payCodeInfo; // @synthesize payCodeInfo=_payCodeInfo;
- (id)qbarImageForToken:(id)arg1 size:(struct CGSize)arg2 qbarCodeNumFontSize:(double)arg3 qbarCodeCodeHeight:(double)arg4;
- (void)qwallet;
- (void)requestCodeCheck;
- (void)requestCodeGenerate:(id)arg1;
- (void)requestCodeGenerate:(id)arg1 byAuto:(_Bool)arg2;
- (void)requestCodeGenerateByBackGround:(id)arg1;
- (void)requestCodeOpen:(id)arg1;
- (void)resetCodeGenerateSign;
- (void)savePayCodeInfo;
- (void)setCertId:(id)arg1;
- (void)setDefaultPayTypeIndex:(unsigned long long)arg1;
- (void)setDefaultSerial:(id)arg1;
- (void)setPayTypeInfo:(id)arg1;
- (_Bool)setToken:(id)arg1;
- (void)setTokenMD5:(id)arg1;
- (void)setTokenPrefix:(id)arg1;
- (id)signDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


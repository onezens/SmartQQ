//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQSecurityConfigFetcherDelegate.h"

@class NSDictionary, NSString;

@interface QQSensMsgTipsConfig : NSObject <QQSecurityConfigFetcherDelegate>
{
    unsigned int _currentVersion;
    unsigned int _validTime;
    unsigned int _updTime;
    unsigned long long _targetVersion;
    NSString *_targetMD5;
    NSString *_targetDownloadURL;
    int _xo;
    NSDictionary *_tipsConfig;
}

+ (id)shareInstance;
- (id)configMetaInfo;
- (void)didLoadLocalConfigData:(id)arg1 andMetaInfo:(id)arg2;
- (void)didRecvCloudConfigData:(id)arg1 andMetaInfo:(id)arg2;
- (id)init;
- (id)modelOfType:(unsigned long long)arg1 withAttribute:(unsigned long long)arg2;
- (_Bool)neededRestoreLocal;
- (id)parseSensMsgTipsConfig:(id)arg1;
- (_Bool)parseSensitiveTipsConfig:(id)arg1;
- (void)setConfigMetaInfo:(id)arg1;
@property(retain) NSDictionary *tipsConfig; // @synthesize tipsConfig=_tipsConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *targetDownloadURL; // @dynamic targetDownloadURL;
@property(retain, nonatomic) NSString *targetMD5; // @dynamic targetMD5;
@property(nonatomic) unsigned long long targetVersion; // @dynamic targetVersion;

@end

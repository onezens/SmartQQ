//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, QQOIDBSSORequest;

@interface QQGroupRobotKeywordManager : NSObject
{
    unsigned int _version;
    id <QQGroupRobotKeywordManagerDelegate> _delegate;
    unsigned long long _groupCode;
    unsigned long long _robotUIN;
    NSArray *_sections;
    QQOIDBSSORequest *_keywordReq;
    QQOIDBSSORequest *_sendKeywordToServerReq;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <QQGroupRobotKeywordManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getKeywordsFilePath;
- (void)getKeywordsFromFile;
- (void)getRobotKeywords;
@property(nonatomic) unsigned long long groupCode; // @synthesize groupCode=_groupCode;
- (id)initWithGroupCode:(unsigned long long)arg1;
@property(retain, nonatomic) QQOIDBSSORequest *keywordReq; // @synthesize keywordReq=_keywordReq;
- (void)requestRobotKeywords;
@property(nonatomic) unsigned long long robotUIN; // @synthesize robotUIN=_robotUIN;
- (void)saveKeywordsToFile;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) QQOIDBSSORequest *sendKeywordToServerReq; // @synthesize sendKeywordToServerReq=_sendKeywordToServerReq;
- (void)sendKeywordToServerWithKeyword:(id)arg1;
@property(nonatomic) unsigned int version; // @synthesize version=_version;

@end


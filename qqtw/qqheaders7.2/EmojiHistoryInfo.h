//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class EmojiInfo, NSString;

@interface EmojiHistoryInfo : NSObject <NSCoding>
{
    _Bool _isNewDownload;
    _Bool _isAPNG;
    int _roamState;
    unsigned int _serverIndex;
    unsigned int _customFaceType;
    long long _tabId;
    long long _faceId;
    NSString *_emojiStr;
    NSString *_customFaceName;
    EmojiInfo *_emoji;
    NSString *_url;
    NSString *_fileName;
    unsigned long long _downloadStatus;
    NSString *_md5;
    long long _diversionType;
    NSString *_diversionSourceName;
    NSString *_diversionLink;
    NSString *_diversionTypeName;
    unsigned long long _startTime;
    unsigned long long _endTime;
}

@property(copy, nonatomic) NSString *customFaceName; // @synthesize customFaceName=_customFaceName;
@property(nonatomic) unsigned int customFaceType; // @synthesize customFaceType=_customFaceType;
- (void)dealloc;
- (id)description;
@property(copy, nonatomic) NSString *diversionLink; // @synthesize diversionLink=_diversionLink;
@property(copy, nonatomic) NSString *diversionSourceName; // @synthesize diversionSourceName=_diversionSourceName;
@property(nonatomic) long long diversionType; // @synthesize diversionType=_diversionType;
@property(copy, nonatomic) NSString *diversionTypeName; // @synthesize diversionTypeName=_diversionTypeName;
@property(nonatomic) unsigned long long downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(retain, nonatomic) EmojiInfo *emoji; // @synthesize emoji=_emoji;
@property(copy, nonatomic) NSString *emojiStr; // @synthesize emojiStr=_emojiStr;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long faceId; // @synthesize faceId=_faceId;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool isAPNG; // @synthesize isAPNG=_isAPNG;
- (_Bool)isDownloadFailHistory;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) _Bool isNewDownload; // @synthesize isNewDownload=_isNewDownload;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) int roamState; // @synthesize roamState=_roamState;
@property(nonatomic) unsigned int serverIndex; // @synthesize serverIndex=_serverIndex;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long tabId; // @synthesize tabId=_tabId;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;

@end


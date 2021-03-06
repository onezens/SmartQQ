//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FTSVoiceInfoExtReq : NSObject
{
    unsigned int _codeFormat;
    unsigned int _sampleRate;
    unsigned int _sampleBits;
    unsigned int _channels;
    unsigned int _needPinyin;
    NSString *_qid;
    NSString *_uuid;
    NSString *_fromUin;
    NSString *_filePath;
    NSString *_fileMd5;
    long long _fileSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int channels; // @synthesize channels=_channels;
@property(nonatomic) unsigned int codeFormat; // @synthesize codeFormat=_codeFormat;
- (void)dealloc;
@property(copy, nonatomic) NSString *fileMd5; // @synthesize fileMd5=_fileMd5;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *fromUin; // @synthesize fromUin=_fromUin;
- (id)init;
@property(nonatomic) unsigned int needPinyin; // @synthesize needPinyin=_needPinyin;
@property(copy, nonatomic) NSString *qid; // @synthesize qid=_qid;
@property(nonatomic) unsigned int sampleBits; // @synthesize sampleBits=_sampleBits;
@property(nonatomic) unsigned int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

@end


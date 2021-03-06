//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface OfflineImgInfo : NSObject
{
    NSString *_fileResid;
    NSString *_fileName;
    unsigned int _fileLen;
    int _imgType;
    NSData *_fileMd5;
    NSString *_oldUuid;
    int _oprationType;
    unsigned int _showLen;
    unsigned int _downloadLen;
    unsigned int _picHeight;
    unsigned int _picWidth;
    unsigned int _isRawPic;
    _Bool _isCommonFlashPic;
    unsigned int _imgBizType;
    unsigned int _customFaceType;
    unsigned int _emojiPackageId;
    int _xo;
    unsigned int fileLen;
    int imgType;
    unsigned int picHeight;
    unsigned int picWidth;
    unsigned int isRawPic;
    int oprationType;
    unsigned int showLen;
    unsigned int downloadLen;
    NSString *fileName;
    NSData *fileMd5;
    NSString *_doutuSupplier;
    NSString *_text;
}

- (void)dealloc;
@property(retain, nonatomic) NSString *doutuSupplier; // @synthesize doutuSupplier=_doutuSupplier;
@property(nonatomic) unsigned int downloadLen; // @synthesize downloadLen;
@property(nonatomic) unsigned int fileLen; // @synthesize fileLen;
@property(retain, nonatomic) NSData *fileMd5; // @synthesize fileMd5;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName;
@property(nonatomic) int imgType; // @synthesize imgType;
@property(nonatomic) _Bool isCommonFlashPic; // @synthesize isCommonFlashPic=_isCommonFlashPic;
@property(nonatomic) unsigned int isRawPic; // @synthesize isRawPic;
@property(retain, nonatomic) NSString *oldUuid; // @synthesize oldUuid=_oldUuid;
@property(nonatomic) int oprationType; // @synthesize oprationType;
@property(nonatomic) unsigned int picHeight; // @synthesize picHeight;
@property(nonatomic) unsigned int picWidth; // @synthesize picWidth;
@property(nonatomic) unsigned int showLen; // @synthesize showLen;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;

// Remaining properties
@property(nonatomic) unsigned int customFaceType; // @dynamic customFaceType;
@property(nonatomic) unsigned int emojiPackageId; // @dynamic emojiPackageId;
@property(retain, nonatomic) NSString *fileResid; // @dynamic fileResid;
@property(nonatomic) unsigned int imgBizType; // @dynamic imgBizType;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class HotPicThirdPartyInfo, NSString;

@interface HotPicInfo : NSObject <NSCopying, NSCoding>
{
    _Bool _isRecentInfo;
    NSString *_fileMD5;
    unsigned long long _fileType;
    unsigned long long _fileSize;
    NSString *_downloadURL;
    NSString *_thumbMD5;
    unsigned long long _thumbFileSize;
    NSString *_thumbDownloadURL;
    unsigned long long _index;
    unsigned long long _sourceType;
    HotPicThirdPartyInfo *_thirdPartyInfo;
    NSString *_videoPreviewUUID;
    NSString *_videoIconUrl;
    NSString *_videoSignIconUrl;
    NSString *_videoJumpUrl;
    NSString *_videoName;
    NSString *_videoSource;
    unsigned long long _videoLength;
    unsigned long long _videoWidth;
    unsigned long long _videoHeight;
    NSString *_videoUUID;
    NSString *_videoMD5;
    unsigned long long _videoFileSize;
    long long _sendTime;
    struct CGSize _imageSize;
    struct CGSize _thumbImageSize;
}

- (void).cxx_destruct;
- (_Bool)compareWithOtherInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(copy) NSString *downloadURL; // @synthesize downloadURL=_downloadURL;
- (void)encodeWithCoder:(id)arg1;
@property(copy) NSString *fileMD5; // @synthesize fileMD5=_fileMD5;
@property unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property unsigned long long fileType; // @synthesize fileType=_fileType;
@property struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property unsigned long long index; // @synthesize index=_index;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool isRecentInfo; // @synthesize isRecentInfo=_isRecentInfo;
@property(nonatomic) long long sendTime; // @synthesize sendTime=_sendTime;
@property unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(copy) HotPicThirdPartyInfo *thirdPartyInfo; // @synthesize thirdPartyInfo=_thirdPartyInfo;
@property(copy) NSString *thumbDownloadURL; // @synthesize thumbDownloadURL=_thumbDownloadURL;
@property unsigned long long thumbFileSize; // @synthesize thumbFileSize=_thumbFileSize;
@property struct CGSize thumbImageSize; // @synthesize thumbImageSize=_thumbImageSize;
@property(copy) NSString *thumbMD5; // @synthesize thumbMD5=_thumbMD5;
@property unsigned long long videoFileSize; // @synthesize videoFileSize=_videoFileSize;
@property unsigned long long videoHeight; // @synthesize videoHeight=_videoHeight;
@property(copy) NSString *videoIconUrl; // @synthesize videoIconUrl=_videoIconUrl;
@property(copy) NSString *videoJumpUrl; // @synthesize videoJumpUrl=_videoJumpUrl;
@property unsigned long long videoLength; // @synthesize videoLength=_videoLength;
@property(copy) NSString *videoMD5; // @synthesize videoMD5=_videoMD5;
@property(copy) NSString *videoName; // @synthesize videoName=_videoName;
@property(copy) NSString *videoPreviewUUID; // @synthesize videoPreviewUUID=_videoPreviewUUID;
@property(copy) NSString *videoSignIconUrl; // @synthesize videoSignIconUrl=_videoSignIconUrl;
@property(copy) NSString *videoSource; // @synthesize videoSource=_videoSource;
@property(copy) NSString *videoUUID; // @synthesize videoUUID=_videoUUID;
@property unsigned long long videoWidth; // @synthesize videoWidth=_videoWidth;

@end


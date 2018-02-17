//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface QQRichImageParamDpc : NSObject
{
    double _fullScreenImageSlenderEdge;
    double _longImageWidthHeightProportion;
    unsigned long long _longImageScaleMaxFileSize;
    struct CGSize _longImageScaleTargetSize;
    struct CGSize _scaleMaxSize;
    double _scaleBigLongSide;
    double _scaleLongSideSpecail;
    double _richImageScreenWidth;
    double _richImageScreenHeight;
    double _compressionScreenCaptureQuality;
    double _compressionNormalWifiQuality;
    double _compressionNormal4GQuality;
    double _compressionNormalXGQuality;
    double _compressionOriginalQulity;
    double _richImagePaopaoMaxSide;
    double _richImagePaopaoMinSideScaler;
    double _richAnimationImagePaopaoMaxSide;
    double _richAnimationImagePaopaoMinSideScaler;
    double _richImagePickerReportMaxTime;
    double _richImageEditMaxSide;
    _Bool _encryptDownloadPicUrl;
    _Bool _encryptDownloadPicData;
    _Bool _aioDisplayCameraBtn;
    int _xo;
    double _compressionScreenCaptureQuality_Wifi;
    double _compressionScreenCaptureQuality_4G;
    double _compressionScreenCaptureQuality_3G_2G;
    _Bool _enableBigThumb;
    _Bool _enableMultiMsgDelaySend;
    _Bool _bBracketedCaptureEnabled;
    double _bigThumbMaxSide;
    double _bigThumbMinSide;
    double _bigThumbLongImageRatio;
    double _bigThumbShowGifIconMinSide;
    long long _multiMsgDelaySendNum;
    long long _multiMsgDelaySendDelay;
    long long _richImagePickerCaptureDevicePosition;
    long long _richImagePickerFlashMode;
    NSString *_richImagePickerCaptureSessionPresetNameFront;
    NSString *_richImagePickerCaptureSessionPresetName;
    double _photoBrowserLoadingLimit;
    NSMutableArray *_compressionScreenCaptureFormatAndLongSide;
    NSMutableArray *_compressionScreenCaptureFormatAndLongSideGup;
    NSMutableArray *_compressionScreenCaptureFormatAndLongSideDis;
    NSArray *_scaleNormalLongSides;
    NSMutableDictionary *_jpegCompressedQuality;
    NSMutableDictionary *_jpegCompressedSize;
    NSString *_bigPicWifiAutoDownPolicy;
    struct CGSize _richImagePickerCaptureResolutionFront;
    struct CGSize _richImagePickerCaptureResolution;
}

+ (id)getInstance;
@property(nonatomic) _Bool bBracketedCaptureEnabled; // @synthesize bBracketedCaptureEnabled=_bBracketedCaptureEnabled;
- (_Bool)bigPicWifiAutoDownEnabled:(int)arg1;
@property(retain, nonatomic) NSString *bigPicWifiAutoDownPolicy; // @synthesize bigPicWifiAutoDownPolicy=_bigPicWifiAutoDownPolicy;
@property(nonatomic) double bigThumbLongImageRatio; // @synthesize bigThumbLongImageRatio=_bigThumbLongImageRatio;
@property(nonatomic) double bigThumbMaxSide; // @synthesize bigThumbMaxSide=_bigThumbMaxSide;
@property(nonatomic) double bigThumbMinSide; // @synthesize bigThumbMinSide=_bigThumbMinSide;
@property(nonatomic) double bigThumbShowGifIconMinSide; // @synthesize bigThumbShowGifIconMinSide=_bigThumbShowGifIconMinSide;
@property(nonatomic) double compressionNormalQuality; // @dynamic compressionNormalQuality;
@property(retain, nonatomic) NSMutableArray *compressionScreenCaptureFormatAndLongSide; // @synthesize compressionScreenCaptureFormatAndLongSide=_compressionScreenCaptureFormatAndLongSide;
@property(retain, nonatomic) NSMutableArray *compressionScreenCaptureFormatAndLongSideDis; // @synthesize compressionScreenCaptureFormatAndLongSideDis=_compressionScreenCaptureFormatAndLongSideDis;
@property(retain, nonatomic) NSMutableArray *compressionScreenCaptureFormatAndLongSideGup; // @synthesize compressionScreenCaptureFormatAndLongSideGup=_compressionScreenCaptureFormatAndLongSideGup;
@property(nonatomic) double compressionScreenCaptureQuality; // @dynamic compressionScreenCaptureQuality;
- (void)dealloc;
@property(nonatomic) _Bool enableBigThumb; // @synthesize enableBigThumb=_enableBigThumb;
@property(nonatomic) _Bool enableMultiMsgDelaySend; // @synthesize enableMultiMsgDelaySend=_enableMultiMsgDelaySend;
- (id)get4FloatNetDicFromString:(id)arg1;
- (_Bool)getCompressQualityFromString:(id)arg1;
- (void)getConfigInfo;
- (id)init;
@property(retain, nonatomic) NSMutableDictionary *jpegCompressedQuality; // @synthesize jpegCompressedQuality=_jpegCompressedQuality;
- (double)jpegCompressedQuality:(int)arg1;
@property(retain, nonatomic) NSMutableDictionary *jpegCompressedSize; // @synthesize jpegCompressedSize=_jpegCompressedSize;
- (double)jpegCompressedSize:(int)arg1;
@property(nonatomic) long long multiMsgDelaySendDelay; // @synthesize multiMsgDelaySendDelay=_multiMsgDelaySendDelay;
@property(nonatomic) long long multiMsgDelaySendNum; // @synthesize multiMsgDelaySendNum=_multiMsgDelaySendNum;
- (id)netType;
@property(readonly, nonatomic) double photoBrowserLoadingLimit; // @synthesize photoBrowserLoadingLimit=_photoBrowserLoadingLimit;
@property(nonatomic) long long richImagePickerCaptureDevicePosition; // @synthesize richImagePickerCaptureDevicePosition=_richImagePickerCaptureDevicePosition;
@property(nonatomic) struct CGSize richImagePickerCaptureResolution; // @synthesize richImagePickerCaptureResolution=_richImagePickerCaptureResolution;
@property(nonatomic) struct CGSize richImagePickerCaptureResolutionFront; // @synthesize richImagePickerCaptureResolutionFront=_richImagePickerCaptureResolutionFront;
@property(retain, nonatomic) NSString *richImagePickerCaptureSessionPresetName; // @synthesize richImagePickerCaptureSessionPresetName=_richImagePickerCaptureSessionPresetName;
@property(retain, nonatomic) NSString *richImagePickerCaptureSessionPresetNameFront; // @synthesize richImagePickerCaptureSessionPresetNameFront=_richImagePickerCaptureSessionPresetNameFront;
@property(nonatomic) long long richImagePickerFlashMode; // @synthesize richImagePickerFlashMode=_richImagePickerFlashMode;
- (double)scaleNormalLongSide;
- (double)scaleNormalLongSide:(int)arg1;
@property(retain, nonatomic) NSArray *scaleNormalLongSides; // @synthesize scaleNormalLongSides=_scaleNormalLongSides;
- (int)screenSnapshotImageFormat:(unsigned long long)arg1 sessionType:(int)arg2;
- (double)screenSnapshotImageLongSide:(unsigned long long)arg1 sessionType:(int)arg2;
- (id)sessionType:(int)arg1;
- (void)setDefaultScaleLongSideNormal:(unsigned long long)arg1;
- (void)updateDpcConfig:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool aioDisplayCameraBtn; // @dynamic aioDisplayCameraBtn;
@property(nonatomic) double compressionOriginalQulity; // @dynamic compressionOriginalQulity;
@property(nonatomic) _Bool encryptDownloadPicData; // @dynamic encryptDownloadPicData;
@property(nonatomic) _Bool encryptDownloadPicUrl; // @dynamic encryptDownloadPicUrl;
@property(nonatomic) double fullScreenImageSlenderEdge; // @dynamic fullScreenImageSlenderEdge;
@property(nonatomic) unsigned long long longImageScaleMaxFileSize; // @dynamic longImageScaleMaxFileSize;
@property(nonatomic) struct CGSize longImageScaleTargetSize; // @dynamic longImageScaleTargetSize;
@property(nonatomic) double longImageWidthHeightProportion; // @dynamic longImageWidthHeightProportion;
@property(nonatomic) double richImageEditMaxSide; // @dynamic richImageEditMaxSide;
@property(nonatomic) double richImagePickerReportMaxTime; // @dynamic richImagePickerReportMaxTime;
@property(nonatomic) double richImageScreenHeight; // @dynamic richImageScreenHeight;
@property(nonatomic) double richImageScreenWidth; // @dynamic richImageScreenWidth;
@property(nonatomic) double scaleBigLongSide; // @dynamic scaleBigLongSide;
@property(nonatomic) double scaleLongSideSpecail; // @dynamic scaleLongSideSpecail;
@property(nonatomic) struct CGSize scaleMaxSize; // @dynamic scaleMaxSize;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface QQRichTinyVideoDPC : NSObject
{
    int _platform;
    NSMutableDictionary *_tinyVideoPreDownloadFile;
    NSMutableDictionary *_shortVideoPreDownloadFile;
    NSMutableDictionary *_tinyVideoAutoDownloadFile;
    NSMutableDictionary *_tinyVideoAutoDownloadThumb;
    NSMutableDictionary *_tinyVideoFileResolutions;
    NSMutableDictionary *_tinyVideoFileBitrates;
    NSMutableDictionary *_tinyVideoDDBitrates;
    NSMutableDictionary *_tinyVideoDDResolutions;
    unsigned int _tinyVideoDDFps;
    unsigned int _tinyVideoDDFpsFront;
    _Bool _IsEnableVideoExtraction;
    NSArray *_extractVideoWebsiteList;
    double _tinyVideoThumbQuality;
    struct CGSize _tinyVideoRecordResolution;
    unsigned long long _tinyVideoRecordBitrate;
    double _TinyVideoRecordVideoSampleCriticalTime;
    unsigned long long _ptvFileBitrate;
    unsigned int _tinyVideoBeautyLevel;
    unsigned int _tinyVideoDDRenderAlphaFix;
    unsigned int _tinyVideoSmoothLevel;
    unsigned int _tinyVideoCapturePixelFormat;
    double _tinyVideoDDRenderScale;
    _Bool _enableTinyVideo;
    _Bool _autoPlayTinyVideoInAIO;
    _Bool _tinyVideoHDEnable;
    _Bool _tinyVideoSaveEnable;
    _Bool _videoPreloadEnable;
    _Bool _bHighResolutionStillImageOutputEnabled;
    _Bool _bShouldPreReserveVideo;
    _Bool _supportDynamicDecoration;
    int _shortVideoPreDownloadDuration;
    int _videoPreloadEnableEditTimesDaily;
    float _videoPreloadSectionDuration;
    int _videoPreloadSureMaxWaitingTime;
    long long _autoDownloadTimeOutInterval;
    double _tinyVideoDuration;
    double _guiderVideoDuration;
    double _ptvMaxTime;
    double _ptvMinDuration;
    double _ptvCellThumbMaxSide;
    double _ptvBeautyFreeMemLimit;
    double _shortVideoCellMaxSide;
    double _shortVideoCellMiniSide;
    double _tinyVideoCellMaxSide;
    double _tinyVideoCellMiniSide;
    long long _richMediaPickerDefaultCamera;
    NSString *_tinyVideoRecordPresetName;
    NSString *_tinyVideoRecordPresetNameFront;
    NSString *_tinyVideoRecordPresetNamePhoto;
    NSString *_tinyVideoRecordPresetNamePhotoFront;
    NSDictionary *_videoPreloadEnableNet;
    NSMutableDictionary *_shortVideoThumbMaxLongSide;
    NSMutableDictionary *_shortVideoThumbQuality;
    NSString *_tinyVideoDDPresetName;
    NSString *_tinyVideoDDPresetNameFront;
    struct CGSize _tinyVideoHDSize;
    struct CGSize _tinyVideoDDDeviceCaptureResolution;
    struct CGSize _tinyVideoDDDeviceCaptureResolutionFront;
    struct CGSize _tinyVideoNightModeCaptureResolution;
}

+ (id)getInstance;
@property(nonatomic) _Bool IsEnableVideoExtraction; // @synthesize IsEnableVideoExtraction=_IsEnableVideoExtraction;
- (double)TinyVideoRecordVideoSampleCriticalTime;
- (void)_setDefaultVideoExtractionSetting;
- (void)_updateExtractVideoWebsiteList:(id)arg1;
- (void)_updateVideoExtractionSetting;
- (id)_websiteDomainNameForUrl:(id)arg1 websiteList:(id)arg2;
@property(readonly, nonatomic) long long autoDownloadTimeOutInterval; // @synthesize autoDownloadTimeOutInterval=_autoDownloadTimeOutInterval;
- (_Bool)autoDownloadTinyVideoFile:(int)arg1;
@property(readonly, nonatomic) _Bool autoPlayTinyVideoInAIO; // @synthesize autoPlayTinyVideoInAIO=_autoPlayTinyVideoInAIO;
@property(readonly, nonatomic) _Bool bHighResolutionStillImageOutputEnabled; // @synthesize bHighResolutionStillImageOutputEnabled=_bHighResolutionStillImageOutputEnabled;
@property(readonly, nonatomic) _Bool bShouldPreReserveVideo; // @synthesize bShouldPreReserveVideo=_bShouldPreReserveVideo;
- (id)bitrateFromString:(id)arg1;
- (void)dealloc;
- (_Bool)enableDynamicDecoration;
- (_Bool)enablePreloadVideoByNet;
@property(readonly, nonatomic) _Bool enableTinyVideo; // @synthesize enableTinyVideo=_enableTinyVideo;
@property(retain, nonatomic) NSArray *extractVideoWebsiteList; // @synthesize extractVideoWebsiteList=_extractVideoWebsiteList;
- (id)get4FloatNetDicFromString:(id)arg1;
- (int)getSessionType:(id)arg1;
@property(nonatomic) double guiderVideoDuration; // @synthesize guiderVideoDuration=_guiderVideoDuration;
- (id)init;
- (_Bool)isInVideoExtractionWebsiteList:(id)arg1;
- (id)net4Type:(int)arg1;
- (id)netType:(int)arg1;
- (id)netTypeValueFromString:(id)arg1;
- (_Bool)preDownloadShortVideoFile:(int)arg1;
- (_Bool)preDownloadTinyVideoFile:(int)arg1;
@property(nonatomic) double ptvBeautyFreeMemLimit; // @synthesize ptvBeautyFreeMemLimit=_ptvBeautyFreeMemLimit;
@property(nonatomic) double ptvCellThumbMaxSide; // @synthesize ptvCellThumbMaxSide=_ptvCellThumbMaxSide;
- (unsigned long long)ptvFileBitrate;
@property(nonatomic) double ptvMaxTime; // @synthesize ptvMaxTime=_ptvMaxTime;
@property(nonatomic) double ptvMinDuration; // @synthesize ptvMinDuration=_ptvMinDuration;
- (id)resolutionValueFromString:(id)arg1;
@property(nonatomic) long long richMediaPickerDefaultCamera; // @synthesize richMediaPickerDefaultCamera=_richMediaPickerDefaultCamera;
- (id)sesstionType:(int)arg1;
- (void)setDefault;
@property(nonatomic) double shortVideoCellMaxSide; // @synthesize shortVideoCellMaxSide=_shortVideoCellMaxSide;
@property(nonatomic) double shortVideoCellMiniSide; // @synthesize shortVideoCellMiniSide=_shortVideoCellMiniSide;
@property(nonatomic) int shortVideoPreDownloadDuration; // @synthesize shortVideoPreDownloadDuration=_shortVideoPreDownloadDuration;
@property(retain, nonatomic) NSMutableDictionary *shortVideoThumbMaxLongSide; // @synthesize shortVideoThumbMaxLongSide=_shortVideoThumbMaxLongSide;
@property(retain, nonatomic) NSMutableDictionary *shortVideoThumbQuality; // @synthesize shortVideoThumbQuality=_shortVideoThumbQuality;
@property(nonatomic) _Bool supportDynamicDecoration; // @synthesize supportDynamicDecoration=_supportDynamicDecoration;
@property(nonatomic) double tinyVideoCellMaxSide; // @synthesize tinyVideoCellMaxSide=_tinyVideoCellMaxSide;
@property(nonatomic) double tinyVideoCellMiniSide; // @synthesize tinyVideoCellMiniSide=_tinyVideoCellMiniSide;
@property(nonatomic) struct CGSize tinyVideoDDDeviceCaptureResolution; // @synthesize tinyVideoDDDeviceCaptureResolution=_tinyVideoDDDeviceCaptureResolution;
@property(nonatomic) struct CGSize tinyVideoDDDeviceCaptureResolutionFront; // @synthesize tinyVideoDDDeviceCaptureResolutionFront=_tinyVideoDDDeviceCaptureResolutionFront;
@property(retain, nonatomic) NSString *tinyVideoDDPresetName; // @synthesize tinyVideoDDPresetName=_tinyVideoDDPresetName;
@property(retain, nonatomic) NSString *tinyVideoDDPresetNameFront; // @synthesize tinyVideoDDPresetNameFront=_tinyVideoDDPresetNameFront;
@property(nonatomic) double tinyVideoDuration; // @synthesize tinyVideoDuration=_tinyVideoDuration;
@property(nonatomic) _Bool tinyVideoHDEnable; // @synthesize tinyVideoHDEnable=_tinyVideoHDEnable;
@property(nonatomic) struct CGSize tinyVideoHDSize; // @synthesize tinyVideoHDSize=_tinyVideoHDSize;
@property(nonatomic) struct CGSize tinyVideoNightModeCaptureResolution; // @synthesize tinyVideoNightModeCaptureResolution=_tinyVideoNightModeCaptureResolution;
@property(retain, nonatomic) NSString *tinyVideoRecordPresetName; // @synthesize tinyVideoRecordPresetName=_tinyVideoRecordPresetName;
@property(retain, nonatomic) NSString *tinyVideoRecordPresetNameFront; // @synthesize tinyVideoRecordPresetNameFront=_tinyVideoRecordPresetNameFront;
@property(retain, nonatomic) NSString *tinyVideoRecordPresetNamePhoto; // @synthesize tinyVideoRecordPresetNamePhoto=_tinyVideoRecordPresetNamePhoto;
@property(retain, nonatomic) NSString *tinyVideoRecordPresetNamePhotoFront; // @synthesize tinyVideoRecordPresetNamePhotoFront=_tinyVideoRecordPresetNamePhotoFront;
@property(nonatomic) _Bool tinyVideoSaveEnable; // @synthesize tinyVideoSaveEnable=_tinyVideoSaveEnable;
@property(retain, nonatomic) NSDictionary *videoPreloadEnableNet; // @synthesize videoPreloadEnableNet=_videoPreloadEnableNet;
- (double)shortVideoThumbMaxLongSide:(int)arg1;
- (double)shortVideoThumbQuality:(int)arg1;
- (unsigned int)tinyVideoBeautyLevel;
- (unsigned int)tinyVideoCapturePixelFormat;
- (unsigned long long)tinyVideoDDBitrate:(int)arg1;
- (unsigned int)tinyVideoDDFps;
- (unsigned int)tinyVideoDDFpsFront;
- (unsigned int)tinyVideoDDRenderAlphaFix;
- (double)tinyVideoDDRenderScale;
- (struct CGSize)tinyVideoDDResolution:(int)arg1;
- (unsigned long long)tinyVideoFileBitrate:(int)arg1;
- (struct CGSize)tinyVideoFileResolution:(int)arg1;
- (unsigned long long)tinyVideoRecordBitrate;
- (struct CGSize)tinyVideoRecordResolution;
- (unsigned int)tinyVideoSmoothLevel;
- (double)tinyVideoThumbQuality;
- (void)updateDpc:(id)arg1;
@property(readonly, nonatomic) _Bool videoPreloadEnable; // @synthesize videoPreloadEnable=_videoPreloadEnable;
@property(readonly, nonatomic) int videoPreloadEnableEditTimesDaily; // @synthesize videoPreloadEnableEditTimesDaily=_videoPreloadEnableEditTimesDaily;
@property(readonly, nonatomic) float videoPreloadSectionDuration; // @synthesize videoPreloadSectionDuration=_videoPreloadSectionDuration;
@property(readonly, nonatomic) int videoPreloadSureMaxWaitingTime; // @synthesize videoPreloadSureMaxWaitingTime=_videoPreloadSureMaxWaitingTime;
- (id)websiteDomainNameForExtractionUrl:(id)arg1;

@end

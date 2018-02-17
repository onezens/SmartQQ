//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface VideoRecordSettings : NSObject
{
    NSDictionary *_videoSettings;
    NSDictionary *_videoCompressionSettings;
    NSDictionary *_audioCompressionSettings;
    NSDictionary *_adaptorSettings;
    NSDictionary *_videoTrackOutputSetting;
    NSDictionary *_audioTrackOutputSetting;
    struct CGSize _rr;
    struct CGSize _compressSize;
    struct CGSize _adaptorSize;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *adaptorSettings; // @synthesize adaptorSettings=_adaptorSettings;
@property(nonatomic) struct CGSize adaptorSize; // @synthesize adaptorSize=_adaptorSize;
@property(retain, nonatomic) NSDictionary *audioCompressionSettings; // @synthesize audioCompressionSettings=_audioCompressionSettings;
@property(retain, nonatomic) NSDictionary *audioTrackOutputSetting; // @synthesize audioTrackOutputSetting=_audioTrackOutputSetting;
- (struct CGSize)calcSplitAdaptorSize;
- (void)clear;
@property(nonatomic) struct CGSize compressSize; // @synthesize compressSize=_compressSize;
- (float)getCompressVideoBitRate:(struct CGSize)arg1;
- (unsigned long long)getCompressVideoLongSize:(struct CGSize)arg1;
- (id)init;
- (struct CGSize)recordResolution;
@property(nonatomic) struct CGSize rr; // @synthesize rr=_rr;
- (void)setRecordResolution:(struct CGSize)arg1;
@property(retain, nonatomic) NSDictionary *videoCompressionSettings; // @synthesize videoCompressionSettings=_videoCompressionSettings;
@property(retain, nonatomic) NSDictionary *videoSettings; // @synthesize videoSettings=_videoSettings;
@property(retain, nonatomic) NSDictionary *videoTrackOutputSetting; // @synthesize videoTrackOutputSetting=_videoTrackOutputSetting;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQPersonalThemeStyleData, UIImage;

@interface QQPersonalThemeBgData : NSObject
{
    _Bool _status;
    _Bool _isRecommend;
    long long _bgID;
    NSString *_bgName;
    NSString *_appName;
    UIImage *_roamThumbImage;
    NSString *_aioImageURL;
    NSString *_thumbnailURL;
    NSString *_previewImageURL;
    int _xo;
    long long _feeType;
    unsigned long long _cellStyle;
    QQPersonalThemeStyleData *_styleData;
}

@property(nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
- (void)dealloc;
@property(nonatomic) long long feeType; // @synthesize feeType=_feeType;
@property(retain, nonatomic) QQPersonalThemeStyleData *styleData; // @synthesize styleData=_styleData;

// Remaining properties
@property(copy, nonatomic) NSString *aioImageURL; // @dynamic aioImageURL;
@property(copy, nonatomic) NSString *appName; // @dynamic appName;
@property(nonatomic) unsigned int bgID; // @dynamic bgID;
@property(copy, nonatomic) NSString *bgName; // @dynamic bgName;
@property(nonatomic) _Bool isRecommend; // @dynamic isRecommend;
@property(copy, nonatomic) NSString *previewImageURL; // @dynamic previewImageURL;
@property(retain, nonatomic) UIImage *roamThumbImage; // @dynamic roamThumbImage;
@property(nonatomic) _Bool status; // @dynamic status;
@property(copy, nonatomic) NSString *thumbnailURL; // @dynamic thumbnailURL;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class BubbleAnimationInfo, BubbleChartletAnimation, NSArray, NSMutableArray, NSMutableDictionary, NSString, QQLockDictionary, UIColor;

@interface BubbleBgInfo : QQModel
{
    NSMutableArray *_imagePaths;
    NSMutableArray *_imageAnimationPaths;
    NSMutableArray *_gifAnimations;
    NSString *_imageName;
    NSString *_BubbleID;
    NSString *_bubbleName;
    struct CGPoint _zoomPoint;
    struct CGRect _gifRect;
    int _loadType;
    double _animationTime;
    int _showIndex;
    NSString *_bubbleImpressionDrawingName;
    NSString *_currentBubbleIconName;
    BubbleAnimationInfo *_voiceAnimation;
    NSMutableArray *_keyAnimations;
    NSMutableDictionary *_allAnimations;
    NSString *_widthAnimationName;
    long long _widthAnimationStartWidth;
    NSString *_pendantAnimationName;
    long long _pendantAnimationId;
    double _minHeight;
    double _maxHeight;
    UIColor *_sendColor;
    UIColor *_receiveColor;
    UIColor *_linkColor;
    _Bool _isUpdatedBubble;
    BubbleChartletAnimation *_chartletAnimation;
    UIColor *_shadowBlurColor;
    int _xo;
    QQLockDictionary *_imageSourcesDictionary;
    _Bool _isCheckedSendColor;
    NSString *_frameAnimationName;
    NSString *_voicePrintAnimationName;
    UIColor *_shadowStrokeColor;
    UIColor *_shadowColor;
    double _colorThresholdFactor;
    NSArray *_loopArr;
    NSString *_mixBeginPrepareAnimationName;
    NSString *_mixMovingAnimationName;
    NSString *_mixEndMovingAnimationName;
    NSString *_mixReceiveAnimationName;
    NSArray *_mixKeyWords;
    long long _groupID;
    long long _groupType;
}

+ (struct UIEdgeInsets)GetBGInsetWithType:(int)arg1;
+ (struct CGContext *)newARGBBitmapContextFromImage:(struct CGImage *)arg1;
- (void).cxx_destruct;
- (id)GetImageWithType:(int)arg1;
- (id)GetImageWithType:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addImageSourceName:(id)arg1;
- (void)checkColor:(id)arg1;
- (void)clearAllImageCaches;
@property(nonatomic) double colorThresholdFactor; // @synthesize colorThresholdFactor=_colorThresholdFactor;
- (void)divideImage;
- (void)divideImageByType:(int)arg1;
- (void)divideImageIfNeeds:(int)arg1;
@property(copy, nonatomic) NSString *frameAnimationName; // @synthesize frameAnimationName=_frameAnimationName;
- (id)getImageOfDefaultBubbleWithType:(int)arg1;
- (int)getKeyType:(int)arg1;
- (id)getPictureCenterColor:(id)arg1;
- (void)getRGBComponents:(double [3])arg1 forColor:(id)arg2;
@property(nonatomic) long long groupID; // @synthesize groupID=_groupID;
@property(nonatomic) long long groupType; // @synthesize groupType=_groupType;
- (id)init;
- (_Bool)isLeftBubbleType:(int)arg1;
- (id)isLikeSameColor:(id)arg1 textColor:(id)arg2;
- (_Bool)isSplitBubbleType:(int)arg1;
- (_Bool)longTextIsDivide:(int)arg1 bubbleInfo:(id)arg2;
@property(retain, nonatomic) NSArray *loopArr; // @synthesize loopArr=_loopArr;
@property(copy, nonatomic) NSString *mixBeginPrepareAnimationName; // @synthesize mixBeginPrepareAnimationName=_mixBeginPrepareAnimationName;
@property(copy, nonatomic) NSString *mixEndMovingAnimationName; // @synthesize mixEndMovingAnimationName=_mixEndMovingAnimationName;
@property(retain, nonatomic) NSArray *mixKeyWords; // @synthesize mixKeyWords=_mixKeyWords;
@property(copy, nonatomic) NSString *mixMovingAnimationName; // @synthesize mixMovingAnimationName=_mixMovingAnimationName;
@property(copy, nonatomic) NSString *mixReceiveAnimationName; // @synthesize mixReceiveAnimationName=_mixReceiveAnimationName;
- (void)readSources;
- (void)readSourcesByType:(int)arg1;
@property(retain, nonatomic) UIColor *shadowBlurColor; // @synthesize shadowBlurColor=_shadowBlurColor;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *shadowStrokeColor; // @synthesize shadowStrokeColor=_shadowStrokeColor;
@property(copy, nonatomic) NSString *voicePrintAnimationName; // @synthesize voicePrintAnimationName=_voicePrintAnimationName;
- (id)sliceImage:(id)arg1;
- (id)voiceImageListWithPreName:(id)arg1;
- (id)voiceReceiveImage;
- (id)voiceReceiveImageList;
- (id)voiceReceiveImageList_voiceChange;
- (id)voiceReceiveImage_voiceChange;
- (id)voiceSendImage;
- (id)voiceSendImageList;
- (id)voiceSendImageList_voiceChange;
- (id)voiceSendImage_voiceChange;

// Remaining properties
@property(retain, nonatomic) NSString *BubbleID; // @dynamic BubbleID;
@property(retain, nonatomic) NSMutableDictionary *allAnimations; // @dynamic allAnimations;
@property(nonatomic) double animationTime; // @dynamic animationTime;
@property(retain, nonatomic) NSString *bubbleImpressionDrawingName; // @dynamic bubbleImpressionDrawingName;
@property(retain, nonatomic) NSString *bubbleName; // @dynamic bubbleName;
@property(retain, nonatomic) BubbleChartletAnimation *chartletAnimation; // @dynamic chartletAnimation;
@property(retain, nonatomic) NSString *currentBubbleIconName; // @dynamic currentBubbleIconName;
@property(nonatomic) struct CGRect gifRect; // @dynamic gifRect;
@property(retain, nonatomic) NSString *imageName; // @dynamic imageName;
@property(nonatomic) _Bool isUpdatedBubble; // @dynamic isUpdatedBubble;
@property(retain, nonatomic) NSMutableArray *keyAnimations; // @dynamic keyAnimations;
@property(retain, nonatomic) UIColor *linkColor; // @dynamic linkColor;
@property(nonatomic) int loadType; // @dynamic loadType;
@property(nonatomic) double maxHeight; // @dynamic maxHeight;
@property(nonatomic) double minHeight; // @dynamic minHeight;
@property(nonatomic) long long pendantAnimationId; // @dynamic pendantAnimationId;
@property(retain, nonatomic) NSString *pendantAnimationName; // @dynamic pendantAnimationName;
@property(retain, nonatomic) UIColor *receiveColor; // @dynamic receiveColor;
@property(retain, nonatomic) UIColor *sendColor; // @dynamic sendColor;
@property(nonatomic) int showIndex; // @dynamic showIndex;
@property(retain, nonatomic) BubbleAnimationInfo *voiceAnimation; // @dynamic voiceAnimation;
@property(retain, nonatomic) NSString *widthAnimationName; // @dynamic widthAnimationName;
@property(nonatomic) long long widthAnimationStartWidth; // @dynamic widthAnimationStartWidth;
@property(nonatomic) struct CGPoint zoomPoint; // @dynamic zoomPoint;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSDictionary;

@interface ContentBgView : CALayer
{
    _Bool _publicVideo;
    _Bool _isHighLight;
    int _contentBgType;
    NSDictionary *_configParam;
    CALayer *_giftBgLayer;
    CALayer *_couponBottomLayer;
    CALayer *_couponTopLayer;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)bgImageWithColorHexString:(id)arg1;
@property(retain, nonatomic) NSDictionary *configParam; // @synthesize configParam=_configParam;
@property(nonatomic) int contentBgType; // @synthesize contentBgType=_contentBgType;
@property(retain, nonatomic) CALayer *couponBottomLayer; // @synthesize couponBottomLayer=_couponBottomLayer;
@property(retain, nonatomic) CALayer *couponTopLayer; // @synthesize couponTopLayer=_couponTopLayer;
- (void)drawContents;
- (void)drawCouponBubble:(id)arg1 bottomElementColor:(id)arg2 inOrOut:(_Bool)arg3;
- (void)drawGiftBgIfNeeded;
@property(retain, nonatomic) CALayer *giftBgLayer; // @synthesize giftBgLayer=_giftBgLayer;
@property(nonatomic) _Bool isHighLight; // @synthesize isHighLight=_isHighLight;
@property(nonatomic, getter=isPublicVideo) _Bool publicVideo; // @synthesize publicVideo=_publicVideo;
- (void)setFrame:(struct CGRect)arg1;

@end


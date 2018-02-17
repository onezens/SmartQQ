//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBExtendedHitView.h"

@class UIImageView, UILabel;

@interface TBLikeButtonView : TBExtendedHitView
{
    double _normalImageCenterX;
    double _activeImageCenterX;
    _Bool _likeStatus;
    _Bool _isAnimating;
    _Bool _isDisplayNumber;
    UIImageView *_normalImage;
    UIImageView *_activeImage;
    UILabel *_normalLabel;
    UILabel *_activeLabel;
    UILabel *_numberLabel;
    long long _type;
    struct CGRect _imageSize;
    struct UIEdgeInsets _insets;
}

@property(retain, nonatomic) UIImageView *activeImage; // @synthesize activeImage=_activeImage;
@property(retain, nonatomic) UILabel *activeLabel; // @synthesize activeLabel=_activeLabel;
- (void)animateWithCurrentState;
- (void)dealloc;
@property(nonatomic) struct CGRect imageSize; // @synthesize imageSize=_imageSize;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1 withType:(long long)arg2;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool isDisplayNumber; // @synthesize isDisplayNumber=_isDisplayNumber;
@property(nonatomic) _Bool likeStatus; // @synthesize likeStatus=_likeStatus;
@property(retain, nonatomic) UIImageView *normalImage; // @synthesize normalImage=_normalImage;
@property(retain, nonatomic) UILabel *normalLabel; // @synthesize normalLabel=_normalLabel;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
- (void)popFitWithDuration:(double)arg1;
- (void)popUpWithDuration:(double)arg1;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)setup;
- (void)updateDisplayView;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface QQChatImageView : UIView
{
    _Bool _noRoundCorner;
    UIImageView *_contentImage;
    UIImageView *_iconImgView;
    UIImageView *_gifImgView;
}

+ (id)makeImageShapeMask:(struct CGRect)arg1;
@property(retain, nonatomic) UIImageView *contentImage; // @synthesize contentImage=_contentImage;
- (void)dealloc;
@property(retain, nonatomic) UIImageView *gifImgView; // @synthesize gifImgView=_gifImgView;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
- (void)initUI;
- (id)initWithCell:(id)arg1;
@property(nonatomic) _Bool noRoundCorner; // @synthesize noRoundCorner=_noRoundCorner;
- (void)reNewImageView;
- (void)renewLayerMask:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setIconImgHidden:(_Bool)arg1;
- (void)setImage:(id)arg1 width:(double)arg2 height:(double)arg3;
- (void)setTransparentBackground:(_Bool)arg1;
- (void)shouldShowGifIcon:(_Bool)arg1;
- (void)updateIconImgState:(unsigned long long)arg1;

@end


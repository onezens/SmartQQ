//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PhotoBrowserView.h"

#import "CountDownAnimationViewDelegate.h"

@class CountDownAnimationView, NSString, QQCircularProgressView, UIImageView, UILabel;

@interface PreviewSecretPictureView : PhotoBrowserView <CountDownAnimationViewDelegate>
{
    UIImageView *_iconImageView;
    UIImageView *_secretImageView;
    UIImageView *_mosaicImageView;
    UILabel *_descriptionLabel;
    CountDownAnimationView *_countAnimationView;
    QQCircularProgressView *_downloadProgressView;
    struct CGRect _calcRect;
    id <PreviewSecretPictureViewDelegate> _delegate;
    double _progress;
}

- (void).cxx_destruct;
- (void)animationForHideImage;
- (void)animationForShowImage;
- (id)compositeMosaicPreviewImage:(id)arg1 isHideDesc:(_Bool)arg2;
- (void)dealloc;
@property(nonatomic) id <PreviewSecretPictureViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didCountDownTimeOver;
- (struct CGRect)errorImageViewRect;
- (id)getCurrentImageView;
- (struct CGPoint)getCurrentImageViewPosition;
- (void)initDescriptionLabelWithFrame:(struct CGRect)arg1;
- (void)initDownCountAnimationView;
- (void)initPictureDownloadProgressView;
- (void)initSecretImageView;
- (id)initWithFrame:(struct CGRect)arg1 previewStatus:(unsigned long long)arg2;
- (_Bool)isHaveSecretImage;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)resetFlashPreviewFrame:(struct CGRect)arg1;
- (struct CGRect)secretImageViewRect;
- (void)setDownloadImageProgress:(double)arg1;
- (void)setPreviewStatus:(unsigned long long)arg1;
- (void)setSecretImage:(id)arg1;
- (void)showMosaicImage:(id)arg1 inRect:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


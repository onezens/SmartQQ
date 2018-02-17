//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "QZPhotoThumbDelegate.h"

@class NSObject, NSString, QZFeedPhoto, QZPhotoThumbProgressView, UIImage;

@interface QZPhotoThumbView : UIImageView <QZPhotoThumbDelegate>
{
    QZPhotoThumbProgressView *_progressView;
    UIImageView *_maskView;
    UIImage *_maskImage;
    NSObject *_data;
    _Bool _fade;
    _Bool _showProgress;
    id <QZPhotoThumbViewDelegate> _delegate;
    QZFeedPhoto *_thumb;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)clearProgress;
- (void)dealloc;
@property(nonatomic) __weak id <QZPhotoThumbViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didPhotoThumbDownloadFailed;
- (void)didPhotoThumbDownloadSuccess;
- (void)didPhotoThumbNeedDisplay;
- (void)didPhotoThumbNeedLayout;
- (void)didPhotoThumbProgress:(id)arg1;
- (void)initPublicThumbParam;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithParam:(id)arg1;
- (void)makeProgressViewReady;
- (void)pauseAnimation;
- (void)resumeAnimation;
- (void)setImage:(id)arg1;
- (void)setMaskImage:(id)arg1;
- (void)setOpaque:(_Bool)arg1;
- (void)setShowProgress:(_Bool)arg1;
@property(retain, nonatomic) QZFeedPhoto *thumb; // @synthesize thumb=_thumb;
- (void)setThumbUrl:(id)arg1;
- (void)smartUpdateOpaque;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupFileCellView.h"

#import "QQGroupFilePreviewImageDelegate.h"

@class CAGradientLayer, CAShapeLayer, NSString, QQGroupFilePreviewImageRequest, QQProgressLoadingView, UIActivityIndicatorView, UIImageView, UILabel, UITextView, UIView;

@interface QQGroupFileImageCellView : QQGroupFileCellView <QQGroupFilePreviewImageDelegate>
{
    UIImageView *_fileImageView;
    int _downloadPreviewSeq;
    QQGroupFilePreviewImageRequest *_previewReq;
    UILabel *_progressLabel;
    UIView *_progressCoverView;
    UITextView *_nameTextView;
    UILabel *_sizeLabel;
    UIView *_infoView;
    UIImageView *_statusImageView;
    UILabel *_statusLabel;
    UIActivityIndicatorView *_loadingIndicatorView;
    QQProgressLoadingView *_downloadProgressView;
    CAGradientLayer *_infoMaskLayer;
    CAShapeLayer *_borderLayer;
}

- (void).cxx_destruct;
- (void)beginLoading;
- (_Bool)bubbleAction;
- (void)drawBubbleMaskLayer:(id)arg1;
- (void)endLoading;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;
- (void)preparePaopao:(id)arg1;
- (void)refreshProgress;
- (void)refreshStatus;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didGetImageSize:(struct CGSize)arg2;
- (void)request:(id)arg1 didReceivedPreviewImage:(id)arg2;
- (_Bool)shouldDisplayMsgSendLoading;
- (void)showFailWithStatus:(id)arg1;
- (void)willDrawBubble;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


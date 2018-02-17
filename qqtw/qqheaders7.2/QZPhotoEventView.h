//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QZPhotoModuleDownloaderInterfaceDelegate.h"

@class MQZoneAutoPlayImageView, NSString, QZAutoPlayGifView, UIButton, UIImageView, UILabel;

@interface QZPhotoEventView : UIView <QZPhotoModuleDownloaderInterfaceDelegate>
{
    int _xo;
    MQZoneAutoPlayImageView *_autoPlayView;
    UILabel *_titleLabel;
    UIImageView *_decorationImgView;
    UIButton *_uploadButton;
    NSString *_weekDateStr;
    long long _assetsListCount;
    NSString *_titleStr;
    QZAutoPlayGifView *_gifImageView;
    _Bool _isPlayed;
    id <QZPhotoEventViewDelegate> _delegate;
    UILabel *_hintLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <QZPhotoEventViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QZAutoPlayGifView *gifImageView; // @synthesize gifImageView=_gifImageView;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
- (void)updateShowAnimatedImages:(id)arg1;

// Remaining properties
@property(nonatomic) long long assetsListCount; // @dynamic assetsListCount;
@property(retain, nonatomic) MQZoneAutoPlayImageView *autoPlayView; // @dynamic autoPlayView;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) UIImageView *decorationImgView; // @dynamic decorationImgView;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isPlayed; // @dynamic isPlayed;
@property(readonly) Class superclass;
@property(retain, nonatomic) UILabel *titleLabel; // @dynamic titleLabel;
@property(retain, nonatomic) NSString *titleStr; // @dynamic titleStr;
@property(retain, nonatomic) UIButton *uploadButton; // @dynamic uploadButton;
@property(retain, nonatomic) NSString *weekDateStr; // @dynamic weekDateStr;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AvatarServiceDelegate.h"
#import "QQWalletAIOMsgViewProtocol.h"

@class NSMutableArray, NSString, QQAsynUrlImageView, QQChatViewTable, QQWalletRedEnvelopeInfo, QQWalletTransferAIOMsgModel, UIButton, UIImageView, UILabel;

@interface QQWalletRedEnvelopeAIOMsgView : UIView <AvatarServiceDelegate, QQWalletAIOMsgViewProtocol>
{
    QQChatViewTable *_chatViewTable;
    UILabel *_title;
    UIImageView *_backgroudView;
    QQAsynUrlImageView *_themeImageView;
    UIImageView *_personalImageView;
    NSString *_themeImageURL;
    UIButton *_openTipsButton;
    UIButton *_openDetailButton;
    _Bool _hasOpenRedEnvelope;
    double _nickNameHeight;
    UIView *_specifyAvatarView;
    NSMutableArray *_specifyUinList;
    unsigned long long _msgType;
    int _xo;
    QQWalletTransferAIOMsgModel *_model;
    QQWalletRedEnvelopeInfo *_redEnvelopeInfo;
}

+ (double)heightForModel:(id)arg1;
- (void).cxx_destruct;
- (struct CGRect)bubleFrame;
- (id)buttonWithTitleColor:(id)arg1 fontSize:(double)arg2;
- (void)commonInit;
- (void)dealloc;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
- (void)handlePersonalImageDownloadSuccessNotification:(id)arg1;
- (void)handleQQWalletDownloadConfigImageFaildNotification:(id)arg1;
- (void)handleQQWalletDownloadConfigImageSuccessNotification:(id)arg1;
- (id)init;
- (id)initWithChatViewTable:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isAvailableInfo:(id)arg1;
- (void)layoutSubviews;
- (void)loadImagesFromFolder:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) QQWalletTransferAIOMsgModel *model; // @synthesize model=_model;
- (void)openDetailButtonDidTap:(id)arg1;
- (struct CGRect)openDetailButtonFrame;
- (void)passwordRedEnvelopeSetting:(id)arg1;
- (void)personalRedEnvelopeSetting:(id)arg1;
@property(retain, nonatomic) QQWalletRedEnvelopeInfo *redEnvelopeInfo; // @synthesize redEnvelopeInfo=_redEnvelopeInfo;
- (void)setOpenTipsButtonContent:(_Bool)arg1;
- (void)setPersonalImageViewForAIO:(id)arg1;
- (void)setPersonalShow:(id)arg1;
- (void)specifyRedEnvelopeSetting:(id)arg1;
- (void)themeRedEnvelopeSetting:(id)arg1;
- (void)updateSpecifyAvatarView;
- (void)voiceOverSupport;

// Remaining properties
@property(retain, nonatomic) UIImageView *backgroudView; // @dynamic backgroudView;
@property(nonatomic) __weak QQChatViewTable *chatViewTable; // @dynamic chatViewTable;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasOpenRedEnvelope; // @dynamic hasOpenRedEnvelope;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long msgType; // @dynamic msgType;
@property(nonatomic) double nickNameHeight; // @dynamic nickNameHeight;
@property(retain, nonatomic) UIButton *openDetailButton; // @dynamic openDetailButton;
@property(retain, nonatomic) UIButton *openTipsButton; // @dynamic openTipsButton;
@property(retain, nonatomic) UIImageView *personalImageView; // @dynamic personalImageView;
@property(retain, nonatomic) UIView *specifyAvatarView; // @dynamic specifyAvatarView;
@property(retain, nonatomic) NSMutableArray *specifyUinList; // @dynamic specifyUinList;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *themeImageURL; // @dynamic themeImageURL;
@property(retain, nonatomic) QQAsynUrlImageView *themeImageView; // @dynamic themeImageView;
@property(retain, nonatomic) UILabel *title; // @dynamic title;

@end


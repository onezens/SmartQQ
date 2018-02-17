//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSMItemElementBaseView.h"

@class NSString, QQAvatarView, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface QQSMItemElementContentView : QQSMItemElementBaseView
{
    QQAvatarView *_headView;
    UILabel *_nickLabel;
    UIImageView *_certifyView;
    UIButton *_fllowButton;
    UIButton *_previewButton;
    UILabel *_textLable;
    UIActivityIndicatorView *_loadingView;
    _Bool isCert;
    int contentType;
    NSString *puin;
    NSString *faceUrl;
    NSString *btnText;
    NSString *url;
}

- (void)PublicAccountUpdataMsgHandle:(id)arg1;
- (void)ResponseHandleForSetUnFollow:(id)arg1;
@property(retain, nonatomic) NSString *btnText; // @synthesize btnText;
- (void)clearSubView;
@property(nonatomic) int contentType; // @synthesize contentType;
- (void)dealloc;
- (void)drawActionTextView;
- (void)drawCertifyView;
- (void)drawFllowView;
- (void)drawHeadView;
- (void)drawNickView;
- (void)drawPreviewButton;
- (void)drawRect:(struct CGRect)arg1;
- (void)entryCard;
@property(retain, nonatomic) NSString *faceUrl; // @synthesize faceUrl;
- (void)followButtonClick;
- (void)hideLoadingView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isCert; // @synthesize isCert;
- (_Bool)isFollow;
@property(retain, nonatomic) NSString *puin; // @synthesize puin;
- (void)reporetDataWithTvalue:(int)arg1;
- (void)setQQSMItemElementBase:(id)arg1 parent:(id)arg2;
@property(retain, nonatomic) NSString *url; // @synthesize url;
- (void)showLoadingView;
- (void)singleTap;

@end


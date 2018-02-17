//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQActivityViewController.h"

#import "QQReaderBookLinkDelegate.h"
#import "RichMsgPreviewDialogDelegate.h"

@class NSArray, NSData, NSDictionary, NSString, QQHttpClientSession, QQRichMsgPreviewDialog;

@interface QQReaderBookShareController : QQActivityViewController <QQReaderBookLinkDelegate, RichMsgPreviewDialogDelegate>
{
    NSArray *_activities;
    int _shareType;
    NSString *_shareLink;
    NSString *_coverUrl;
    NSString *_introUrl;
    QQRichMsgPreviewDialog *_richMsgPreDlg;
    QQHttpClientSession *_session;
    NSData *_imageData;
    NSString *_bookIntro;
    NSDictionary *_bookDictionary;
}

@property(retain, nonatomic) NSDictionary *bookDictionary; // @synthesize bookDictionary=_bookDictionary;
- (void)bookLinkActivityDidAction:(id)arg1;
- (void)cancelButtonClick;
- (id)compressGroupHeadImageLimitTo32K:(id)arg1;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
- (void)dealloc;
- (void)doShareToFriends:(id)arg1;
- (void)doShareToQQ:(id)arg1;
- (void)doShareToQZone:(id)arg1;
- (void)doShareToWeiXin:(id)arg1;
- (void)doShareToWeibo:(id)arg1;
- (id)initWithFlag:(unsigned int)arg1;
- (id)loadCover;
- (id)loadIntro;
- (id)loadTitle;
- (id)loadTitlePlusIntro;
- (void)qqHttpSessionDidLoad:(id)arg1 result:(id)arg2;
- (void)qqHttpSessionError:(id)arg1 error:(id)arg2;
- (_Bool)requesCover;
- (_Bool)requestIntro;
- (void)sendButtonClick:(id)arg1 msg:(id)arg2;
- (void)shareGroupLink:(id)arg1;
- (id)shareUrl;
- (void)showGroupLinkActionSheet:(int)arg1;
- (void)showShareLinkDialog;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)weixinNotInstallTips;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


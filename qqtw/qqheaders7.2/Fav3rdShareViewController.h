//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavoritesViewController.h"

#import "QQPreviewImageDelegate.h"
#import "QUIAlertViewDelegate.h"
#import "RichMsgPreviewDialogDelegate.h"

@class NSString, QQPreviewImageRetriever, QQRichMsgPreviewDialog, QQShareMsgInfo, QUICheckBoxAlertView;

@interface Fav3rdShareViewController : FavoritesViewController <QUIAlertViewDelegate, RichMsgPreviewDialogDelegate, QQPreviewImageDelegate>
{
    QQPreviewImageRetriever *_imageRetriever;
    QQRichMsgPreviewDialog *_richMsgPreDlg;
    QQShareMsgInfo *_shareMsgInfo;
    QUICheckBoxAlertView *_shareResultAlertView;
    SEL _cancelSelect;
    SEL _okSelect;
    id _selectTarget;
}

+ (void)addToFavorites:(id)arg1 shareInfo:(id)arg2 cancelSel:(SEL)arg3 okSel:(SEL)arg4 selTarget:(id)arg5;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)cancelButtonClick;
@property(nonatomic) SEL cancelSelect; // @synthesize cancelSelect=_cancelSelect;
- (void)dealloc;
- (void)finishShare:(_Bool)arg1;
- (id)getPreviewImage:(_Bool *)arg1;
- (void)imageRetrieved:(id)arg1;
- (id)initWithShareMsgInfo:(id)arg1;
@property(nonatomic) SEL okSelect; // @synthesize okSelect=_okSelect;
@property(retain, nonatomic) id selectTarget; // @synthesize selectTarget=_selectTarget;
- (void)sendButtonClick:(id)arg1 msg:(id)arg2;
- (void)shareToMyFavorites;
- (void)showThirdAppForwardNotifyForMyFavorites;
- (void)viewDidLoad;
- (void)willDismissFromScreen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


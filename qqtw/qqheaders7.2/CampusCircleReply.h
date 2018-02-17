//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GAInputBar.h"

#import "GAInputBarDelegate.h"

@class NSString, UIButton;

@interface CampusCircleReply : GAInputBar <GAInputBarDelegate>
{
    NSString *_privateTips;
    UIButton *_privateBtn;
    _Bool _isPrivate;
    NSString *_closeCallBack;
}

- (void)configWithOptions:(id)arg1;
- (void)dealloc;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (id)initWithJsOptions:(id)arg1;
- (_Bool)inputBar:(id)arg1 sendAction:(id)arg2;
- (void)onClickPrivateBtn:(id)arg1;
- (void)onKeyboardWillHideNotify:(id)arg1;
- (void)onReceiveQQVideoReq;
- (void)removeDraftByFeedId:(id)arg1 userDefaults:(id)arg2 draftBox:(id)arg3;
- (void)updateDraftRecordWithFeedId:(id)arg1 userDefaults:(id)arg2 draftBox:(id)arg3;
- (void)updateLayoutShowPrivate:(_Bool)arg1 isReply:(_Bool)arg2 showPicComment:(_Bool)arg3;
- (void)updateLayoutShowPrivateText:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

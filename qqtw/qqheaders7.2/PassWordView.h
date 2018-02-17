//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QQPassWordViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class LAContext, NSString, QQAvatarView, QQPassWordView, UIButton, UIImageView, UILabel;

@interface PassWordView : QQViewController <QQPassWordViewDelegate, UIAlertViewDelegate>
{
    QQPassWordView *_passView;
    UILabel *_tipLabel;
    QQAvatarView *_headView;
    UIImageView *_unReadView;
    UIButton *_forgetBtn;
    UIButton *_touchIDBtn;
    int _errortime;
    LAContext *context;
    _Bool _needTouchId;
}

- (void)QQPassWordDidEnd:(id)arg1;
- (void)dealloc;
- (void)erroTipEnd;
- (void)forgetPassWord;
- (void)hideQQPassView:(_Bool)arg1;
- (id)initWithShow:(_Bool)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)loadView;
@property(nonatomic) _Bool needTouchId; // @synthesize needTouchId=_needTouchId;
- (void)reSetErroState;
- (void)reachErrorLimit;
- (void)showTouchIDDialog;
- (void)startAuthentication;
- (void)upDateInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) int errortime; // @dynamic errortime;
@property(retain, nonatomic) UIButton *forgetBtn; // @dynamic forgetBtn;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) QQPassWordView *passView; // @dynamic passView;
@property(readonly) Class superclass;
@property(retain, nonatomic) UILabel *tipLabel; // @dynamic tipLabel;
@property(retain, nonatomic) UIButton *touchIDBtn; // @dynamic touchIDBtn;

@end


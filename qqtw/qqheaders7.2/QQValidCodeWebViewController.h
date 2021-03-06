//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewController.h"

@class NSString;

@interface QQValidCodeWebViewController : QQWebViewController
{
    int _businessType;
    _Bool _isPresented;
    long long _sessionId;
    id <QQValidCodeControllerDelegate><VerifyViewDelegate> _delegate;
    NSString *_validCodeURL;
    NSString *_countryCode;
    NSString *_phoneCode;
}

@property(nonatomic) int businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (void)dealloc;
- (void)dismissValidCodeWebViewController;
- (_Bool)doLoginVerify:(id)arg1;
- (void)doRegisterVerify:(id)arg1;
- (id)initWithURL:(id)arg1 andTag:(long long)arg2 Delegate:(id)arg3;
- (id)initWithURL:(id)arg1 forType:(int)arg2;
- (void)onRightButtonClicked:(id)arg1;
- (void)onVerifyCAPTCHA:(id)arg1;
@property(retain, nonatomic) NSString *phoneCode; // @synthesize phoneCode=_phoneCode;
- (void)refreshPage;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(nonatomic) id <QQValidCodeControllerDelegate><VerifyViewDelegate> delegate; // @dynamic delegate;
@property(nonatomic) _Bool isPresented; // @dynamic isPresented;
@property(nonatomic) long long sessionId; // @dynamic sessionId;
@property(copy, nonatomic) NSString *validCodeURL; // @dynamic validCodeURL;

@end


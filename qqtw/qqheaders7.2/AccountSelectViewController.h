//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "RequestDelegate.h"
#import "SimpleAlertViewDelegate.h"
#import "SimpleHeadMgrDelegate.h"
#import "SimpleLoginDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AccountTableViewCell, AuthorizationRequest, NSData, NSDictionary, NSMutableArray, NSString, SSoVerifyViewController, UITableView;

@interface AccountSelectViewController : QQViewController <UITableViewDelegate, UITableViewDataSource, SimpleLoginDelegate, RequestDelegate, SimpleHeadMgrDelegate, SimpleAlertViewDelegate>
{
    UITableView *_accountTableView;
    AccountTableViewCell *_cellBtn;
    SSoVerifyViewController *_verifyViewController;
    NSDictionary *_loginInfoForThirdPart;
    unsigned long long _currentUin;
    NSMutableArray *_dataSource;
    AuthorizationRequest *_authorizationRequest;
    long long _uin;
    NSData *_sKEY;
    NSString *_userNick;
    int _xo;
    _Bool _hasGetNewSKey;
}

- (void).cxx_destruct;
- (void)GetAuthorizationInfoDelegate:(id)arg1 dicinfo:(id)arg2 data:(id)arg3 errorMsg:(id)arg4;
- (void)GetQQHeadDelegate:(id)arg1 headBuf:(id)arg2;
- (void)LoginTimerOut;
- (void)RequestSvrErrorCode:(id)arg1;
- (void)RequestSystemNetError:(id)arg1;
- (void)SetAuthorizationDelegate:(id)arg1 dicinfo:(id)arg2 errorMsg:(id)arg3;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
- (void)createBgView;
- (void)dealloc;
- (void)deleteAccount:(unsigned long long)arg1;
- (void)enable:(_Bool)arg1;
- (void)getHeadDelegate:(id)arg1;
- (void)getSKeyAfterCheckSKeyFail:(id)arg1 loginInfo:(id)arg2;
- (void)gotoAuthorizationWithUin:(unsigned int)arg1 andNickName:(id)arg2 andSkey:(id)arg3;
- (void)gotoLoginViewController:(unsigned long long)arg1 animation:(_Bool)arg2;
@property(nonatomic) _Bool hasGetNewSKey; // @synthesize hasGetNewSKey=_hasGetNewSKey;
- (id)init;
- (void)inputPassword:(id)arg1;
- (void)leftButtonClick:(id)arg1;
- (void)loginFailed:(int)arg1 withMsg:(id)arg2 loginType:(int)arg3;
- (void)loginSucceed:(id)arg1 Uin:(unsigned int)arg2 Nickname:(id)arg3 loginType:(int)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)qRcodeLoginFailed:(id)arg1;
- (void)qRcodeLoginSucceed;
- (void)quickLoginEnd;
- (void)quickLoginFailed:(id)arg1;
- (_Bool)reloadData;
- (void)reportNoNetWork:(id)arg1;
- (void)reportWtloginError:(long long)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(retain, nonatomic) AuthorizationRequest *authorizationRequest; // @dynamic authorizationRequest;
@property(nonatomic) unsigned long long currentUin; // @dynamic currentUin;
@property(retain, nonatomic) NSMutableArray *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSDictionary *loginInfoForThirdPart; // @dynamic loginInfoForThirdPart;
@property(retain, nonatomic) NSData *sKEY; // @dynamic sKEY;
@property(readonly) Class superclass;
@property(nonatomic) long long uin; // @dynamic uin;
@property(retain, nonatomic) NSString *userNick; // @dynamic userNick;

@end


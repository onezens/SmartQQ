//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewController.h"

#import "QQRightMenuViewDelegate.h"

@class NSString;

@interface QQHotChatWebViewController : QQWebViewController <QQRightMenuViewDelegate>
{
    NSString *_callBack;
}

- (void).cxx_destruct;
- (void)actionCreateHotChatRoom;
- (void)actionCreateHotChatRoom2;
@property(copy, nonatomic) NSString *callBack; // @synthesize callBack=_callBack;
- (void)dealloc;
- (id)initWith:(id)arg1 forStyle:(long long)arg2;
- (void)loadView;
- (void)menuCellDidClick:(id)arg1;
- (void)onDismiss;
- (void)showCreateButton2:(id)arg1;
- (void)showCreateButton:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (struct CGRect)webViewRectByStyleAndOrientation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


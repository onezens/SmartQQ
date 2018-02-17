//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, QQFacePanelView, QQFaceTabBar, UIButton;

@interface QQBaseFacePanelController : NSObject
{
    QQFacePanelView *_facePanel;
    QQFaceTabBar *_tabBar;
    UIButton *_sendButton;
    NSMutableDictionary *_dicFaceKeyboard;
    long long _lastTab;
    long long _interfaceOrientation;
    id _textDelegate;
    _Bool _showTabBar;
    _Bool _notSupportIOSSystemFace;
    int _xo;
    NSArray *_firstTabItemList;
}

- (_Bool)addFaceKeyBoard:(id)arg1 ID:(long long)arg2;
- (void)addShareFaceClassicKeyBoard;
- (_Bool)attachMainView:(id)arg1;
- (void)dealloc;
- (id)faceKeyBoardForItem:(long long)arg1;
@property(readonly, nonatomic) QQFacePanelView *facePanel; // @synthesize facePanel=_facePanel;
@property(retain, nonatomic) NSArray *firstTabItemList; // @synthesize firstTabItemList=_firstTabItemList;
- (struct CGRect)getQQFaceHideRectNew:(struct CGRect)arg1;
- (struct CGRect)getQQFaceShowRectNew:(struct CGRect)arg1;
- (void)hideFacePanel;
- (_Bool)selectTabItem:(id)arg1;
@property(nonatomic) _Bool showTabBar; // @dynamic showTabBar;
- (void)showFaceKeyboardForItem:(long long)arg1;
- (_Bool)showFaceKeyboardForItem:(long long)arg1 forPage:(long long)arg2;
- (void)showFacePanel;
- (void)showFacePanelIfNeeds;
- (void)storeSelectTabWithID:(long long)arg1;
- (void)switchMainView:(id)arg1;

// Remaining properties
@property(nonatomic) long long interfaceOrientation; // @dynamic interfaceOrientation;
@property(nonatomic) _Bool notSupportIOSSystemFace; // @dynamic notSupportIOSSystemFace;
@property(nonatomic) id <QQBaseFacePanelDelegate> textDelegate; // @dynamic textDelegate;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "QQAIOCellDelegate.h"
#import "QQDynamicAvatarViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CFFootView, NSIndexPath, NSMutableDictionary, NSString, QQAnimationManager, QQAvatarPendantDisplayManager, QQBaseChatModel, UIColor, UIView;

@interface QQChatViewTable : UITableView <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, QQAIOCellDelegate, UIAlertViewDelegate, QQDynamicAvatarViewDelegate, UIGestureRecognizerDelegate>
{
    NSString *reSenduuid;
    NSIndexPath *_indexPath;
    CFFootView *_headView;
    NSString *_mobilePhone;
    _Bool _isPerformingReloadData;
    _Bool _atScrollByUser;
    int _beginDragPos;
    int _beginDeceleratingPos;
    double _beginDragTime;
    int _slowAnimateOffset;
    _Bool _isAskForMoreState;
    QQBaseChatModel *_chatModel;
    int _cellStyle;
    id <QQChatViewTableDelegate> _touchDelegate;
    id _supViewController;
    _Bool _isoffLineMsgEnd;
    _Bool _withSelfChatting;
    _Bool _isContactsChatting;
    _Bool _willScrolToEnd;
    UIColor *_nickColor;
    QQAnimationManager *_animationManager;
    QQAvatarPendantDisplayManager *_avatarPendantDisplayManager;
    _Bool _shouldAnimateAvatarPendant;
    _Bool _isLongPressMenuAppeared;
    _Bool _isDisableInput;
    _Bool _isDisappear;
    _Bool _isDidAppear;
    _Bool _willCheckScrolToEnd;
    _Bool _isScrollingNow;
    UIView *_tableHeadView;
    NSMutableDictionary *_reusableSMItemElementViews;
    _Bool _xgDialogDisplayed;
    _Bool _vipGrayTipHasDisplayed;
    NSString *_scrollType;
    unsigned long long _blueType;
    _Bool disableRefreshOnScrollEnd;
    _Bool _isLongPressSMMenuAppeared;
    _Bool _isScrolled;
    _Bool _isSpriteShow;
}

- (void).cxx_destruct;
- (double)GetChatCellModelHeight:(id)arg1 indexPath:(id)arg2;
- (double)GetChatTableCellHeight:(id)arg1;
- (id)GetSmartColor;
- (void)QQSMMessageCellDidAction:(id)arg1 model:(id)arg2;
- (void)QQSMMessageCellDidCopyURL:(id)arg1;
- (void)QQSMMessageCellDidForwardMessage:(id)arg1;
- (void)QQSMMessageCellDidForwardMultiMsgMessage:(id)arg1;
- (void)QQSMMessageCellDidNewForwardMessage:(id)arg1 longPressIndex:(id)arg2;
- (void)QQSMMessageCellDidcollectMessage:(id)arg1;
- (void)QQXMLRichMessageCellDidSelectItem:(id)arg1 message:(id)arg2 model:(id)arg3;
- (void)UpdateTableCell:(id)arg1 UUid:(id)arg2;
- (void)addObject:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
@property(retain, nonatomic) QQAnimationManager *animationManager; // @synthesize animationManager=_animationManager;
- (void)anonymousHeadTouched:(id)arg1;
- (void)appendObject:(id)arg1;
@property(retain, nonatomic) QQAvatarPendantDisplayManager *avatarPendantDisplayManager; // @synthesize avatarPendantDisplayManager=_avatarPendantDisplayManager;
- (void)becomeActive;
- (_Bool)canScrollToEnd;
- (void)celarCellObject;
@property(readonly, nonatomic) int cellStyle; // @synthesize cellStyle=_cellStyle;
@property(retain, nonatomic) QQBaseChatModel *chatModel; // @synthesize chatModel=_chatModel;
- (void)clearVipGrayTips;
- (void)dealloc;
- (void)delaySetDrawBg;
- (void)delaystopRefresh;
- (void)deleteMessageModel:(id)arg1;
- (void)deleteMessageModelWithoutWarning:(id)arg1;
- (void)deleteModelFromDBCache:(id)arg1;
- (void)deleteObjects:(int)arg1;
- (void)deletePlaceholderMsgCell:(id)arg1;
- (id)dequeueReusableElementViewWithIdentifier:(id)arg1;
- (void)didSelectEmail:(id)arg1;
- (void)didSelectIDNumber:(id)arg1;
- (void)didSelectIVRAudio:(id)arg1;
- (void)didSelectLongNumber:(id)arg1;
- (void)didSelectQQNumber:(id)arg1;
- (void)didSelectReloadImage:(id)arg1;
- (void)didSelectSensContent:(id)arg1 aioMsgModel:(id)arg2;
- (void)didSelectURL:(id)arg1 msgModel:(id)arg2;
@property(nonatomic) _Bool disableRefreshOnScrollEnd; // @synthesize disableRefreshOnScrollEnd;
- (void)doReloadData;
- (void)doURLPerformanceAtIndex:(id)arg1;
- (void)emojiCollectAuthFail:(id)arg1;
- (void)emojiForwardAuthFail:(id)arg1;
- (void)emojiForwardAuthSuccess:(id)arg1;
- (void)emotionLabelHandleSmallFace:(unsigned long long)arg1 emojiID:(id)arg2 allSmallFace:(id)arg3;
- (void)enqueReusableElementView:(id)arg1 withIdentifier:(id)arg2;
- (void)flashChatViewTableCellAnimation;
- (void)forwardPublicAccountVideo:(id)arg1 longPressIndex:(id)arg2;
- (void)forwardTo:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)getAIOSMMessageModelWithMessageRandom:(long long)arg1;
- (id)getScrollType;
- (void)handleLongPress:(id)arg1;
- (void)handleMSFNetworkApnStateNotification:(id)arg1;
- (void)headIconTouch:(id)arg1;
- (void)headIconTouchWithModel:(id)arg1;
- (void)hiddenHeadView;
- (void)hiddenKeyBorad;
- (void)hideMenuControl;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (void)insertObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
@property(nonatomic) _Bool isAskForMoreState;
@property(nonatomic) _Bool isContactsChatting; // @synthesize isContactsChatting=_isContactsChatting;
@property(nonatomic) _Bool isDidAppear; // @synthesize isDidAppear=_isDidAppear;
@property(nonatomic) _Bool isDisableInput; // @synthesize isDisableInput=_isDisableInput;
@property(nonatomic) _Bool isDisappear; // @synthesize isDisappear=_isDisappear;
- (_Bool)isDuplicateMessageWithContent:(id)arg1;
- (_Bool)isGroupAnonymousMode;
@property(nonatomic) _Bool isLongPressMenuAppeared; // @synthesize isLongPressMenuAppeared=_isLongPressMenuAppeared;
@property(nonatomic) _Bool isLongPressSMMenuAppeared; // @synthesize isLongPressSMMenuAppeared=_isLongPressSMMenuAppeared;
@property(nonatomic) _Bool isScrolled; // @synthesize isScrolled=_isScrolled;
- (_Bool)isScrollingNow;
@property(nonatomic) _Bool isSpriteShow; // @synthesize isSpriteShow=_isSpriteShow;
@property(nonatomic) _Bool isoffLineMsgEnd; // @synthesize isoffLineMsgEnd=_isoffLineMsgEnd;
- (id)lastIndexPath;
- (id)lastMessage;
@property(retain, nonatomic) NSString *mobilePhone; // @synthesize mobilePhone=_mobilePhone;
@property(retain, nonatomic) UIColor *nickColor; // @synthesize nickColor=_nickColor;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onImgFailed:(id)arg1 Cell:(id)arg2;
- (void)onImgSuccess:(id)arg1 Cell:(id)arg2;
- (void)receivedMemoryWarningNotification;
- (struct CGRect)rectForRowAtIndexPath:(id)arg1;
- (void)refrushAllStopLoading;
- (void)refrushStopLoading:(int)arg1 withState:(int)arg2 errorCode:(int)arg3;
- (void)reloadData;
- (void)reloadDataWithFrequencyControl:(double)arg1;
- (void)reloadModel:(id)arg1;
- (void)reloadTableDataForRichPicSize;
- (void)removeDataAtIndex:(unsigned long long)arg1;
- (void)removeDataAtSectionsArray:(id)arg1 withRowAnimation:(long long)arg2;
- (void)removeDuplicateMessageWithContent:(id)arg1;
- (void)removeDuplicatedEmojiStickGrayTips;
- (id)removeDuplicatedFileModelCell:(id)arg1;
- (void)removeDuplicatedTimeModelCell;
- (void)saveImgToAlbum:(id)arg1;
- (void)scrollToEnd;
- (void)scrollToEndIfNeeded;
- (void)scrollToPosBySlowAnimate:(struct CGPoint)arg1 indexPath:(id)arg2;
- (void)scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(long long)arg2 animated:(_Bool)arg3;
- (void)scrollToTop;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setIgnoreRelayoutTextModel:(_Bool)arg1;
- (void)setIsScrollingNow:(_Bool)arg1;
- (void)setLoadFinish;
- (void)setLoadStart;
- (void)setLoadStop;
- (void)setNeedsAnimateAvatarPendant;
- (void)setNeedsAnimateRichStateTemplate;
@property(nonatomic) _Bool shouldAnimateAvatarPendant; // @synthesize shouldAnimateAvatarPendant=_shouldAnimateAvatarPendant;
@property(nonatomic) __weak id supViewController; // @synthesize supViewController=_supViewController;
@property(nonatomic) __weak id <QQChatViewTableDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
@property(nonatomic) _Bool willCheckScrolToEnd; // @synthesize willCheckScrolToEnd=_willCheckScrolToEnd;
@property(nonatomic) _Bool willScrolToEnd; // @synthesize willScrolToEnd=_willScrolToEnd;
@property(nonatomic) _Bool withSelfChatting; // @synthesize withSelfChatting=_withSelfChatting;
- (void)showVipGrayTipWithCell:(id)arg1;
- (void)startRefresh;
- (void)stopRefresh;
- (void)swipeGestureRecognizer:(id)arg1;
- (void)tableScroll;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (_Bool)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)viewDidAppear;
- (void)viewWillDisappear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


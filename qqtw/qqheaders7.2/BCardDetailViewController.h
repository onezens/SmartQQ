//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BCardDetailBaseController.h"

#import "UITextViewDelegate.h"

@class NSMutableDictionary, NSString, QQAvatarView, UIImage;

@interface BCardDetailViewController : BCardDetailBaseController <UITextViewDelegate>
{
    _Bool _isNeedReloadData;
    _Bool _isEditRemarkName;
    _Bool _isEditable;
    int _msgType;
    NSString *_content;
    UIImage *_richMsgPreImg;
    NSString *_richMsgPreTitle;
    NSString *_richMsgPreDes;
    unsigned long long _entranceSrc;
    QQAvatarView *_avaterView;
    NSMutableDictionary *_cellHeightCache;
}

- (void).cxx_destruct;
- (void)addCardInfoAndRefresh:(CDUnknownBlockType)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)arrayHeaderViewCardTypes;
@property(retain, nonatomic) QQAvatarView *avaterView; // @synthesize avaterView=_avaterView;
@property(retain, nonatomic) NSMutableDictionary *cellHeightCache; // @synthesize cellHeightCache=_cellHeightCache;
- (void)changeNewCardStatus:(id)arg1;
- (void)changeToEditStatus;
- (void)changeToFinishStatusAndRefresh;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void)dealloc;
@property(nonatomic) unsigned long long entranceSrc; // @synthesize entranceSrc=_entranceSrc;
- (unsigned long long)getEntryIdForDataReport;
- (void)headViewAddFriendCallBack:(id)arg1 indexPath:(id)arg2;
- (void)initData;
- (id)initWithModel:(id)arg1 isEdited:(_Bool)arg2 isEditable:(_Bool)arg3 qqCardSrc:(unsigned long long)arg4 isMine:(_Bool)arg5;
- (id)initWithModel:(id)arg1 isEdited:(_Bool)arg2 qqCardSrc:(unsigned long long)arg3 isMine:(_Bool)arg4;
- (id)initWithModel:(id)arg1 qqCardSrc:(unsigned long long)arg2;
@property(nonatomic) _Bool isEditRemarkName; // @synthesize isEditRemarkName=_isEditRemarkName;
@property(nonatomic) _Bool isEditable; // @synthesize isEditable=_isEditable;
- (_Bool)isSupportRightDragToGoBack;
- (id)itemAtIndexPath:(id)arg1;
- (void)leftButtonClick:(id)arg1;
- (void)loadLocalDate;
- (void)modifyCardInfoAndRefresh:(CDUnknownBlockType)arg1;
@property(nonatomic) int msgType; // @synthesize msgType=_msgType;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onAddButtonClickCallBack:(id)arg1 indexPath:(id)arg2;
- (void)onBusinessProcessCancelMulMemSelector:(id)arg1 currentViewControllerClass:(id)arg2;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)onCardBottomButtonTouched:(id)arg1;
- (void)onDoneClick;
- (void)onGetUserInfo;
- (void)onRightButtonClickEdit:(id)arg1;
- (void)onSaveCardListClick;
- (void)refreshCardInfoView:(id)arg1;
- (void)refreshView;
- (void)resetData:(_Bool)arg1;
@property(copy, nonatomic) NSString *richMsgPreDes; // @synthesize richMsgPreDes=_richMsgPreDes;
@property(retain, nonatomic) UIImage *richMsgPreImg; // @synthesize richMsgPreImg=_richMsgPreImg;
@property(copy, nonatomic) NSString *richMsgPreTitle; // @synthesize richMsgPreTitle=_richMsgPreTitle;
- (void)selectedFriend:(id)arg1 indexPath:(id)arg2;
- (void)setVCTitle;
- (void)showAlertViewdDelSelect;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textInputInCellCallback:(id)arg1 indexPath:(id)arg2 state:(long long)arg3;
- (void)textViewInCellCallback:(id)arg1 indexPath:(id)arg2 state:(long long)arg3;
- (void)textfieldInCellCallback:(id)arg1 indexPath:(id)arg2 state:(long long)arg3;
- (void)uploadDoneNotification:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


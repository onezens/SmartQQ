//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QZDatePickerWithToolBarViewDelegate.h"
#import "UIActionSheetDelegate.h"

@class FBKVOController, MQzoneFollowTipView, NSString, QZDatePickerWithToolBarView, QZMoodComposeViewPresenter, QZMoodEditSyncView, UIButton, UIControl;

@interface QZComposerFooterView : UIView <QZDatePickerWithToolBarViewDelegate, UIActionSheetDelegate>
{
    UIView *_hostView;
    UIButton *_timerButton;
    QZDatePickerWithToolBarView *_datePickerView;
    QZMoodEditSyncView *_syncView;
    QZMoodComposeViewPresenter *_viewModel;
    FBKVOController *_KVOController;
    MQzoneFollowTipView *_tipView;
    UIControl *_maskPanel;
    CDUnknownBlockType _onPressTimerButton;
}

- (void).cxx_destruct;
- (void)adjustTimer;
- (void)cancleSync;
- (void)datePickerShouldHide;
- (void)dealloc;
- (id)initWithHostView:(id)arg1 viewModel:(id)arg2;
- (void)onCancelDatePicker:(id)arg1;
- (void)onClickPickerDone:(double)arg1;
@property(copy, nonatomic) CDUnknownBlockType onPressTimerButton; // @synthesize onPressTimerButton=_onPressTimerButton;
- (void)pressTimerButton:(id)arg1;
- (void)restoreSyncOptions;
- (void)setWechatButtonHidden:(_Bool)arg1;
- (void)showDatePicker;
- (void)syncEnable:(_Bool)arg1;
- (void)tipViewShow:(_Bool)arg1;
- (void)updateLabel;
- (void)updatePermission;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


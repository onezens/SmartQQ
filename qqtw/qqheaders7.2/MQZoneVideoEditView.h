//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMultimediaEditView.h"

#import "QUIActionSheetDelegate.h"
#import "TBMultimediaEditComponentDelegate.h"
#import "UIAlertViewDelegate.h"

@class MQZoneMoodEditInputCell, MQzoneFollowTipView, NSString, UIButton, UIView, UIViewController<MQZoneMoodEditInputCellDelegate>;

@interface MQZoneVideoEditView : TBMultimediaEditView <QUIActionSheetDelegate, UIAlertViewDelegate, TBMultimediaEditComponentDelegate>
{
    UIButton *_qualityButton;
    _Bool _qualityIsSelect;
    _Bool _waitForWifi;
    UIView *_inputView;
    MQZoneMoodEditInputCell *_inputCell;
    UIButton *_authorityButton;
    UIButton *_synQZoneButton;
    _Bool _isSynQZone;
    UIButton *_maskView;
    UIView *_line;
    long long _videoFromType;
    MQzoneFollowTipView *_tipView;
    UIButton *_timerButton;
    _Bool _showQualityButton;
    _Bool _gifSelected;
    unsigned long long _editSettingMode;
    id <MQZoneVideoEditViewDelegate> _qzDelegate;
    UIViewController<MQZoneMoodEditInputCellDelegate> *_parentViewController;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clickAuthorityButton:(id)arg1;
- (void)clickOriginalButton:(id)arg1;
- (void)clickSynQZoneButton:(id)arg1;
- (void)clickTimerButton;
- (void)componentButtonClicked:(id)arg1;
- (void)componentStart:(id)arg1;
- (void)createAuthorityButton;
- (void)createInputCell;
- (void)createInputView;
- (void)createMaskView;
- (void)createSynQZoneButton;
- (void)createTimerButton;
- (void)createVideoQualityButtonWithTitle:(id)arg1;
- (id)deleteCellString;
@property(nonatomic) unsigned long long editSettingMode; // @synthesize editSettingMode=_editSettingMode;
@property(readonly, nonatomic) _Bool gifSelected; // @synthesize gifSelected=_gifSelected;
- (void)handleOpenYellowVip;
- (void)hideHDTipView;
- (void)hideInputView:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 components:(id)arg2 multimediaType:(unsigned long long)arg3 withInitParam:(id)arg4 videoFromType:(long long)arg5 parentViewController:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1 components:(id)arg2 multimediaType:(unsigned long long)arg3 withInitParam:(id)arg4 videoFromType:(long long)arg5 parentViewController:(id)arg6 editSettingMode:(unsigned long long)arg7;
- (void)inputCell:(id)arg1 textDidChange:(id)arg2;
- (void)inputCellBecomeActive:(id)arg1;
- (void)inputCellCheckTextState:(id)arg1 text:(id)arg2;
- (void)inputCellFinishEdit:(id)arg1 text:(id)arg2;
- (_Bool)isHDVideo;
- (_Bool)isOriginalVideo;
- (_Bool)isSynQZone;
- (_Bool)isTimerSelected;
- (_Bool)isWaitForWifi;
- (void)onKeyboardWillHideNotify:(id)arg1;
- (void)onKeyboardWillShowNotify:(id)arg1;
@property(nonatomic) __weak UIViewController<MQZoneMoodEditInputCellDelegate> *parentViewController; // @synthesize parentViewController=_parentViewController;
- (id)playerView;
- (void)publish;
@property(nonatomic) __weak id <MQZoneVideoEditViewDelegate> qzDelegate; // @synthesize qzDelegate=_qzDelegate;
- (void)reset;
- (void)setGifSelected:(_Bool)arg1;
- (void)setSendButtonTitle:(id)arg1;
@property(nonatomic) _Bool showQualityButton; // @synthesize showQualityButton=_showQualityButton;
- (id)shotImage;
- (void)showHDTipView;
- (_Bool)switchToComponent:(id)arg1;
- (void)tap;
- (void)updateAuthorityButton:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


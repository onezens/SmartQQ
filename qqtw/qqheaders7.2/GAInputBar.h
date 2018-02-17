//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZEmojiTextView.h"

#import "QQBaseFacePanelDelegate.h"
#import "QQMultiImagePickerControllerDelegate.h"
#import "QZDeletablePhotoViewDelegate.h"
#import "QZFontListViewDelegate.h"
#import "QZInputBarBulletCurtainSwitchDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, QQMultiImagePickerController, QZFacePanelController, QZFontBoardContainerView, QZSparkleWordView, QzoneCommSparkleWord, UIButton, UIColor, UIControl, UIImageView, UILabel, UIView, UIViewController, UIVisualEffectView;

@interface GAInputBar : QZEmojiTextView <QQMultiImagePickerControllerDelegate, QZDeletablePhotoViewDelegate, QZInputBarBulletCurtainSwitchDelegate, QQBaseFacePanelDelegate, QZFontListViewDelegate, UIAlertViewDelegate>
{
    long long _inputState;
    NSMutableDictionary *_allStateItems;
    NSDictionary *_keyboardInfo;
    struct _NSRange _selectedRange;
    struct CGPoint _pointOfScreenBottom;
    _Bool _isOutSizeScreen;
    NSMutableDictionary *_atDict;
    NSString *_draftKey;
    _Bool _isSending;
    _Bool _isReplyToPrivate;
    id <GAInputBarDelegate> _delegate;
    _Bool _supportBulletCurtain;
    _Bool _supportLiveBubble;
    long long _liveBubbleHeight;
    QZFacePanelController *_facePanelController;
    UIButton *_atFriendBtn;
    UIButton *_emotionBtn;
    UIButton *_keyboardBtn;
    UIButton *_picCommentBtn;
    UIImageView *_textBg;
    UIImageView *_bg;
    UIVisualEffectView *_backBlurView;
    UIColor *_textDefalutColor;
    _Bool _needLayout;
    _Bool _isPrivate;
    _Bool _isBulletCurtain;
    _Bool _isBubbleCurtain;
    _Bool _isNoNeedAtBtn;
    _Bool _showDiyFont;
    _Bool _notGetFontList;
    _Bool _aotushowFontList;
    _Bool _shouldKeepResponderWhenReturn;
    _Bool _shouldContinuePlay;
    _Bool _showAlert;
    NSString *_bulletPlaceholder;
    NSMutableArray *_selectedPicArrays;
    long long _reportScene;
    UIControl *_maskPanel;
    QQMultiImagePickerController *_picker;
    UIViewController *_ownerViewController;
    UIView *_fontBoardView;
    QZFontBoardContainerView *_fontBoardContainer;
    UIImageView *_fontButtonRedDot;
    QzoneCommSparkleWord *_sparkleword;
    QZSparkleWordView *_sparkleWordView;
    UILabel *_placeholder;
    CDUnknownBlockType _bubbleBlock;
}

- (void).cxx_destruct;
- (void)QQMultiImagePickerController:(id)arg1 didSelectPhotoList:(id)arg2;
- (void)activeInputBar:(_Bool)arg1;
- (void)activePicCommentView;
- (void)addKeyboardObserver;
- (void)addLeftItem:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3;
- (void)addLeftItem:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3 frame:(struct CGRect)arg4;
- (void)addMaskPanel;
- (void)addRightItem:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3;
- (void)addRightItem:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3 frame:(struct CGRect)arg4;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
@property(nonatomic) _Bool aotushowFontList; // @synthesize aotushowFontList=_aotushowFontList;
- (id)appRootViewController;
@property(retain, nonatomic) NSMutableDictionary *atDict; // @synthesize atDict=_atDict;
@property(copy, nonatomic) CDUnknownBlockType bubbleBlock; // @synthesize bubbleBlock=_bubbleBlock;
@property(retain, nonatomic) NSString *bulletPlaceholder; // @synthesize bulletPlaceholder=_bulletPlaceholder;
- (void)changeBulletCuratinSwitchPos;
- (void)changePicCommentViewOrigin:(struct CGPoint)arg1;
- (void)clickBtn:(id)arg1;
- (void)clickFontButton;
- (void)clickMaskPanel:(id)arg1;
- (void)clickPicComment;
- (void)createBgView;
- (void)createFontBoard;
- (id)createRedDotImageView;
- (void)deactiveInputBar;
- (void)dealloc;
@property(nonatomic) __weak id <GAInputBarDelegate> delegate; // @synthesize delegate=_delegate;
- (id)diyFont;
- (void)doWhenViewDidAppear;
- (void)doWhenViewWillAppear;
- (void)doWhenViewWillDisappear;
- (void)draftBoxBeginEditing;
- (void)draftBoxEndEditing;
- (void)draftBoxFinishEditing;
- (void)draftBoxUpdateEditing;
@property(retain, nonatomic) NSString *draftKey; // @synthesize draftKey=_draftKey;
@property(retain, nonatomic) QZFontBoardContainerView *fontBoardContainer; // @synthesize fontBoardContainer=_fontBoardContainer;
@property(retain, nonatomic) UIView *fontBoardView; // @synthesize fontBoardView=_fontBoardView;
- (_Bool)fontButtonClicked;
@property(retain, nonatomic) UIImageView *fontButtonRedDot; // @synthesize fontButtonRedDot=_fontButtonRedDot;
- (void)fontListView:(id)arg1 openPayVC:(id)arg2 hasQual:(_Bool)arg3;
- (void)fontListViewDidSelected:(id)arg1 withTap:(_Bool)arg2;
- (struct CGRect)frameAtLeftIndex:(unsigned long long)arg1;
- (struct CGRect)frameAtRightIndex:(unsigned long long)arg1;
- (long long)getFontList;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (void)hideItemsForState:(long long)arg1;
- (void)hidePicCommentBg;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 defaultStyle:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 defaultStyle:(_Bool)arg2 supportBulletCurtain:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 defaultStyle:(_Bool)arg2 supportBulletCurtain:(_Bool)arg3 supportLiveBubble:(_Bool)arg4 liveBubbleHeight:(long long)arg5;
- (id)inputBarEncodedString;
- (long long)inputBarTheme;
@property(nonatomic) long long inputState; // @synthesize inputState=_inputState;
@property(nonatomic) _Bool isBubbleCurtain; // @synthesize isBubbleCurtain=_isBubbleCurtain;
- (void)isBubbleOn:(_Bool)arg1;
@property(nonatomic) _Bool isBulletCurtain; // @synthesize isBulletCurtain=_isBulletCurtain;
- (void)isBulletCurtainOn:(_Bool)arg1;
- (_Bool)isKeyboardChangeFrame:(_Bool *)arg1;
- (_Bool)isMaskPanelAdded;
@property(nonatomic) _Bool isNoNeedAtBtn; // @synthesize isNoNeedAtBtn=_isNoNeedAtBtn;
@property(readonly, nonatomic) _Bool isOutSizeScreen; // @synthesize isOutSizeScreen=_isOutSizeScreen;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
- (void)layoutFrame;
- (void)layoutPicView:(id)arg1;
- (void)layoutSubviews;
- (long long)lengthOfInternalViewText;
- (void)loadFontList;
@property(retain, nonatomic) UIControl *maskPanel; // @synthesize maskPanel=_maskPanel;
@property(nonatomic) _Bool needLayout; // @synthesize needLayout=_needLayout;
@property(nonatomic) _Bool notGetFontList; // @synthesize notGetFontList=_notGetFontList;
- (void)onClickDeleteAsset:(id)arg1;
- (void)onKeyboardWillHideNotify:(id)arg1;
- (void)onKeyboardWillShowNotify:(id)arg1;
- (void)openYellowVip;
@property(nonatomic) __weak UIViewController *ownerViewController; // @synthesize ownerViewController=_ownerViewController;
@property(retain, nonatomic) QQMultiImagePickerController *picker; // @synthesize picker=_picker;
@property(retain, nonatomic) UILabel *placeholder; // @synthesize placeholder=_placeholder;
- (void)preLoadEmojiImage;
- (void)reloadAppearance;
- (void)removeEmotionBoard;
- (void)removeFontBoard;
- (void)removeKeyboardObserver;
- (void)removeMaskPanel;
- (void)reportData:(id)arg1;
- (void)reportFontBoardShow;
- (void)reportInputBarCommentDataClick:(long long)arg1;
- (void)reportInputBarCommentDataShow;
@property(nonatomic) long long reportScene; // @synthesize reportScene=_reportScene;
- (void)resetInputBar;
- (void)resetPicCommentView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) NSMutableArray *selectedPicArrays; // @synthesize selectedPicArrays=_selectedPicArrays;
- (void)sendDirectly:(id)arg1;
- (void)sendFace;
- (void)setAtDict:(id)arg1 nicks:(id)arg2;
- (void)setEditingPlaceholder:(id)arg1;
- (void)setGAInputBarTheme:(long long)arg1;
@property(nonatomic) _Bool shouldContinuePlay; // @synthesize shouldContinuePlay=_shouldContinuePlay;
@property(nonatomic) _Bool shouldKeepResponderWhenReturn; // @synthesize shouldKeepResponderWhenReturn=_shouldKeepResponderWhenReturn;
@property(nonatomic) _Bool showAlert; // @synthesize showAlert=_showAlert;
@property(nonatomic) _Bool showDiyFont; // @synthesize showDiyFont=_showDiyFont;
@property(retain, nonatomic) QZSparkleWordView *sparkleWordView; // @synthesize sparkleWordView=_sparkleWordView;
@property(retain, nonatomic) QzoneCommSparkleWord *sparkleword; // @synthesize sparkleword=_sparkleword;
- (void)showEmotionBoard;
- (void)showFontBoard;
- (void)showFontRedDot;
- (void)showInView:(id)arg1 isOutSizeScreen:(_Bool)arg2;
- (void)showItemsForState:(long long)arg1;
- (void)textChange;
- (id)textView;
- (void)textViewDidChange:(id)arg1;
- (void)updateBulletCurtainSwitchFrame:(id)arg1 emotionBtn:(id)arg2 keyboardBtn:(id)arg3;
- (void)updateFontRedDot:(id)arg1;
- (void)updateInputState:(long long)arg1;
- (void)updateLayoutPicComment:(_Bool)arg1;
- (void)updateLayoutShowAtBtn:(_Bool)arg1 emotionBtn:(_Bool)arg2;
- (void)updateLayoutShowAtBtn:(_Bool)arg1 emotionBtn:(_Bool)arg2 andAppid:(long long)arg3;
- (void)updateLayoutShowAtBtn:(_Bool)arg1 emotionBtn:(_Bool)arg2 showDiyFont:(_Bool)arg3;
- (void)updateLayoutShowDiyFont:(_Bool)arg1 showPicComment:(_Bool)arg2;
- (void)updateLayoutShowPrivate:(_Bool)arg1 isReply:(_Bool)arg2;
- (void)updateLayoutShowPrivate:(_Bool)arg1 isReply:(_Bool)arg2 andAppid:(long long)arg3;
- (void)updateLayoutShowPrivate:(_Bool)arg1 isReply:(_Bool)arg2 showPicComment:(_Bool)arg3;
- (void)updateLayoutShowPrivate:(_Bool)arg1 isReply:(_Bool)arg2 showPicComment:(_Bool)arg3 andAppid:(long long)arg4;
- (void)updateLayoutShowPrivate:(_Bool)arg1 isReply:(_Bool)arg2 showPicComment:(_Bool)arg3 showDiyFont:(_Bool)arg4;
- (void)updateLayoutShowPrivateIcon:(_Bool)arg1;
- (void)updateLayoutShowPrivateText:(_Bool)arg1;
- (void)updateSparklewordDisplay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

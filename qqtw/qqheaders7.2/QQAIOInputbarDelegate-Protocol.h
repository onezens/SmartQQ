//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQAIOFlashChatPanel, QQAIOFlashChatPreviewView, QQAudioInputView, QQBaseFacePanelController, QQHotPicView, QQLightInteractionInputView, QQRecentPicPreview, QQRichKeyBorad, QQRichMediaPickerController;

@protocol QQAIOInputbarDelegate <NSObject>
- (void)actionInputbarCamera:(id)arg1;
- (void)actionInputbarEmotion:(id)arg1;
- (void)actionInputbarHotPic:(id)arg1;
- (void)actionInputbarLightInteraction:(id)arg1;
- (void)actionInputbarLocation:(id)arg1;
- (void)actionInputbarPTT:(id)arg1;
- (void)actionInputbarPTV:(id)arg1;
- (void)actionInputbarPhoto:(id)arg1;
- (void)actionInputbarRedPack:(id)arg1;
@property(retain, nonatomic) QQAudioInputView *audioInputView;
@property(retain, nonatomic) QQBaseFacePanelController *facePanelController;
@property(retain, nonatomic) QQAIOFlashChatPanel *flashChatPanel;
@property(retain, nonatomic) QQAIOFlashChatPreviewView *flashChatPreviewView;
@property(retain, nonatomic) QQHotPicView *hotPicView;
@property(retain, nonatomic) QQLightInteractionInputView *lightInteractionInputView;
@property(retain, nonatomic) QQRichMediaPickerController *mediaPickerController;
@property(retain, nonatomic) QQRecentPicPreview *recentPicPreview;
@property(retain, nonatomic) QQRichKeyBorad *richKeyboard;

@optional
- (void)actionInputbarFile:(id)arg1;
- (void)actionInputbarMore:(id)arg1;
- (void)actionInputbarMpFile:(id)arg1;
@end


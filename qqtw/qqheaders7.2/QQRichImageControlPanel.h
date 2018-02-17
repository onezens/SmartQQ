//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface QQRichImageControlPanel : UIView
{
    UILabel *_tipsLbl;
    UIButton *_takeBtn;
    UIButton *_cancelBtn;
    UIButton *_remakeBtn;
    UIButton *_sendBtn;
    id <QQRichImageControlPanelDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
- (void)dealloc;
@property(nonatomic) __weak id <QQRichImageControlPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)enlargeClickRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onCancelBtnClick:(id)arg1;
- (void)onRemakeBtnClick:(id)arg1;
- (void)onSendBtnClick:(id)arg1;
- (void)onTakeBtnClick:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) UIButton *remakeBtn; // @synthesize remakeBtn=_remakeBtn;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) UIButton *takeBtn; // @synthesize takeBtn=_takeBtn;
@property(retain, nonatomic) UILabel *tipsLbl; // @synthesize tipsLbl=_tipsLbl;

@end

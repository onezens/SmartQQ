//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOCell.h"

#import "QQXMLRichMessageCellViewDelegate.h"

@class NSString, QQAIOXMLMessageModel, QQXMLMessage, QQXMLMessageBaseView, UIImageView, UILabel;

@interface QQXMLRichMessageBaseCell : QQAIOCell <QQXMLRichMessageCellViewDelegate>
{
    QQAIOXMLMessageModel *_xmlModel;
    QQXMLMessage *_message;
    QQXMLMessageBaseView *_cellView;
    struct CGPoint _longPressPoint;
    _Bool _isLongPress;
    UIImageView *_grayTipsBGView;
    UILabel *_grayTipsLabel;
}

- (void)LongPressCallBack:(struct CGPoint)arg1;
- (void)LongPressCanceled:(struct CGPoint)arg1;
- (void)LongPressEnded:(struct CGPoint)arg1;
- (void)QQXMLRichMessageCellViewDidSelectItem:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canResignFirstResponder;
- (void)dealloc;
- (void)deleteMessage:(id)arg1;
- (id)findSuperview:(id)arg1;
- (struct CGRect)getContentBgRect;
- (void)hideMenu;
- (id)initWithChatViewTable:(id)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)menuControllerDidHide:(id)arg1;
- (void)setAioModel:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setMessageTopTips:(id)arg1;
- (void)setXMLMessage:(id)arg1;
- (void)setXMLUin:(id)arg1;
- (void)setXmlAioModel:(id)arg1;
- (void)showCopyMenu;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


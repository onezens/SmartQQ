//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOTextCellView.h"

@class UIImageView, UILabel;

@interface QQAIOAudioTipsCellView : QQAIOTextCellView
{
    _Bool _beginTouchVideo;
    UIImageView *_callImg;
    UILabel *_hintText;
}

- (void).cxx_destruct;
- (void)actionAskForMore:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (_Bool)didTouchBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)didTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)drawBubble;
- (void)drawContent:(struct CGRect)arg1;
- (void)drawLoadingAndFailIcon;
- (id)getMenuItems;
- (void)hideBubble:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;
- (void)prepareForReuse;
- (id)selfAioModel;
- (void)sendTipsTouchAIO:(id)arg1;
- (void)setAioModel:(id)arg1;
- (void)setupCallImageAndText;
- (_Bool)shouldDrawText;
- (void)willDrawBubble;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOCommonCellView.h"

#import "QQAIOFlashChatModelDelegate.h"

@class NSString, QQAIOFlashChatArkPlaceholderView, QQAIOFlashChatArkSourceView;

@interface QQAIOFlashChatCellView : QQAIOCommonCellView <QQAIOFlashChatModelDelegate>
{
    QQAIOFlashChatArkPlaceholderView *_placeholderView;
    QQAIOFlashChatArkSourceView *_sourceView;
    struct CGRect _arkViewFrame;
}

- (void).cxx_destruct;
- (struct CGRect)GetPaoPaoBgRect;
- (id)arkView;
@property(nonatomic) struct CGRect arkViewFrame; // @synthesize arkViewFrame=_arkViewFrame;
- (struct CGSize)arkViewSize;
- (void)cancelPreviousAnim;
- (void)deferStartAnimating;
- (void)didEndDisplaying;
- (_Bool)didTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawBubble;
- (void)drawContent:(struct CGRect)arg1;
- (void)flashChatModel:(id)arg1 didChangeState:(long long)arg2;
- (id)getMenuItems;
- (void)hideArkView;
- (void)hidePlaceholderView;
@property(retain, nonatomic) QQAIOFlashChatArkPlaceholderView *placeholderView; // @synthesize placeholderView=_placeholderView;
- (void)prepareForReuse;
- (void)setAioModel:(id)arg1;
@property(retain, nonatomic) QQAIOFlashChatArkSourceView *sourceView; // @synthesize sourceView=_sourceView;
- (void)showArkLoadFailedView;
- (void)showArkLoadingView;
- (void)showArkView:(id)arg1;
- (void)willDisplay;
- (void)willDrawBubble;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


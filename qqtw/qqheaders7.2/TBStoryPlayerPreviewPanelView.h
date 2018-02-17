//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QQStorySGVideoSelectorHandler, TBStoryVideoDesModel, UIButton;

@interface TBStoryPlayerPreviewPanelView : UIView
{
    UIButton *_checkBox;
    UIButton *_finishButton;
    UIButton *_backButton;
    TBStoryVideoDesModel *_videoModel;
    id <TBStoryPlayerPreviewPanelViewDelegate> _delegate;
    QQStorySGVideoSelectorHandler *_handler;
}

- (void)configureInitialUI;
- (void)dealloc;
@property(nonatomic) id <TBStoryPlayerPreviewPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finish:(id)arg1;
- (void)goBack:(id)arg1;
@property(nonatomic) QQStorySGVideoSelectorHandler *handler; // @synthesize handler=_handler;
- (id)initWithFrame:(struct CGRect)arg1 videoModel:(id)arg2;
- (void)refreshFinishButtonTitle;
@property(retain, nonatomic) TBStoryVideoDesModel *videoModel; // @synthesize videoModel=_videoModel;
- (void)toggleSelect:(id)arg1;
- (void)updateUI:(id)arg1;

@end


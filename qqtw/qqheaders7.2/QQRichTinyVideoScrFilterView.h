//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MCTempManagerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSString, UIImageView, UIScrollView;

@interface QQRichTinyVideoScrFilterView : UIView <UIScrollViewDelegate, MCTempManagerDelegate>
{
    UIImageView *_currentFilter;
    UIImageView *_previusFilter;
    UIImageView *_nextFilter;
    UIImageView *_newGuideView;
    _Bool _isSwiping;
    _Bool _enableArtFilter;
    id <QQRichTinyVideoScrFilterViewDelegate> _delegate;
    long long _currentFilterIndex;
    NSArray *_filterTempArray;
    UIScrollView *_coreView;
}

@property(retain, nonatomic) UIScrollView *coreView; // @synthesize coreView=_coreView;
@property(nonatomic) long long currentFilterIndex; // @synthesize currentFilterIndex=_currentFilterIndex;
- (void)dealloc;
- (void)delayHiddenFilter:(_Bool)arg1;
@property(nonatomic) id <QQRichTinyVideoScrFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)downloadResourceFail:(id)arg1;
- (void)downloadResourceFinish:(id)arg1;
- (void)endScroll;
@property(retain, nonatomic) NSArray *filterTempArray; // @synthesize filterTempArray=_filterTempArray;
- (void)hideFilterAnimation;
- (void)hideFilterViewImmediately:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)insertGridItem:(id)arg1;
- (void)loadFilterList;
- (void)onMCConfigIconDownloadFinish:(id)arg1;
- (void)onMCConfigResourceDownload:(id)arg1;
- (void)onSelectItemDone;
- (void)p_loadUI;
- (id)removeArtFilterTempArray:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)showGuideView;
- (void)showGuideView:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


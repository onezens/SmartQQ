//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UIScrollView, UIViewController;

@interface QQPageViewController : QQViewController <UIScrollViewDelegate>
{
    NSMutableArray *_viewControllerPlaceHolder;
    _Bool _isViewDidAppeared;
    UIViewController *_lastAppearedViewController;
    _Bool _preloadViewController;
    UIScrollView *_contentView;
    unsigned long long _orientation;
    long long _currentPage;
    id <QQPageViewControllerDelegate> _delegate;
    long long _allowVisiablePageCount;
    long long _beginIndex;
    long long _endIndex;
}

- (void).cxx_destruct;
- (id)_displayViewControllerAtIndex:(long long)arg1;
- (void)_hideViewControllerAtIndex:(long long)arg1;
- (void)_preloadIfNeeded;
- (void)_preloadViewControllerAtIndex:(long long)arg1;
- (void)_reloadViewControllerAtIndex:(long long)arg1 withViewController:(id)arg2;
- (void)_resetContentSize;
- (void)_unloadOffscreenPage;
- (void)_unloadViewController:(id)arg1;
- (void)_unloadViewControllerAtIndex:(long long)arg1;
@property(nonatomic) long long allowVisiablePageCount; // @synthesize allowVisiablePageCount=_allowVisiablePageCount;
@property(nonatomic) long long beginIndex; // @synthesize beginIndex=_beginIndex;
@property(readonly, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(readonly, nonatomic) UIViewController *currentViewController;
- (void)dealloc;
@property(nonatomic) __weak id <QQPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveMemoryWarning;
@property(nonatomic) long long endIndex; // @synthesize endIndex=_endIndex;
- (id)initWithOrientation:(unsigned long long)arg1;
- (void)inserPageAtIndex:(long long)arg1;
- (void)loadViewControllerFromBeginToEnd;
- (unsigned long long)numberOfPage;
@property(readonly, nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
- (void)pageDidChanged;
@property(nonatomic) _Bool preloadViewController; // @synthesize preloadViewController=_preloadViewController;
- (void)refresh;
- (void)reload;
- (void)reloadAndSetCurrentPage:(long long)arg1;
- (void)removePageAtIndex:(long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollingEnd;
- (void)setCurrentPage:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (id)viewControllerForPage:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


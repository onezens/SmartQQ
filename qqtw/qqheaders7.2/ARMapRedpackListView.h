//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ARMapPopBaseView.h"

#import "ARMapRedpackListDelegate.h"
#import "iCarouselDataSource.h"
#import "iCarouselDelegate.h"

@class NSData, NSMutableArray, NSString, UIButton, UIView, iCarousel;

@interface ARMapRedpackListView : ARMapPopBaseView <iCarouselDelegate, iCarouselDataSource, ARMapRedpackListDelegate>
{
    iCarousel *_carousel;
    NSString *_poiName;
    NSString *_busiName;
    NSString *_unzipPath;
    NSMutableArray *_redpackList;
    unsigned long long _poiId;
    unsigned long long _taskId;
    _Bool _movedToFront;
    UIView *_maskView;
    UIButton *_closeBtn;
    struct CGPoint _popPoint;
    _Bool _fetchedFirstPage;
    _Bool _requestInprogress;
    id _gameView;
    NSData *_cookie;
    long long _indexToDelete;
}

- (void).cxx_destruct;
- (void)appendObjects:(id)arg1;
- (void)buttonClickedAtIndex:(long long)arg1 info:(id)arg2;
- (id)carousel:(id)arg1 placeholderViewAtIndex:(long long)arg2 reusingView:(id)arg3;
- (double)carousel:(id)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (id)carousel:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (void)carouselDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
@property(copy, nonatomic) NSData *cookie; // @synthesize cookie=_cookie;
- (void)dealloc;
- (void)dismiss;
@property(nonatomic) _Bool fetchedFirstPage; // @synthesize fetchedFirstPage=_fetchedFirstPage;
@property(nonatomic) __weak id gameView; // @synthesize gameView=_gameView;
@property(nonatomic) long long indexToDelete; // @synthesize indexToDelete=_indexToDelete;
- (id)initWithPoiId:(unsigned long long)arg1 poiName:(id)arg2 taskId:(unsigned long long)arg3 busiName:(id)arg4 unzipPath:(id)arg5 redpackList:(id)arg6;
- (id)localInfoWithCftPackId:(id)arg1 index:(long long *)arg2;
- (id)navigationVC;
- (long long)numberOfItemsInCarousel:(id)arg1;
- (long long)numberOfPlaceholdersInCarousel:(id)arg1;
- (void)onARMapViewControllerViewDidAppear:(id)arg1;
- (void)refreshWithNotification:(id)arg1;
- (void)refreshWithNotificationMainThread:(id)arg1;
- (void)refreshWithSuccessNotification:(id)arg1;
- (void)refreshWithSuccessNotificationMainThread:(id)arg1;
- (void)reloadInMainThread;
@property(nonatomic) _Bool requestInprogress; // @synthesize requestInprogress=_requestInprogress;
- (void)requestNextPage;
- (void)shareButtonClickedAtIndex:(long long)arg1 info:(id)arg2;
- (void)showInView:(id)arg1 point:(struct CGPoint)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

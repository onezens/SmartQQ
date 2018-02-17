//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QGMapViewDelegate.h"
#import "QMapViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, QGManorDotView, QGMapView, QQMapCalloutAnnotation, QQPOIItem, QQPOIList, UIButton, UIImageView, UILabel, UISearchBar, UITableView, UIView;

@interface PositionShareViewController : QQViewController <UIGestureRecognizerDelegate, QGMapViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate, QMapViewDelegate>
{
    QGMapView *_mapView;
    QGManorDotView *_dotView;
    UIImageView *_pinView;
    id <SelectLocationDelegate> _selLocDel;
    UISearchBar *_searchBar;
    UIButton *_locationBtn;
    UIView *_bottomView;
    UITableView *_poiTable;
    UIView *_cateSelectView;
    UIView *_sliderView;
    UIView *_locationView;
    UIImageView *_4qLogoImage;
    UIView *_resultView;
    UITableView *_resultTable;
    UILabel *_nonResultLabel;
    NSMutableDictionary *_selectedDic;
    _Bool _isInit;
    _Bool _shoundInitMapView;
    struct CLLocationCoordinate2D _coordinate;
    struct CLLocationCoordinate2D _selectCoordinate;
    struct CLLocationCoordinate2D _curPositionCoordinate;
    NSString *_address;
    struct CGRect originalViewRect;
    _Bool _bFirstLocation;
    _Bool _bFristFetchData;
    _Bool _bItemSelected;
    _Bool _bIsSearchModel;
    _Bool _bChangeFromSetCenter;
    _Bool _bChangeLocationBtnBackground;
    _Bool _bHasLocationCell;
    _Bool _bNomoreResults;
    _Bool _bSearchNomoreResults;
    _Bool _bFetchingNextPage;
    _Bool _bFirstFetchAfterSelection;
    _Bool _bIsGoogleAddress;
    _Bool _bIs4QPoi;
    QQMapCalloutAnnotation *_calloutAnnotation;
    _Bool _bMapViewStretching;
    _Bool _bMapViewBigState;
    _Bool _bLowResolution;
    float _bottomViewHeight;
    float _pinViewOffset;
    NSString *_searchId;
    NSString *_chatUin;
    UILabel *_positionLabel;
    QQPOIItem *_selectedItem;
    _Bool _fromWebJS;
    NSArray *_cateTitleArr;
    NSString *_selectedCate;
    QQPOIItem *_selectedSearchedItem;
    QQPOIList *_currentPOIList;
    NSArray *_searchPOIList;
    NSMutableArray *_cateCurrentPage;
    NSString *_openSource;
}

- (void)addLbsNotification;
- (void)addObservers;
@property(readonly, retain, nonatomic) NSString *address; // @synthesize address=_address;
- (void)adjustOnBigStateFor4QLogoHidden:(_Bool)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)arrowBarGesture:(id)arg1;
- (void)backToLocation:(id)arg1;
- (void)cateSelected:(id)arg1;
@property(retain, nonatomic) NSArray *cateTitleArr; // @synthesize cateTitleArr=_cateTitleArr;
- (void)changeToSearchModel:(_Bool)arg1;
- (id)createCateSelectView;
- (id)createHeaderView;
- (id)createNextPageCell:(id)arg1 indexPath:(id)arg2;
- (id)createPOICell:(id)arg1 indexPath:(id)arg2;
- (id)createSearchResultCell:(id)arg1 indexPath:(id)arg2;
- (void)dealloc;
- (void)delayGetAddressByCoordinate;
- (void)didGoogleAddressReturn:(id)arg1;
- (void)didPOICategoryReturn:(id)arg1;
- (void)didPOIListReturn:(id)arg1;
- (void)didPOISearchListReturn:(id)arg1;
- (void)doSelectCateButton:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)getAddressByCoordinate;
- (id)getEqualedPOIInList:(id)arg1;
- (id)getIMEI;
- (id)getNobodyView;
- (id)getPOIItemInTable:(id)arg1 indexPath:(id)arg2;
- (id)getValueWithKeyInURL:(id)arg1 key:(id)arg2;
- (void)handlAuthChangedLocation:(id)arg1;
- (void)handleGetLocationFail:(id)arg1;
- (void)handleGetLocationSucc:(id)arg1;
- (void)handleRequestTimeout:(id)arg1;
- (void)handleStartUpdateLocation:(id)arg1;
- (void)handleUIApplicationWillEnterForegroundNotification:(id)arg1;
- (id)init;
- (void)initArrowBar;
- (void)initDotViewAndPinView;
- (void)initForBusiness;
- (void)initMapView;
- (id)initWithJsOptions:(id)arg1;
- (void)leftButtonClick:(id)arg1;
- (void)loadView;
- (_Bool)locationAvailable;
- (void)locationTapped:(id)arg1;
- (void)logEvent644:(id)arg1 eventName:(id)arg2 withParam:(id)arg3;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)mapViewSlideDown;
- (void)mapViewSlideUp;
- (void)mapViewTapped:(id)arg1;
@property(readonly, retain, nonatomic) NSString *name;
- (void)notifyLbsEndUpdateLocation:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain, nonatomic) NSString *openSource; // @synthesize openSource=_openSource;
- (void)refreshPOIAt:(struct CLLocationCoordinate2D)arg1;
- (void)removeLbsNotification;
- (void)resultCoverClicked:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
@property(nonatomic) id <SelectLocationDelegate> selLocDel; // @synthesize selLocDel=_selLocDel;
- (void)sendLocation;
- (void)set4QLogoHidden:(_Bool)arg1;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 animated:(_Bool)arg3;
- (void)setLocationViewHighlighted:(_Bool)arg1;
- (void)setLocationVisible:(_Bool)arg1;
- (void)setSelectTabHidden:(_Bool)arg1;
- (void)showFailedViewWithMessage:(id)arg1;
- (void)showPOITable:(int)arg1;
- (void)startUpdateLocation;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *cateCurrentPage; // @dynamic cateCurrentPage;
@property(copy, nonatomic) NSString *chatUin; // @dynamic chatUin;
@property(retain, nonatomic) QQPOIList *currentPOIList; // @dynamic currentPOIList;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool fromWebJS; // @dynamic fromWebJS;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UILabel *positionLabel; // @dynamic positionLabel;
@property(retain, nonatomic) NSString *searchId; // @dynamic searchId;
@property(retain, nonatomic) NSArray *searchPOIList; // @dynamic searchPOIList;
@property(copy, nonatomic) NSString *selectedCate; // @dynamic selectedCate;
@property(retain, nonatomic) QQPOIItem *selectedItem; // @dynamic selectedItem;
@property(retain, nonatomic) QQPOIItem *selectedSearchedItem; // @dynamic selectedSearchedItem;
@property(readonly) Class superclass;

@end


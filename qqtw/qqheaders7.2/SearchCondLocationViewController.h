//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "CountrySelectViewControllerDelegate.h"
#import "RegionPickerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ConditionModel, NSString, UIActivityIndicatorView, UITableView, UITableViewCell, UITapGestureRecognizer, UIView;

@interface SearchCondLocationViewController : QQViewController <UITableViewDelegate, UITableViewDataSource, CountrySelectViewControllerDelegate, RegionPickerDelegate>
{
    UIView *_subBoradView;
    UITapGestureRecognizer *_tableRecognizer;
    int _type;
    long long _pickerRow;
    _Bool _isShowProvinceCity;
    UIActivityIndicatorView *_loadingView;
    UITableView *_tableView;
    _Bool _bFirstLocation;
    struct CLLocationCoordinate2D _curPositionCoordinate;
    double _startTime;
    UITableViewCell *_locationCell;
    unsigned long long _selectType;
    _Bool _areaPickerDisabled;
    ConditionModel *_model;
    NSString *_countryNoneTitle;
    id <LocationSelectViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)addLbsNotification;
@property(nonatomic) _Bool areaPickerDisabled; // @synthesize areaPickerDisabled=_areaPickerDisabled;
- (void)cancelClick:(id)arg1;
@property(retain, nonatomic) NSString *countryNoneTitle; // @synthesize countryNoneTitle=_countryNoneTitle;
@property(nonatomic) id <LocationSelectViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissLoadingIndicator;
- (id)getConditionModelForSetProfile;
- (id)getProvinceModelWithCountry:(id)arg1 countryArray:(id)arg2;
- (id)getRegionStrWithProName:(id)arg1 cityName:(id)arg2 areaNmae:(id)arg3;
- (void)handleGetLocationFail:(id)arg1;
- (void)handleGetLocationSucc:(id)arg1;
- (void)handleRequestTimeout:(id)arg1;
- (void)handleUpdateLocationSucc:(id)arg1;
- (void)hidenAnimationFinished;
- (void)hidenAnimationStart;
- (id)initWithType:(int)arg1;
- (id)initWithType:(int)arg1 SelectType:(unsigned long long)arg2 delegate:(id)arg3;
- (_Bool)isExistProvinceCityOrAreaWithCountryName:(id)arg1;
- (void)loadView;
@property(retain, nonatomic) ConditionModel *model; // @synthesize model=_model;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onCloseButtonClick:(id)arg1;
- (void)popAnimationFinished;
- (void)popAnimationStart;
- (void)removeFailedView;
- (void)removeLbsNotification;
- (void)selectDone;
- (void)selectedWithCountryName:(id)arg1 countryCode:(int)arg2;
- (void)setRegionNames:(id)arg1 codes:(id)arg2 type:(int)arg3;
- (void)showLBSErrorTips;
- (void)showLoadingIndicator:(id)arg1;
- (void)showPickerView:(id)arg1 atIndexPath:(id)arg2;
- (void)startUpdateLocation;
- (void)syncSaveProfileModel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateAfterTwoSeconds:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

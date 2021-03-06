//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSearchBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, UITableView, UIView;

@interface QQContactsCountryCodeViewController : QQSearchBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_searchResultArray;
    NSMutableArray *_keyArray;
    NSMutableDictionary *_countryCodeDict;
    NSMutableDictionary *_commonCountryCodeDict;
    UITableView *_tableView;
    _Bool _isShowSearchResult;
    float tittleViewHeight;
    id <CountryCodeViewControllerDelegate> _controllerDelegate;
    UIView *_tittleView;
}

- (void).cxx_destruct;
- (void)addCountryName:(id)arg1 countryCode:(id)arg2 countryEnglish:(id)arg3 key:(id)arg4;
@property(nonatomic) id <CountryCodeViewControllerDelegate> controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
- (void)dealloc;
- (id)fliterLikeWord:(id)arg1;
- (id)headerViewForTableViewSection:(id)arg1;
- (id)init;
- (void)initCountryCode;
- (void)leftButtonClick:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onApplicationWillEnterForeground:(id)arg1;
- (void)onReturnButtonClick:(id)arg1;
- (void)reloadSearchTableData;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchScope:(long long)arg2;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
@property(retain, nonatomic) UIView *tittleView; // @synthesize tittleView=_tittleView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


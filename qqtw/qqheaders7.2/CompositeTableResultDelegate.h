//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString;

@interface CompositeTableResultDelegate : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    NSString *_keyword;
    NSString *_from;
    NSArray *_titlesForSection;
    long long _reqSearchFrom;
    id <FTSCompositeProtocol> _ftsCompositeProtocol;
    int _xo;
    NSArray *_accountSearchResult;
    NSArray *_groupSearchResult;
    NSArray *_publicSearchResult;
    NSArray *_articleSearchResult;
    NSArray *_activeFeedSearchResult;
    int _pbArticleSource;
    long long _ftsFliter;
}

- (void).cxx_destruct;
- (double)_ftsGetCellForRowHeight:(id)arg1;
- (long long)_ftsGetNumberOfRowsInSection:(long long)arg1;
- (void)_ftsReportNetResultsClickRow:(long long)arg1 byModule:(id)arg2;
- (void)articleHotwordReport:(id)arg1;
- (id)cellForAccountSection:(id)arg1 indexPath:(id)arg2;
- (id)cellForActiveFeedSection:(id)arg1 indexPath:(id)arg2;
- (id)cellForArticleSection:(id)arg1 indexPath:(id)arg2;
- (id)cellForGroupSection:(id)arg1 indexPath:(id)arg2;
- (id)cellForPublicSection:(id)arg1 indexPath:(id)arg2;
- (id)dataInSection:(long long)arg1;
- (id)displayMoreCell:(id)arg1;
- (id)fliterTitle;
@property(nonatomic) long long ftsFliter; // @synthesize ftsFliter=_ftsFliter;
- (void)getQQBussinessChatSettingViewController:(id)arg1 bussinessWpaSigT:(id)arg2;
- (id)initWithAccountResult:(id)arg1 groupResult:(id)arg2 andPublicResult:(id)arg3 andArticleResult:(id)arg4;
- (id)initWithAccountResultDictionary:(id)arg1;
- (void)loadActiveFeedModleWithArray:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(nonatomic) int pbArticleSource; // @synthesize pbArticleSource=_pbArticleSource;
- (void)refreshTitlesForAccount;
- (void)refreshTitlesForArticle;
- (void)refreshTitlesForGroup;
- (void)refreshTitlesForPublic;
- (void)scrollViewDidScroll:(id)arg1;
- (id)sectionToSearchType:(long long)arg1;
- (void)showOfficalAccountDetailWithUin:(long long)arg1 account_flag:(unsigned int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *from; // @dynamic from;
@property(nonatomic) __weak id <FTSCompositeProtocol> ftsCompositeProtocol; // @dynamic ftsCompositeProtocol;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *keyword; // @dynamic keyword;
@property(nonatomic) long long reqSearchFrom; // @dynamic reqSearchFrom;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSMutableArray *titlesForSection; // @dynamic titlesForSection;

@end


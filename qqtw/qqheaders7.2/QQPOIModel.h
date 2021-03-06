//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, QQHttpClientSession, QQPOIItem, QQShopInfo;

@interface QQPOIModel : NSObject
{
    QQHttpClientSession *_tSession;
    QQPOIItem *_curLocation;
    long long _totalShops;
    long long _nextShopBeginIndex;
    int _xo;
    _Bool _bForeign;
    QQShopInfo *_curShop;
    NSArray *_categories;
    NSMutableDictionary *_poiLists;
    NSMutableArray *_shops;
    struct CLLocationCoordinate2D _currentCoordinate;
}

+ (id)sharedModel;
@property _Bool bForeign; // @synthesize bForeign=_bForeign;
@property(readonly, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(readonly, retain, nonatomic) QQShopInfo *curShop; // @synthesize curShop=_curShop;
@property(nonatomic) struct CLLocationCoordinate2D currentCoordinate; // @synthesize currentCoordinate=_currentCoordinate;
- (void)dealloc;
- (void)getAddressByGoogleAPI:(struct CLLocationCoordinate2D)arg1;
- (id)getCateIDFromName:(id)arg1;
- (void)getPOIAroundCoordinate:(struct CLLocationCoordinate2D)arg1 category:(id)arg2 forceReload:(_Bool)arg3;
- (void)getPOIAroundCoordinate:(struct CLLocationCoordinate2D)arg1 category:(id)arg2 page:(int)arg3 count:(unsigned int)arg4 keyword:(id)arg5 flags:(long long)arg6 forceReload:(_Bool)arg7;
- (id)getPOICategories;
- (void)getPOIHintsAroundCoordinate:(struct CLLocationCoordinate2D)arg1 keyword:(id)arg2;
- (void)getShopInfo:(id)arg1;
- (void)getShopsAroundCoordinate:(struct CLLocationCoordinate2D)arg1 forceReload:(_Bool)arg2;
- (void)handlePOIListResponse:(id)arg1;
- (void)handlePOISearchHintResponse:(id)arg1;
- (void)handleShopListResponse:(id)arg1;
- (void)handleShopResponse:(id)arg1;
- (_Bool)hasMoreShopsToLoad;
- (id)init;
- (void)loadCategoryCache;
- (void)notifyPbErrorWithName:(id)arg1 errorDomain:(id)arg2 code:(long long)arg3 userInfo:(id)arg4;
- (void)notifyPbResponseDidReceivedWithName:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)notifyPbResponseDidReceivedWithName:(id)arg1 result:(id)arg2 searchId:(id)arg3 error:(id)arg4;
- (id)poiListForCategory:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *poiLists; // @synthesize poiLists=_poiLists;
- (void)qqHttpClientSession:(id)arg1 error:(id)arg2;
- (void)qqHttpClientSession:(id)arg1 result:(id)arg2;
@property(readonly, nonatomic) NSMutableArray *shops; // @synthesize shops=_shops;
- (void)updateWhiteListWithResult:(id)arg1;

// Remaining properties
@property(retain, nonatomic) QQPOIItem *curLocation; // @dynamic curLocation;
@property(nonatomic) long long nextShopBeginIndex; // @dynamic nextShopBeginIndex;
@property(nonatomic) long long totalShops; // @dynamic totalShops;

@end


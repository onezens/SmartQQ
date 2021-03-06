//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QGMapViewDelegate.h"

@class NSString, QGManorDotView, QGMapView, UIImageView;

@interface SendLocationViewController : QQViewController <QGMapViewDelegate>
{
    QGMapView *_mapView;
    QGManorDotView *_dotView;
    UIImageView *_pinView;
    id <SelectLocationDelegate> _selLocDel;
    _Bool _isInit;
    _Bool _shoundInitMapView;
    struct CLLocationCoordinate2D _coordinate;
    NSString *_address;
}

- (id)_getNobodyView;
- (void)_showFailedViewWithMessage:(id)arg1;
@property(readonly, retain, nonatomic) NSString *address; // @synthesize address=_address;
- (void)dealloc;
- (void)handleGetLocationFail:(id)arg1;
- (void)handleGetLocationSucc:(id)arg1;
- (void)handleRequestTimeout:(id)arg1;
- (void)handleStartUpdateLocation:(id)arg1;
- (void)handleUIApplicationWillEnterForegroundNotification:(id)arg1;
- (id)init;
- (void)initMapView;
- (void)layoutViewsIfNeeds:(id)arg1;
- (void)loadView;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)notifyLbsEndUpdateLocation:(id)arg1;
- (void)removeLbsNotification;
@property(nonatomic) id <SelectLocationDelegate> selLocDel; // @synthesize selLocDel=_selLocDel;
- (void)sendLocation;
- (void)startUpdateLocation;
- (void)viewDidUnload;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


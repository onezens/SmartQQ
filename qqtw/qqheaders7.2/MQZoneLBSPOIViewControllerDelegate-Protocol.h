//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQZoneLBSPOIViewController, NSString, QZGeoInfo, QZPOIInfo;

@protocol MQZoneLBSPOIViewControllerDelegate <NSObject>

@optional
- (void)LBSPOIViewController:(MQZoneLBSPOIViewController *)arg1 customLBSLocationString:(NSString *)arg2;
- (void)LBSPOIViewController:(MQZoneLBSPOIViewController *)arg1 customLBSLocationStringV2:(NSString *)arg2 lbsPoiInfo:(QZPOIInfo *)arg3;
- (void)LBSPOIViewController:(MQZoneLBSPOIViewController *)arg1 selectedLBSPoiInfo:(QZPOIInfo *)arg2;
- (void)LBSPOIViewController:(MQZoneLBSPOIViewController *)arg1 selectedLBSPositon:(QZGeoInfo *)arg2;
@end


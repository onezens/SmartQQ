//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MQZoneLBSPOIViewControllerDelegate.h"

@class NSString, RichStateLBSPOIViewController, UIViewController;

@interface PSInvokeOCS : NSObject <MQZoneLBSPOIViewControllerDelegate>
{
    RichStateLBSPOIViewController *_lbsViewController;
    UIViewController *_vc;
    id _obj;
}

+ (id)getInstance;
- (void)LBSPOIViewController:(id)arg1 customLBSLocationString:(id)arg2;
- (void)LBSPOIViewController:(id)arg1 selectedLBSPoiInfo:(id)arg2;
- (void)LBSPOIViewController:(id)arg1 selectedLBSPositon:(id)arg2;
@property(retain, nonatomic) id obj; // @synthesize obj=_obj;
- (void)presentLBSViewControllerOCS:(id)arg1;
- (void)presetLBSViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UISwitch, UITextField;

@interface RNLBSTestViewController : UIViewController
{
    UITextField *_latA;
    UITextField *_lonA;
    UITextField *_latB;
    UITextField *_lonB;
    UITextField *_nodeCount;
    UITextField *_adcode;
    UISwitch *_autotestSwitch;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITextField *adcode; // @synthesize adcode=_adcode;
@property(retain, nonatomic) UISwitch *autotestSwitch; // @synthesize autotestSwitch=_autotestSwitch;
- (void)backBtnTapped:(id)arg1;
@property(retain, nonatomic) UITextField *latA; // @synthesize latA=_latA;
@property(retain, nonatomic) UITextField *latB; // @synthesize latB=_latB;
@property(retain, nonatomic) UITextField *lonA; // @synthesize lonA=_lonA;
@property(retain, nonatomic) UITextField *lonB; // @synthesize lonB=_lonB;
@property(retain, nonatomic) UITextField *nodeCount; // @synthesize nodeCount=_nodeCount;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;

@end


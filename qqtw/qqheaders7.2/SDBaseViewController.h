//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class NSArray, NSString, UITableView, UIViewController, UIWindow;

@interface SDBaseViewController : QQViewController <UITextViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    NSArray *_lines;
    UIWindow *_systemWindow;
    UIViewController *_popViewController;
    UIWindow *_blackWindow;
}

@property(retain, nonatomic) UIWindow *blackWindow; // @synthesize blackWindow=_blackWindow;
@property(nonatomic) UIViewController *popViewController; // @synthesize popViewController=_popViewController;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


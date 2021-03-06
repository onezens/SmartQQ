//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class MQZoneCreateAlbumInputCell, NSString, QzoneFeedModel, UITableView;

@interface MQZoneAlbumPasswordPicker : QZoneViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate>
{
    QzoneFeedModel *_model;
    UITableView *_tableView;
    MQZoneCreateAlbumInputCell *_cell0;
    MQZoneCreateAlbumInputCell *_cell1;
    id <QZAlbumPasswordPickerDelegate> _preCtr;
}

+ (id)getAlbumPassword:(id)arg1;
+ (void)setAlbumPassword:(id)arg1 password:(id)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)leftButtonClick:(id)arg1;
- (void)loadView;
@property(retain, nonatomic) QzoneFeedModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <QZAlbumPasswordPickerDelegate> preCtr; // @synthesize preCtr=_preCtr;
- (void)rightButtonClick:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZEditEnableSelectAllCell.h"

@class UIButton, UILabel;

@interface QZEditUntimeDateCell : QZEditEnableSelectAllCell
{
    UIButton *_selectAllBtn;
    UILabel *_dateLabel;
    UIButton *_confirmBtn;
}

- (void).cxx_destruct;
- (void)hiddenConfirmButton:(_Bool)arg1;
- (void)onClickConfirmBtn:(id)arg1;
- (void)updateLayoutWithDateStr:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ActionBaseItem.h"

@interface ForwardToOthersActionItem : ActionBaseItem
{
    _Bool _hideEntryForFavorites;
}

+ (id)actionItemWithDelegate:(id)arg1;
@property(nonatomic) _Bool hideEntryForFavorites; // @synthesize hideEntryForFavorites=_hideEntryForFavorites;
- (id)initWithItemDelegate:(id)arg1;
- (void)onItemClick;

@end


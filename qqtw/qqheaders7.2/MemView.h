//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface MemView : UIView
{
    NSMutableArray *_memUin;
    NSMutableArray *_subViews;
    id <MemUnitViewDelegate> _delegate;
    long long _discussGroupUin;
}

+ (double)height:(int)arg1;
+ (struct CGRect)menRect:(long long)arg1 withHead:(long long)arg2;
- (void)dealloc;
@property(nonatomic) id <MemUnitViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)setMemUin:(id)arg1 add:(_Bool)arg2 discussGroupUin:(long long)arg3;

@end

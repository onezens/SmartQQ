//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface FAGlobalCheckboxSelectMgr : NSObject
{
    NSMutableDictionary *_selectedCheckboxDictionary;
    int _maxSelectedCount;
    unsigned long long _maxSelectedTotalFileSize;
    int _lastPhotoIndex;
    _Bool _rememberLastPhoto;
    NSString *_selectedTips;
    int _xo;
    int _selectedPhotoCount;
    int _selectedRecentCount;
    int _selectedLocalCount;
    int _selectedWYCount;
}

+ (id)getInstance;
- (void)clear;
- (id)getCheckedArray;
- (unsigned long long)getLocalFileSize;
- (int)getSelectedLocalCount;
- (int)getSelectedPhotoCount;
- (int)getSelectedRecentCount;
- (int)getSelectedWYCount;
- (long long)getTotalCheckCount;
- (void)getTotalSelectedFileSize:(unsigned long long *)arg1 CloudFileSize:(unsigned long long *)arg2;
- (id)init;
- (_Bool)isChecked:(id)arg1;
@property(readonly, nonatomic) int lastPhotoIndex; // @dynamic lastPhotoIndex;
- (void)rememberLastPhoto;
- (void)resetLastPhoto;
- (void)saveLastPhoto;
- (_Bool)setCheck:(id)arg1 check:(_Bool)arg2 sourceCategory:(int)arg3 index:(int)arg4;
- (void)setLastPhotoIndex:(int)arg1;

// Remaining properties
@property(nonatomic) int maxSelectedCount; // @dynamic maxSelectedCount;
@property(nonatomic) unsigned long long maxSelectedTotalFileSize; // @dynamic maxSelectedTotalFileSize;
@property(retain, nonatomic) NSString *selectedTips; // @dynamic selectedTips;

@end


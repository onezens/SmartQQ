//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QFTSBaseEngine.h"

#import "IFTSFileEngine.h"

@class FTSFileSearchFilter, NSString;

@interface QFTSFileEngine : QFTSBaseEngine <IFTSFileEngine>
{
    FTSFileSearchFilter *_fileFilter;
    _Bool _isWorking;
    NSString *_KeyWord;
}

+ (id)GetInstance;
- (void).cxx_destruct;
@property(copy) NSString *KeyWord; // @synthesize KeyWord=_KeyWord;
- (_Bool)ftsCancelFileSearch;
- (void)ftsConstructFTSEngine;
- (void)ftsDestructFTSEngine;
- (void)ftsFileDoSearch:(id)arg1;
- (void)ftsGetMoreResultsWithSearchKeyword:(id)arg1;
- (void)ftsGetResultsWithSearchKeyword:(id)arg1;
- (_Bool)ftsPauseFileSearch;
- (id)init;
@property _Bool isWorking; // @synthesize isWorking=_isWorking;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

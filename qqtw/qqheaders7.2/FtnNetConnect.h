//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSString;

@interface FtnNetConnect : NSObject
{
    NSMutableData *_responseData;
    NSString *_filePath;
    CDUnknownBlockType _starFtnBlock;
}

- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (long long)getBkn:(id)arg1;
- (void)getTXVideoFtnModel:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType starFtnBlock; // @synthesize starFtnBlock=_starFtnBlock;

@end


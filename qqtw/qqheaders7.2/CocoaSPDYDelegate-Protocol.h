//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSURLRequest, NSURLResponse;

@protocol CocoaSPDYDelegate <NSObject>
- (void)didFailWithErrorCocoaSPDY:(NSError *)arg1;
- (void)didFinishLoadingCocoaSPDY;
- (void)didLoadDataCocoaSPDY:(NSData *)arg1;
- (void)didReceiveResponseCocoaSPDY:(NSURLResponse *)arg1;
- (void)wasRedirectedToRequestCocoaSPDY:(NSURLRequest *)arg1 redirectResponse:(NSURLResponse *)arg2;
@end


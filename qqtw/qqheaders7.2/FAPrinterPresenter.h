//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FAPrintJob, FAPrinter, NSError, UIViewController;

@interface FAPrinterPresenter : NSObject
{
    _Bool _completed;
    UIViewController *_currentViewController;
    FAPrinter *_printer;
    FAPrintJob *_printJob;
    NSError *_error;
}

- (void).cxx_destruct;
- (void)afterPrintActionAirPrint;
- (void)afterPrintActionPCQQ;
- (void)afterPrintActionSmartDevice;
- (id)currentNavHasController:(Class)arg1;
@property(retain, nonatomic) UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (id)initWithViewController:(id)arg1 printer:(id)arg2 printJob:(id)arg3 completed:(_Bool)arg4 error:(id)arg5;
- (void)performAfterPrintAction;
@property(retain, nonatomic) FAPrintJob *printJob; // @synthesize printJob=_printJob;
@property(retain, nonatomic) FAPrinter *printer; // @synthesize printer=_printer;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFDocument, PDFPage;

__attribute__((visibility("hidden")))
@interface PDFDestinationPrivate : NSObject
{
    PDFDocument *document;
    PDFPage *page;
    int type;
    double left;
    double top;
    double right;
    double bottom;
    double zoom;
}

- (void).cxx_destruct;

@end

